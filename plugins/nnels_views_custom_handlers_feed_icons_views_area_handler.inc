<?php

/**
 * Feed Icons Area Handler.
 */
class nnels_views_custom_handlers_feed_icons_views_area_handler extends views_handler_area {

  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    return $feed_icons;
  }
}
