(function ($) {
	Drupal.behaviors.mistura = {
		attach: function (context, settings) {

      $('ul.social-icons a').hoverIntent(function() {
        $(this).removeClass().addClass('animated flipInX');
      }, function() {
        $(this).removeClass('animated flipInX ')
      });

      $('body.front .servicos [data-toggle="popover"]').popover({
        trigger: 'click',
        html: true
      }).on('show.bs.popover hide.bs.popover', function () {
          //$(this).toggleClass('active');
      });

//      if (matchMedia('all and (max-width: 480px)').matches) {
//        console.log('Mobile');
//      }
//      else if (matchMedia('all and (max-width: 768px)').matches) {
//        console.log('Tablet');
//      }
//      else if (matchMedia('all and (max-width: 992px)').matches) {
//        console.log('Monitor');
//      }
//      else if (matchMedia('all and (min-width: 992px)').matches) {
//        console.log('TV e maiores');
//      }


      mql('all and (max-width: 480px)', mobile_js);
      mql('all and (max-width: 768px)', mobile_js);
      mql('all and (min-width: 992px)', desktop_js);
      mql('all and (min-width: 1200px)', desktop_js);

      function desktop_js(mql) {
        $('.servicos .row').cycle('destroy');
      }


      function mobile_js (mql) {
        if (mql.matches) {
          $('.servicos .row').cycle({
            prev: '#prev',
            next: '#next',
            slides: '> div'
          });
        }
      }
    }
	}

}(jQuery));




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