<?php

/**
 * Recently Added Title Area Handler.
 */
class nnels_views_custom_handlers_recently_added_title_views_area_handler extends views_handler_area {

  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    global $language;

    $title = '<hr style="border: 0.5px solid #336699;">';
    $title .= '<h2 class="view-title">';
    if ($language->language == 'en') {
      $title .= l("Recently Added", "recently-added");
    }
    else {
      $title .= l("Ajouts récents", "recently-added");
    }
    $title .= '</h2>';

    return $title;
  }
}
