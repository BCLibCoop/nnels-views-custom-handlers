<?php

/**
 * Add Button Area Handler.
 */
class nnels_views_custom_handlers_add_button_views_area_handler extends views_handler_area {

  /**
   * Implements views_object#option_definition().
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['path'] = array('default' => '');
    $options['text'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  /**
   * Implements views_handler#option_definition().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['path'] = array(
      '#type' => 'textfield',
      '#title' => t('Button Path'),
      '#description' => t('The path of the button. The Node ID of the page that this view is attached to will be appended to the end of this path.'),
      '#default_value' => $this->options['path'],
    );

    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Button Text'),
      '#description' => t('The text of the button.'),
      '#default_value' => $this->options['text'],
    );
  }


  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    $node = menu_get_object();
    $button = '';
    if ($node) {
      $button = '<div class="view-footer">';
      $button .= l(
        $this->options['text'],
        $this->options['path'] . $node->nid,
        array(
          'query' => drupal_get_destination(),
        )
      );
      $button .= '</div>';
    }

    return $button;
  }
}
