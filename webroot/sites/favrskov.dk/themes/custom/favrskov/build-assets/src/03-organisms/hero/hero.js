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

const stopVideo = (element, oldSrc, newSrc) => {
  const iframe = element.querySelector('iframe');
  const video = element.querySelector('video');
  if (iframe) {
    const iframeSrc = iframe.src;
    iframe.src = oldSrc;
  }
  if (video) {
    video.pause();
  }
};

const startVideo = (element, oldSrc, newSrc) => {
  const iframe = element.querySelector('iframe');
  const video = element.querySelector('video');
  if (iframe) {
    const iframeSrc = iframe.src;
    iframe.src = newSrc;
  }
  if (video) {
    video.play();
  }
};

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
      currentHero.classList.add('loaded');
      if (currentHero.querySelector('.js-hero-iframe-wrapper')) {
        const iframeWrapper = currentHero.querySelector('.js-hero-iframe-wrapper');
        const iframeVideoButton = currentHero.querySelector('.js-hero__iframe-button');

        let isYoutube = false;
        let oldSrc = '';
        let newSrc = '';

        if (iframeWrapper.querySelector('iframe')) {
          const iframe = iframeWrapper.querySelector('iframe');
          oldSrc = iframe.getAttribute('src');
          newSrc = oldSrc;

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
          } else if (oldSrc.indexOf('cloudflarestream') > -1) {
            newSrc = `${oldSrc}?autoplay=true&muted=true&loop=true`;
          } else {
            newSrc = `${oldSrc}&api=true&autoplay=1&mute=1&loop=1&autopause=0&controls=0&showinfo=0&autohide=1&background=1`;
          }
          iframe.setAttribute('src', newSrc);
          iframe.setAttribute('allow', 'autoplay; fullscreen');
          iframe.setAttribute('aria-hidden', 'true');
          iframeWrapper.classList.add('active');
        } else if (iframeWrapper.querySelector('video')) {
          const video = iframeWrapper.querySelector('video');
          video.autoplay = true;
          video.loop = true;
          video.muted = true;
          video.playsInline = true;
          video.controls = false;
          video.setAttribute('aria-hidden', 'true');
          iframeWrapper.classList.add('active');
        }
        if (isYoutube) {
          loadYoutubeIframeSrc();
        }

        iframeVideoButton.addEventListener('click', () => {
          if (iframeVideoButton.classList.contains('video-stopped')) {
            iframeVideoButton.classList.remove('video-stopped');
            iframeVideoButton.setAttribute('aria-label', 'Stop video');
            startVideo(iframeWrapper, oldSrc, newSrc);
          } else {
            iframeVideoButton.classList.add('video-stopped');
            iframeVideoButton.setAttribute('aria-label', 'Afspil video');
            stopVideo(iframeWrapper, oldSrc, newSrc);
          }
        });
      }
    }
  },
};
