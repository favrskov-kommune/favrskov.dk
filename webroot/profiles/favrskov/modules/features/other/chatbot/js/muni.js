(function($) {

  Drupal.behaviors.muni = {
    attach: function (context, settings) {
      /*
        The below section contains available configuration parameters
      */
      var municipalityCode = 710; // The municipality code that your site uses
      var category = Drupal.settings.chatbot.category; //settings.chatbotCategory; // The category which you want the chatbot to start on.
      var chatbotName = Drupal.settings.chatbot.name; //settings.chatbotName; // The name of your chatbot
      var chatbotUrl = "https://chatbot.dendigitalehotline.dk";

      /* Implementation */
      var xhr = new XMLHttpRequest();
      var failoverTried = false;

      xhr.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
          if (window.innerWidth > 200) {

            var d1 = document.createElement('div');
            d1.id = "chatbot-container-shadow";
            d1.classList.add("round");

            var d = document.createElement('div');
            d.id = "chatbot-container";
            d.classList.add("round");
            d.classList.add("jump");
            d.onclick = function(e) {
              toggleChatbot(e);
            };

            var d2 = document.createElement('div');
            d2.id = "x";
            d2.classList.add("hidden");
            d2.onclick= function (e) {
              toggleChatbot(e);
            };
            var d3 = document.createElement('div');
            d3.id = "iframe";
            d3.classList.add("hidden");
            var iframe = document.createElement('iframe');
            if(category !== ""){
              iframe.src = chatbotUrl+"/?municipalityCode="+municipalityCode+"&category="+category+"&name="+chatbotName
            }
            else{
              iframe.src = chatbotUrl+"/?municipalityCode="+municipalityCode+"&name="+chatbotName;
            }
            iframe.seamless = 'seamless';
            iframe.frameBorder = "0";

            iframe.style.width = '100%';
            iframe.style.height = '100%';
            iframe.style.border = 'none';
            iframe.id="innerFrame";


            d3.appendChild(iframe);
            d.appendChild(d2);
            d.appendChild(d3);

            document.body.appendChild(d1);
            document.body.appendChild(d);

            var h = document.getElementsByTagName('head')[0];
            var l = document.createElement('link');
            l.type = 'text/css';
            l.rel = 'stylesheet';
            l.href = chatbotUrl+"/stylesheets/thumbnail.css";

            var avatarImgStyle = document.createElement('style');
            if(municipalityCode && municipalityCode > 100 && municipalityCode < 900){
              avatarImgStyle.innerHTML = "#chatbot-container.round:before { background-image: url("+chatbotUrl+"/images/avatar/customization/"+municipalityCode+"_noshadow.svg); }";
            }
            else{
              avatarImgStyle.innerHTML = "#chatbot-container.round:before { background-image: url("+chatbotUrl+"/images/avatar/customization/0_noshadow.svg); }";
            }

            h.appendChild(avatarImgStyle);
            h.appendChild(l);

            function showChatbot () {
              iframe.contentWindow.postMessage("initialize", "*");
              document.getElementById("chatbot-container-shadow").classList.add("hidden");
              document.getElementById("chatbot-container").classList.remove("round");
              document.getElementById("chatbot-container").classList.add("square");
              document.getElementById("chatbot-container").classList.remove("jump");
              document.getElementById("x").classList.remove("hidden");

              setTimeout(function() {
                document.getElementById("iframe").classList.remove("hidden");
              }, 400);
            }

            function hideChatbot () {
              document.getElementById("iframe").classList.add("hidden");
              document.getElementById("chatbot-container").classList.remove("square");
              document.getElementById("chatbot-container").classList.add("round");
              document.getElementById("x").classList.add("hidden");
              document.getElementById("chatbot-container-shadow").classList.remove("hidden");
            }

            function toggleChatbot (event) {
              event = event || window.event;
              event.stopPropagation();
              var container = document.getElementById("chatbot-container");
              if (container.classList.contains("round")) {
                if(window.innerWidth < 450){
                  container.style.width = window.innerWidth-30+"px";
                }
                showChatbot()
              } else {
                container.style.width = "";
                hideChatbot()
              }
            }
          }
        }
        else if (this.readyState == 4 && !failoverTried) {
          failoverTried = true;
          xhr.open("GET", "https://ddh-backend-prod.eu-gb.mybluemix.net/api/health/readiness", true);
          xhr.send();
        }
      };

      xhr.open("GET", "https://ddh-backend-prod.eu-de.mybluemix.net/api/health/readiness", true);
      xhr.send();
    }
  }
})(jQuery);
