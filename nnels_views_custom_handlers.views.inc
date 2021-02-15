<?php

/**
 * Implements hook_views_data().
 */
function nnels_views_custom_handlers_views_data() {
  $data = [];

  // Field: File Size Warning.
  $data['node']['file_size_warning'] = array(
    'title' => t('File Size Warning'),
    'field' => array(
      'help'    => t('The file size check and warning field (specific to the repository item content type).'),
      'handler' => 'nnels_views_custom_handlers_file_size_warning_views_field_handler',
    ),
  );

  // Area: Add Button.
  $data['views']['add_button'] = array(
    'title' => t('Add Button'),
    'area' => array(
      'help' => t('Add a button.'),
      'handler' => 'nnels_views_custom_handlers_add_button_views_area_handler',
    ),
  );

  // Area: Search Message.
  $data['views']['search_message'] = array(
    'title' => t('Search Message'),
    'area' => array(
      'help' => t('Print message on search page.'),
      'handler' => 'nnels_views_custom_handlers_search_message_views_area_handler',
    ),
  );

  // Area: Term Warning.
  $data['views']['term_warning'] = array(
    'title' => t('Term Warning'),
    'area' => array(
      'help' => t('Print term warning with terms.'),
      'handler' => 'nnels_views_custom_handlers_term_warning_views_area_handler',
    ),
  );

  return $data;
}
