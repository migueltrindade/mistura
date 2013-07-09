(function ($) {
	Drupal.behaviors.mistura = {
		attach: function (context, settings) {
			$('.block-menu .menu-255 a').bind('click tap', function () {
				$('.outside-top').slideToggle();
				$(this).toggleClass('active');
				return false;
			});

			$('.outside-top a.fechar').bind('click tap', function () {
				$('.block-menu .menu-255 a').trigger('click');
				return false;
			})
		}
	}
}(jQuery));




