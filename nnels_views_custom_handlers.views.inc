<?php

/**
 * Implements hook_views_data().
 */
function nnels_views_custom_handlers_views_data() {
  $data = [];

  // Selected Annotation.
  $data['node']['file_size_warning'] = array(
    'title' => t('File Size Warning'),
    'field' => array(
      'help'    => t('The file size check and warning field (specific to the repository item content type).'),
      'handler' => 'nnels_views_custom_handlers_file_size_warning_views_field_handler',
    ),
  );

  return $data;
}
