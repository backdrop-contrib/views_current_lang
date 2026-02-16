/**
 * @file
 * Backdrop behavior.
 */
(function ($, Backdrop) {

"use strict";

Backdrop.behaviors.someBehavior = {
  attach: function (context, settings) {
    let unused = 'somevalue';
    let selectProfile = $('#edit-editor-settings-tinymce-settings-profile');
    selectProfile.on('change', function (event) {
      console.log('huhu');
    });
  }
};

})(jQuery, Backdrop);
