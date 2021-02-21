<?php

/**
 * S3 Path Field Handler.
 */
class nnels_views_custom_handlers_s3_path_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_s3_path = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    return $value->s3_path;
  }
}
