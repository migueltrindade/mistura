(function($){
  "use strict";

  Drupal.behaviors.features_admin = {
    attach: function(context, settings) {
      // Add smooth "Back to Top" animation.
      var $toplink = $('a.action-top', context);

      if ($toplink.length) {
        $toplink.click(function(e){
          jQuery.scrollTo(0, 600, {
            easing : 'easeInCubic'
          });
          e.preventDefault();
          return false;
        });
      }
      
      // Insert span inside a tag
      $('#block-features-admin-features-admin-menu li a').wrapInner('<span />');
    }
  }
})(jQuery);