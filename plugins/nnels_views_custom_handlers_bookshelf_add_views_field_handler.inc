<?php

/**
 * Bookshelf Remove Field Handler.
 */
class nnels_views_custom_handlers_bookshelf_add_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_bookshelf_add = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    $node = $value->_entity_properties['entity object'];
    $flag = flag_get_flag('bookshelf');
    if ($flag) {
      $markup = '<div class="bookshelf-add-wrapper">';
      $markup .= '<i class="fa fa-bookmark-o flag-bookmark-icon" aria-hidden="true"></i>';
      $markup .= flag_create_link('bookshelf', $node->nid);
      $markup .= '</div>';

      return $markup;
    }
  }
}
