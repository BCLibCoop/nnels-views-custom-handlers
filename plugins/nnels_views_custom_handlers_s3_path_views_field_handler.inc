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
    if (isset($this->view->field['field_s3_path']) && isset($value->field_field_s3_path)) {
      return str_replace(
        's3://download.nnels.ca',
        '',
        $value->field_field_s3_path[0]['raw']['safe_value']
      );
    }

    // The duplicate S3 message is dependant on the field_s3_path field. If
    // the field_s3_path field is not present, display some warning text so the
    // admin can fix it.
    else {
      return "'Field: S3 Path' field is missing and is required!";
    }
  }
}
