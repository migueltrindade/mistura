(function ($) {
	Drupal.behaviors.mistura = {
		attach: function (context, settings) {

      $('ul.social-icons a').hoverIntent(function() {
        $(this).removeClass().addClass('animated flipInX');
      }, function() {
        $(this).removeClass('animated flipInX ')
      });

      if (matchMedia('all and (max-width: 480px)').matches) {
        console.log('Mobile');
        servicos_cycle();
      }
      else if (matchMedia('all and (max-width: 768px)').matches) {
        console.log('Mobile / Tablet');
        servicos_cycle();
      }
      else if (matchMedia('all and (min-width: 768px) and (max-width: 992px)').matches) {
        console.log('Tablet');
        servicos_cycle();
      }
      else if (matchMedia('all and (min-width: 992px) and (max-width: 1200px)').matches) {
        console.log('Desktop');
        servicos_popover();
      }
      else if (matchMedia('all and (min-width: 1200px)').matches) {
        console.log('Tv e Maiores');
        servicos_popover();
      }


      //mql('all and (max-width: 480px)', mobile_js);
      //mql('all and (max-width: 768px)', mobile_js);
      //mql('all and (min-width: 992px)', desktop_js);
      //mql('all and (min-width: 1200px)', desktop_js);

//      function desktop_js(mql) {
//        $('.servicos .row').cycle('destroy');
//      }
//      function mobile_js (mql) {
//        if (mql.matches) {
//          servicos_cycle();
//        }
//      }

      // Serviços
      function servicos_cycle() {
        $('.servicos .row').cycle({
          slides: '> .servicos-item',
          pager: '.cycle-pager'
        });
      }

      function servicos_popover() {
        $('.servicos [data-toggle="popover"]').popover({
          trigger: 'hover',
          html: true,
          pager: '#servicos-cycle-pager'
        });
      }
      // Serviços

    }
	}

}(jQuery));


/*! matchMedia() polyfill - Test a CSS media type/query in JS. Authors & copyright (c) 2012: Scott Jehl, Paul Irish, Nicholas Zakas, David Knight. Dual MIT/BSD license */

window.matchMedia || (window.matchMedia = function() {
  "use strict";

  // For browsers that support matchMedium api such as IE 9 and webkit
  var styleMedia = (window.styleMedia || window.media);

  // For those that don't support matchMedium
  if (!styleMedia) {
    var style = document.createElement('style'),
      script = document.getElementsByTagName('script')[0],
      info = null;

    style.type = 'text/css';
    style.id = 'matchmediajs-test';

    script.parentNode.insertBefore(style, script);

    // 'style.currentStyle' is used by IE <= 8 and 'window.getComputedStyle' for all other browsers
    info = ('getComputedStyle' in window) && window.getComputedStyle(style) || style.currentStyle;

    styleMedia = {
      matchMedium: function(media) {
        var text = '@media ' + media + '{ #matchmediajs-test { width: 1px; } }';

        // 'style.styleSheet' is used by IE <= 8 and 'style.textContent' for all other browsers
        if (style.styleSheet) {
          style.styleSheet.cssText = text;
        } else {
          style.textContent = text;
        }

        // Test if media query is true or false
        return info.width === '1px';
      }
    };
  }

  return function(media) {
    return {
      matches: styleMedia.matchMedium(media || 'all'),
      media: media || 'all'
    };
  };
}());


mql = (function(doc, undefined){

  var bool,
    docElem  = doc.documentElement,
    refNode  = docElem.firstElementChild || docElem.firstChild,
    idCounter = 0;

  return function(q, cb){

    var id = 'mql-' + idCounter++,
      callback = function() {
        cb({ matches: (div.offsetWidth == 42), media: q });
      },
      div = doc.createElement('div');

    div.className = 'mq';
    div.style.cssText = "position:absolute;top:-100em";
    div.id = id;
    div.innerHTML = '&shy;<style media="'+q+'"> #'+id+' { width: 42px; }</style>';

    div.addEventListener('webkitTransitionEnd', callback, false);
    div.addEventListener('transitionend', callback, false); //Firefox
    div.addEventListener('oTransitionEnd', callback, false); //Opera

    docElem.insertBefore(div, refNode);
    //don't delete the div, we need to listen to events
    return { matches: div.offsetWidth == 42, media: q };
  };

})(document);