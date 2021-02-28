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
    if (isset($this->view->field['nid']) && isset($value->{$this->view->field['nid']->field_alias})) {
      if (isset($this->view->field['field_s3_path']) && isset($value->{$this->view->field['field_s3_path']->field_alias})) {
        if (function_exists("_cals_get_node_with_duplicate_s3") ) {
          return _cals_get_node_with_duplicate_s3($value);
        }
        else {
          // cals_file_authentication.module printPre() essentially.
          $markup = '<hr><blockquote>';
          $markup .= '<pre>';
          $markup .= print_r($value. TRUE);
          $markup.= '</pre>';
          $markup .= '</blockquote>';

          return $markup;
        }
      }

      // The duplicate S3 message is dependant on the field_s3_path field. If
      // the field_s3_path field is not present, display some warning text so
      // the admin can fix it.
      else {
        return "'Field: S3 Path' field is missing and is required!";
      }
    }

    // The duplicate S3 message is dependant on the nid field. If the nid
    // field is not present, display some warning text so the admin can fix it.
    else {
      return "'Content: Nid' field is missing and is required!";
    }
  }
}
