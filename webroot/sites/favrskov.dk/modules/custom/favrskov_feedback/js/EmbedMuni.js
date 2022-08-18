/*
  ## Configuration parameters ##

  This section contains available configuration parameters of the chatbot application.

  Start by filling in your municipality code. Under each page that the chatbot should be
  present on the parameter called "category" can be used to enable the dialog to start on a
  specific topic. Use this feature under topics like passport, doctor, moving, drivers license.
  On other pages leave the category empty ("").

  Chatbot colors and fonts are determined by the municipality code. It is automatically loaded
  from the following URL "$chatbotUrl/stylesheets/customization/$municipalityCode/default.css"

  The chatbot animation/presentation may vary depending on the flag called presentationMode. If the
  mode includes showing a text bubble then the variables chatBubbleBackgroundColor and chatBubbleTextColor
  can be used to change colors of the speech bubble. The mode can be configured in the administration application.

  For changing the speech bubble position override the position defined in the css class ".text-bubble" and modify the below values:

  .text-bubble {
    ...
    bottom: 8.5em; <- change this
    right: 11em; <- and this
  }

  NOTE: All comments should be deleted when embedding the script

  @version 1.1 - bumped after a change
  @lastUpdated 2021-01-18
*/

/* ## Municipality specific variables ## */
var municipalityCode = 706; // The municipality code that your site uses
var category = ""; // The category which you want the chatbot to start on. Leave empty if not in category.
var chatbotName = "Muni"; // The name/header text of your chatbot (max chars is 22). In order to change chatbot name in the dialog also a context variable must be updated through the administration module.
var chatBubbleBackgroundColor = undefined; // Override chat bubble background color example "#f1f0f0" <- default
var chatBubbleTextColor = undefined; //  Override chat bubble text color example "#202020" <- default
var chatbotTabIndex = "0"; // The default tab index is 0 and the chatbot is placed at bottom of <body>. This can be changed by website integrator - replace lines "document.body.appendChild" with other hierarchy location.


/* ## Implementation ## */
var chatbotUrl = "https://chatbot.dendigitalehotline.dk";
var xhr = new XMLHttpRequest();
var failoverTried = false;
var chatbotLoaded = false;
var currentHost = Math.round(Math.random());
var backendHosts = [
  "https://ddh-backend-prod.eu-gb.mybluemix.net",
  "https://ddh-backend-prod.eu-de.mybluemix.net"
];

