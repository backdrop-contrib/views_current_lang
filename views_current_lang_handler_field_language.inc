<?php
/**
 * @file
 * Field handler to display values related to current user interface language.
 */

/**
 * Provide a property of currently active UI language.
 */
class views_current_lang_handler_field_language extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['property'] = array('default', 'langcode');
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    $form['property'] = array(
      '#type' => 'select',
      '#title' => t('Language property'),
      '#options' => array(
        'langcode' => t('Language code'),
        'name' => t('Name'),
        'native' => t('Native name'),
        'prefix' => t('Language prefix'),
      ),
      '#required' => TRUE,
      '#default_value' => $this->options['property'],
      '#description' => t('Choose the language property to display.'),
    );
    parent::options_form($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    // NOOP.
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    return $this->getPropertyValue();
  }

  /**
   * Get the actual value, statically cached.
   *
   * @return string
   */
  protected function getPropertyValue() {
    static $value = NULL;

    if (!isset($value)) {
      global $language;
      $property_name = $this->options['property'];
      if ($property_name == 'prefix') {
        $prefixes = config_get('locale.settings', 'language_negotiation_url_prefixes');
        $value = $prefixes[$language->langcode] ?? '';
      }
      else {
        $value = $language->{$property_name};
      }
    }

    return $value;
  }

}
