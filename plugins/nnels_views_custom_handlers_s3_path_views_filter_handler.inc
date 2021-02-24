<?php

/**
 * S3 Path Filter Handler.
 */
class nnels_views_custom_handlers_s3_path_views_filter_handler extends views_handler_filter {

  /**
   * Implements views_handler#can_expose().
   */
  function can_expose() {
    return FALSE;
  }

  /**
   * Implements views_object#admin_summary().
   */
  function admin_summary() {
    return t('S3 Path');
  }

  /**
   * Implements views_object#option_definition().
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['pattern'] = array('default' => '');
    return $options;
  }

  /**
   * Implements views_handler#option_definition().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['pattern'] = array(
      '#type' => 'textfield',
      '#title' => t('Pattern'),
      '#description' => t('Filter out S3 files that match this pattern.'),
      '#default_value' => $this->options['pattern'],
    );
  }

  /**
   * Implements views_handler_filter#query().
   */
  function query() {
    $this->s3_path_filter = TRUE;
  }
}
