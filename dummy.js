/**
 * @file
 * Backdrop behavior attached to filter_admin_format_form.
 */
(function ($, Backdrop) {

Backdrop.behaviors.someBehavior = {
  attach: function (context, settings) {
    let unused = 'somevalue';
    let selectProfile = $('#edit-editor-settings-tinymce-settings-profile');
    selectProfile.on('change', function (event) {
      undefinedFunc();
    }
  }
};

})(jQuery, Backdrop);
   