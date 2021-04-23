import getVideoId from 'get-video-id';

const loadYoutubeIframeSrc = () => {
  if (document.getElementById('youtube-player')) {
    return;
  }
  const script = document.createElement('script');
  script.id = 'youtube-player';
  script.src = '//www.youtube.com/player_api';
  const lastScriptTag = document.getElementsByTagName('script')[document.getElementsByTagName('script').length - 1];
  lastScriptTag.parentNode.insertBefore(script, lastScriptTag);
};

function onPlayerReady(event) {
  event.target.playVideo();
}

function onPlayerStateChange(event) {
  if (event.data === 0) {
    event.target.seekTo(0);
  }
}

window.onYouTubePlayerAPIReady = function onYouTubePlayerAPIReady() {
  const heros = document.querySelectorAll('.js-hero');
  if (heros.length === 0) {
    return;
  }

  for (let i = 0; i < heros.length; i += 1) {
    const currentHero = heros[i];
    const iframe = currentHero.querySelector('iframe');
    if (iframe) {
      const { videoId } = currentHero.querySelector('iframe').dataset;
      if (videoId) {
        const player = new window.YT.Player(`oembed_video_id_${videoId}`, {
          videoId,
          events: {
            onReady: onPlayerReady,
            onStateChange: onPlayerStateChange,
          },
        });
      }
    }
  }
};

Drupal.behaviors.hero = {
  attach(context) {
    const heros = document.querySelectorAll('.js-hero:not(.loaded)');
    if (heros.length === 0) {
      return;
    }

    for (let i = 0; i < heros.length; i += 1) {
      const currentHero = heros[i];
      const iframeWrapper = currentHero.querySelector('.js-hero-iframe-wrapper');
      currentHero.classList.add('loaded');

      let isYoutube = false;
      if (iframeWrapper.querySelector('iframe')) {
        const iframe = iframeWrapper.querySelector('iframe');
        const oldSrc = iframe.getAttribute('src');
        let newSrc = oldSrc;

        // Drupal gives us eg:
        // media/oembed?url=https%3A//www.youtube.com/watch%3Fv%3DaE2vilQu7BQ&max_width=0&...
        // But we want the https://www.youtube.com/embed/ version so we can talk with Youtube API.
        const cleanUrl = decodeURIComponent(newSrc.replace('/media/oembed?url=', ''));
        if (oldSrc.indexOf('youtube') > -1) {
          isYoutube = true;
          const { id } = getVideoId(cleanUrl.replace(cleanUrl.substr(cleanUrl.indexOf('&'), cleanUrl.length), ''));
          iframe.setAttribute('id', `oembed_video_id_${id}`);
          iframe.dataset.videoId = id;
          const { origin } = window.location;
          newSrc = `https://www.youtube.com/embed/${id}?mute=1&controls=0&showinfo=0&autohide=1&background=1&playsinline=1&origin=${origin}&enablejsapi=1`;
        } else if (oldSrc.indexOf('vimeo') > -1) {
          const { id } = getVideoId(cleanUrl.replace(cleanUrl.substr(cleanUrl.indexOf('&'), cleanUrl.length), ''));
          newSrc = `https://player.vimeo.com/video/${id}?api=true&autoplay=1&mute=1&loop=1&autopause=0&controls=0&showinfo=0&autohide=1&background=1`;
        } else {
          newSrc = `${oldSrc}&api=true&autoplay=1&mute=1&loop=1&autopause=0&controls=0&showinfo=0&autohide=1&background=1`;
        }
        iframe.setAttribute('src', newSrc);
        iframe.setAttribute('allow', 'autoplay; fullscreen');
        iframeWrapper.classList.add('active');
      } else if (iframeWrapper.querySelector('video')) {
        const video = iframeWrapper.querySelector('video');
        video.setAttribute('autoplay', 'true');
        video.setAttribute('loop', 'true');
        video.setAttribute('muted', 'true');
        iframeWrapper.classList.add('active');
      }
      if (isYoutube) {
        loadYoutubeIframeSrc();
      }
    }
  },
};
