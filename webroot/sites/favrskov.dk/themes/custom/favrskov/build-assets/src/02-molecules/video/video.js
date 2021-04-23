const playVideo = (parent, target) => {
  target.classList.add('active');
  parent.classList.add('video--hide-content');

  if (target.querySelector('iframe')) {
    const iframe = target.querySelector('iframe');
    const oldSrc = iframe.getAttribute('src');
    iframe.setAttribute('src', `${oldSrc}&autoplay=1&showinfo=0&autohide=1&mute=0`);

    const newTargetDiv = iframe.parentNode;
    const newIframe = iframe;
    iframe.parentNode.removeChild(iframe);
    newTargetDiv.append(newIframe);
  } else if (target.querySelector('video')) {
    const video = target.querySelector('video');
    video.setAttribute('autoplay', 'true');

    const newTargetDiv = video.parentNode;
    const newVideo = video;
    video.parentNode.removeChild(video);
    newTargetDiv.append(newVideo);
  }
};

Drupal.behaviors.video = {
  attach(context) {
    const videos = document.querySelectorAll('.js-video:not(.loaded)');
    if (videos.length === 0) {
      return;
    }

    for (let i = 0; i < videos.length; i += 1) {
      const currentVideo = videos[i];
      const playIcon = currentVideo.querySelector('.js-video-play-icon');
      const iframeWrapper = currentVideo.querySelector('.js-video-iframe-wrapper');
      currentVideo.classList.add('loaded');

      playIcon.addEventListener('click', (e) => {
        playVideo(e.currentTarget.parentNode, iframeWrapper);
      });
    }
  },
};
