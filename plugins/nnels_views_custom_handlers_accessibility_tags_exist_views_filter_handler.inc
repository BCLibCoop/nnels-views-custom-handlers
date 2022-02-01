<?php

/**
 * Accessibility Tags Filter Handler.
 */
class nnels_views_custom_handlers_accessibility_tags_exist_views_filter_handler extends views_handler_filter {

  /**
   * Implements views_handler#can_expose().
   */
  function can_expose() {
    return TRUE;
  }

  /**
   * Implements views_object#admin_summary().
   */
  function admin_summary() {
    return t('Accessibility Tags Exist');
  }

  /**
   * Implements views_object#value_form().
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $form['value'] = array(
      '#title' => t('Accessibility Tags Exist'),
      '#type' => 'select',
      '#options' => array(
        1 => 'Yes',
        2 => 'No',
  
      ),
    );
  
    return $form;
  }

  /**
   * Implements views_handler_filter#query().
   */
  function query() {
    $this->accessibility_tags_exist = TRUE;
  }
}
