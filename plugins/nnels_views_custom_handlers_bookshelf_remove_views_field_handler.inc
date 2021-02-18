<?php

/**
 * Bookshelf Remove Field Handler.
 */
class nnels_views_custom_handlers_bookshelf_remove_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_bookshelf_remove= TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    return $value->bookshelf_remove;
  }
}
