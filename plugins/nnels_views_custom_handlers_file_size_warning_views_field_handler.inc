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
    if (isset($this->view->field['filesize']) && isset($value->{$this->view->field['filesize']->field_alias})) {

      // If the filesize is greater than the threshold set, show the file size
      // warning. Defaults to 400 MB in bytes.
      if ((int) $value->{$this->view->field['filesize']->field_alias} > variable_get("nnels_filesize_large_threshold", 419430400)) {
        $alt = t('Filesize Warning');
        $title = t('This file&apos;s size is larger than average on NNELS. Expect a longer download time than usual, depending on your connection.');
        $message = t('Long download time');

        $markup = '<div class="file-size-warning" alt="' . $alt . '" title="' . $title . '">';
        $markup .= '<i class="fa fa-exclamation-triangle" aria-hidden="true"> ' . $message . '</i>';
        $markup .= '</div>';

        return $markup;
      }
    }

    // The file size warning is dependant on the filesize field. If the file-
    // size field is not present, display some warning text so the admin can
    // fix it.
    else {
      if (user_access('administer nodes')) //Only display for permissioned roles
        return "'File: Size' field is missing and is required!";
      else return NULL;
    }
  }
}
