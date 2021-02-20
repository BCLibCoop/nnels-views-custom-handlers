<?php

/**
 * Duplicate S3 Field Handler.
 */
class nnels_views_custom_handlers_duplicate_s3_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_duplicate_s3 = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    return $value->duplicate_s3;
  }
}
