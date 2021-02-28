<?php

/**
 * No Results Area Handler.
 */
class nnels_views_custom_handlers_no_results_views_area_handler extends views_handler_area {

  /**
   * Implements views_object#option_definition().
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['title'] = array('default' => '');
    $options['message'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  /**
   * Implements views_handler#option_definition().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['title'] = array(
      '#type' => 'select',
      '#title' => t('Title Element'),
      '#description' => t('The element of the title - H1 or H4.'),
      '#options' => array(
        'h1' => 'H1',
        'h4' => 'H4',
      ),
      '#default_value' => $this->options['title'],
    );

    $form['message'] = array(
      '#type' => 'textarea',
      '#title' => t('Additional messaging.'),
      '#description' => t('Additional messaging for the no results message.'),
      '#default_value' => $this->options['message'],
    );
  }


  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    $html = '';

    // Set the title properly.
    switch ($this->options['title']) {
      case 'h1':
        $html = '<h1 class="title no-results" id="page-title">No Results</h1>';
        break;

      case 'h4':
        $html = '<h4>No Results</h4>';
        break;
    }

    // Include cals_extended_search module to return bookshare, openlibrary
    // targets.
    if (function_exists("cals_request_new_title_views_link")) {
      $html .= cals_request_new_title_views_link();
    }

    // Add additional message.
    if (!empty($this->options['message'])) {
      $html .= '<br/>';
      $html .= $this->options['message'];
    }

    return $html;
  }
}
