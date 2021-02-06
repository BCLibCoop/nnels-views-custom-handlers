<?php

/**
 * File Size Warning Field Handler.
 */
class nnels_views_custom_handlers_file_size_warning_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_file_size_warning = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    return $value->file_size_warning;
  }
}
