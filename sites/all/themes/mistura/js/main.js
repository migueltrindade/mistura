(function ($) {
	Drupal.behaviors.mistura = {
		attach: function (context, settings) {

      $('ul.social-icons a').hoverIntent(function() {
        $(this).removeClass().addClass('animated flipInX');
      }, function() {
        $(this).removeClass('animated flipInX ')
      });
    }
	}
}(jQuery));




