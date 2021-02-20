<?php

/**
 * Term Title Area Handler.
 */
class nnels_views_custom_handlers_term_title_views_area_handler extends views_handler_area {

  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    $term = taxonomy_term_load(arg(1));

    $title = '<h2 class="view-title">';
    $title .= $term->name;
    $title .= '</h1>';

    return $title;
  }
}
