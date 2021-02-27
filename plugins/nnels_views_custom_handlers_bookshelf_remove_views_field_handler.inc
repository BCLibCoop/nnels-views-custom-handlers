<?php

/**
 * Bookshelf Remove Field Handler.
 */
class nnels_views_custom_handlers_bookshelf_remove_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_bookshelf_remove = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    if (isset($this->view->field['nid']) && isset($value->{$this->view->field['nid']->field_alias})) {
      $flag = flag_get_flag('bookshelf');
      $flag->unflag_short = 'Remove';
      return flag_create_link('bookshelf', $value->{$this->view->field['nid']->field_alias});
    }

    // The bookshelf_remove link is dependant on the nid field. If the nid
    // field is not present, display some warning text so the admin can fix it.
    else {
      return "'Content: Nid' field is missing and is required!";
    }
  }
}
