<?php

/**
 * Search Message Area Handler.
 */
class nnels_views_custom_handlers_search_message_views_area_handler extends views_handler_area {

  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    $message = '';
    if (!isset($_GET['search_api_views_fulltext'])) {
      $message = '<p>' . t('NNELS is a service primarily for persons with a print disability. For materials limited only to print disabled Canadians NNELs requires logging in with your public library card and PIN. Follow the search step to login via your library.') . '</p>';
    }

    return $message;
  }
}
