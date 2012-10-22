(function($){
  "use strict";

  Drupal.behaviors.features_website = {
    attach: function(context, settings) {
      
    }
  }
  
})(jQuery);

/**
 * Bloqueia a tela mostrando um loader ajax em um lightbox
 */
function ajaxStartLoad() {
  jQuery('body').append('<div id="load-overlay" style="display:none;"><span>Por favor aguarde...</span> </div>');
  jQuery('#load-overlay').show();
}

/**
 * Libera o bloqueio da tela
 * @see ajaxStartLoad
 */
function ajaxStopLoad() {
  if (jQuery('#load-overlay').length) {
    jQuery('#load-overlay').remove();
  }
}