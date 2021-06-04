document.addEventListener('DOMContentLoaded', () => {
  // const links = document.querySelectorAll('.js-submenu a[href*="#"]');
  // console.log(links);
  // if (links.length === 0) {
  //   return;
  // }
  //
  // for (let i = 0; i < links.length; i += 1) {
  //   const link = links[i];
  //   link.addEventListener('click', (e) => {
  //     const hash = link.href.split('#')[1];
  //     const element = document.getElementById(hash);
  //     if (hash.length > 0 && element) {
  //       e.preventDefault();
  //       const topPosition = (element.getBoundingClientRect().top + window.pageYOffset);
  //       animateScrollTo(topPosition, {
  //         speed: 200,
  //       });
  //       scroll({
  //         top: offsetTop,
  //         behavior: 'smooth',
  //       });
  //     }
  //   });
  // }
  // const links = document.querySelectorAll('.js-submenu a[href*="#"]');
  //
  // function clickHandler(e) {
  //   console.log(e);
  //   e.preventDefault();
  //   const href = e.target.hash;
  //   console.log(document.querySelector(href).offsetTop);
  //   const { offsetTop } = document.querySelector(href).offsetTop;
  //
  //   scroll({
  //     top: offsetTop,
  //     behavior: 'smooth',
  //   });
  // }
  //
  // for (let i = 0; i < links.length; i += 1) {
  //   links[i].addEventListener('click', clickHandler);
  // }

  document.querySelectorAll('.js-submenu a[href^="#"]').forEach((anchor) => {
    anchor.addEventListener('click', function foobar(e) {
      e.preventDefault();
      document.querySelector(this.getAttribute('href')).scrollIntoView({
        alignToTop: true,
        block: 'center',
        behavior: 'smooth',
      });
    });
  });
});