xhr.onreadystatechange = function () {
  if (this.readyState == 4 && this.status == 200 && window.innerWidth > 200) {

    /* Load config */
    var config = xhr.responseText ? JSON.parse(xhr.responseText) : {};
    var presentationMode = config.presentationMode !== undefined ? config.presentationMode : 3;

    /* Add dynamic styles */
    var h = document.getElementsByTagName('head')[0];
    var l = document.createElement('link');
    l.type = 'text/css';
    l.rel = 'stylesheet';
    l.href = chatbotUrl + "/stylesheets/thumbnail.css";

    var chatbotStyle = document.createElement('style');
    if (municipalityCode && municipalityCode > 100 && municipalityCode < 900) {
      chatbotStyle.innerHTML = "#chatbot-container.round:before { background-image: url(" + chatbotUrl + "/images/avatar/customization/" + municipalityCode + "_noshadow.svg); }";
    } else {
      chatbotStyle.innerHTML = "#chatbot-container.round:before { background-image: url(" + chatbotUrl + "/images/avatar/customization/0_noshadow.svg); }";
    }

    if (chatBubbleBackgroundColor && chatBubbleTextColor) {
      chatbotStyle.innerHTML += " .text-bubble { background: " + chatBubbleBackgroundColor + " !important; color: " + chatBubbleTextColor + " !important; } .text-bubble:after { border-left-color: " + chatBubbleBackgroundColor + " !important; }"
    }

    h.appendChild(chatbotStyle);
    h.appendChild(l);

    /* Create elements */
    var chatbotShadow = document.createElement('div');
    chatbotShadow.id = "chatbot-container-shadow";
    chatbotShadow.classList.add("round");

    var chatbotContainer = document.createElement('div');
    chatbotContainer.id = "chatbot-container";
    chatbotContainer.classList.add("round");
    if (presentationMode == 1 || presentationMode == 3) {
      chatbotContainer.classList.add("jump");
    }
    chatbotContainer.setAttribute("role", "region");
    chatbotContainer.setAttribute("tabindex", chatbotTabIndex);
    chatbotContainer.setAttribute("aria-label", "Har du spørgsmål, prøv vores chatbot");
    chatbotContainer.onkeydown = function (e) {
      if (e.key === " " || e.key === "Enter" || e.key === "Spacebar") {
        toggleChatbot(e);
      }
    };
    chatbotContainer.onclick = function (e) {
      toggleChatbot(e);
    };

    var chatbotCloseBtn = document.createElement('div');
    chatbotCloseBtn.id = "x";
    chatbotCloseBtn.classList.add("hidden");
    chatbotCloseBtn.setAttribute("role", "button");
    chatbotCloseBtn.setAttribute("tabindex", "0");
    chatbotCloseBtn.setAttribute("aria-label", "Luk chatbot vindue");
    chatbotCloseBtn.onkeydown = function (e) {
      if (e.key === " " || e.key === "Enter" || e.key === "Spacebar") {
        toggleChatbot(e);
      }
    };
    chatbotCloseBtn.onclick = function (e) {
      toggleChatbot(e);
    };

    var chatbotContent = document.createElement('div');
    chatbotContent.id = "iframe";
    chatbotContent.classList.add("hidden");

    var iframe = document.createElement('iframe');
    iframe.seamless = 'seamless';
    iframe.frameBorder = "0";
    iframe.style.width = '100%';
    iframe.style.height = '100%';
    iframe.style.border = 'none';
    iframe.id = "innerFrame";
    iframe.title = "Har du spørgsmål, prøv vores chatbot";

    chatbotContent.appendChild(iframe);
    chatbotContainer.appendChild(chatbotCloseBtn);
    chatbotContainer.appendChild(chatbotContent);

    document.body.appendChild(chatbotShadow);
    document.body.appendChild(chatbotContainer);

    if (presentationMode === 2 || presentationMode === 3) {
      var chatBubble = document.createElement('div');
      chatBubble.id = "chatbot-bubble";
      chatBubble.classList.add("text-bubble");
      chatBubble.classList.add(presentationMode !== 2 ? "text-bubble-in" : "text-bubble-in-fast");
      chatBubble.textContent = config.presentationMessage && config.presentationMessage !== "" ? config.presentationMessage : "Skal du have hjælp, så spørg mig!"
      document.body.appendChild(chatBubble);

      setTimeout(function () {
        chatBubble.classList.remove(presentationMode !== 2 ? "text-bubble-in" : "text-bubble-in-fast");
        chatBubble.classList.add("text-bubble-out");
      }, 13000);
    }

    function showChatbot() {
      if (!chatbotLoaded) {
        if (category !== "") {
          iframe.src = chatbotUrl + "/?municipalityCode=" + municipalityCode + "&category=" + category + "&name=" + chatbotName
        } else {
          iframe.src = chatbotUrl + "/?municipalityCode=" + municipalityCode + "&name=" + chatbotName;
        }
        chatbotLoaded = true;
      }
      iframe.contentWindow.postMessage("initialize", "*");

      if (document.getElementById("chatbot-bubble")) {
        document.getElementById("chatbot-bubble").classList.add("hidden");
      }

      document.getElementById("chatbot-container").setAttribute("role", "");
      document.getElementById("chatbot-container-shadow").classList.add("hidden");
      document.getElementById("chatbot-container").classList.remove("round");
      document.getElementById("chatbot-container").classList.remove("jump");
      document.getElementById("chatbot-container").classList.add("square");
      document.getElementById("x").classList.remove("hidden");

      setTimeout(function () {
        document.getElementById("iframe").classList.remove("hidden");
      }, 400);
    }

    function hideChatbot() {
      document.getElementById("chatbot-container").setAttribute("role", "button");
      document.getElementById("iframe").classList.add("hidden");
      document.getElementById("chatbot-container").classList.remove("square");
      document.getElementById("chatbot-container").classList.add("round");
      document.getElementById("x").classList.add("hidden");
      document.getElementById("chatbot-container-shadow").classList.remove("hidden");
    }

    function toggleChatbot(event) {
      event = event || window.event;
      event.stopPropagation();
      var container = document.getElementById("chatbot-container");
      if (container.classList.contains("round")) {
        if (window.innerWidth < 450) {
          container.style.width = window.innerWidth - 30 + "px";
        }
        showChatbot()
      } else {
        container.style.width = "";
        hideChatbot()
      }
    }
  } else if (this.readyState == 4 && !failoverTried && this.status != 503) {
    failoverTried = true;
    currentHost = currentHost ? 0 : 1;
    xhr.open("GET", backendHosts[currentHost] + "/api/maintenance/" + municipalityCode, true);
    xhr.send();
  }
};

xhr.open("GET", backendHosts[currentHost] + "/api/maintenance/" + municipalityCode, true);
xhr.send();

function disableiOSDefaultTextFieldZoom() {

  // Are we running on iOS?
  if (!(/iPad|iPhone|iPod/.test(navigator.userAgent) && !window.MSStream))
    return;

  var viewportEl = document.querySelector('meta[name=viewport]');

  if (viewportEl !== null) {
    var content = viewportEl.getAttribute('content');
    var maxScaleRegex = /maximum\-scale=[0-9\.]+/g;

    if (maxScaleRegex.test(content)) {
      content = content.replace(maxScaleRegex, 'maximum-scale=1.0');
    } else {
      content = [content, 'maximum-scale=1.0'].join(', ')
    }

    viewportEl.setAttribute('content', content);
  }
}

disableiOSDefaultTextFieldZoom();
