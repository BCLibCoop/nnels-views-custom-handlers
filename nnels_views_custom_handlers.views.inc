<?php

/**
 * Implements hook_views_data().
 */
function nnels_views_custom_handlers_views_data() {
  $data = [];

  // Field: Bookshelf Add. Using views here rather than node becuase solr
  // searches don't allow node fields.
  $data['views']['bookshelf_add'] = array(
    'title' => t('Bookshelf Add Link'),
    'field' => array(
      'help'    => t('Add the add to bookshelf link for the bookshelf item.'),
      'handler' => 'nnels_views_custom_handlers_bookshelf_add_views_field_handler',
    ),
  );

  // Field: Bookshelf Remove.
  $data['node']['bookshelf_remove'] = array(
    'title' => t('Bookshelf Remove Link'),
    'field' => array(
      'help'    => t('Add the remove link for the bookshelf item.'),
      'handler' => 'nnels_views_custom_handlers_bookshelf_remove_views_field_handler',
    ),
  );

  // Field: Duplicate S3
  $data['node']['duplicate_s3'] = array(
    'title' => t('Duplicate S3?'),
    'field' => array(
      'help'    => t('Checks for a duplicate S3 file.'),
      'handler' => 'nnels_views_custom_handlers_duplicate_s3_views_field_handler',
    ),
  );

  // Field: File Size Warning.
  $data['node']['file_size_warning'] = array(
    'title' => t('File Size Warning'),
    'field' => array(
      'help'    => t('The file size check and warning field (specific to the repository item content type).'),
      'handler' => 'nnels_views_custom_handlers_file_size_warning_views_field_handler',
    ),
  );

  // Field: Library Login Warning. Using views here rather than node becuase
  // solr searches don't allow node fields.
  $data['views']['library_login'] = array(
    'title' => t('Library Login'),
    'field' => array(
      'help'    => t('The library login field (specific to organizations).'),
      'handler' => 'nnels_views_custom_handlers_library_login_views_field_handler',
    ),
  );

  // Field: S3
  $data['node']['s3_path'] = array(
    'title' => t('S3 Path'),
    'field' => array(
      'help'    => t('S3 path.'),
      'handler' => 'nnels_views_custom_handlers_s3_path_views_field_handler',
    ),
    'filter' => array(
      'help'    => t('S3 Path.'),
      'handler' => 'nnels_views_custom_handlers_s3_path_views_filter_handler',
    ),
  );

  // Filter: Accessibility Tags Exist.
  $data['node']['accessibility_tags_exist'] = array(
    'title' => t('Accessibility Tags Exist'),
    'filter' => array(
      'help'    => t('A toggle to control if the records contain a file resource with accessibility tags or not.'),
      'handler' => 'nnels_views_custom_handlers_accessibility_tags_exist_views_filter_handler',
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

  // Area: Feed Icons.
  $data['views']['feed_icons'] = array(
    'title' => t('Feed Icons'),
    'area' => array(
      'help' => t('Add feed icons'),
      'handler' => 'nnels_views_custom_handlers_feed_icons_views_area_handler',
    ),
  );

  // Area: No Results.
  $data['views']['no_results'] = array(
    'title' => t('No Results'),
    'area' => array(
      'help' => t('Messaging when there are no results.'),
      'handler' => 'nnels_views_custom_handlers_no_results_views_area_handler',
    ),
  );

  // Area: Recently Added Title.
  $data['views']['recently_added_title'] = array(
    'title' => t('Recently Added Title'),
    'area' => array(
      'help' => t('Add a translated title.'),
      'handler' => 'nnels_views_custom_handlers_recently_added_title_views_area_handler',
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

  // Area: Term Title.
  $data['views']['term_title'] = array(
    'title' => t('Term Title'),
    'area' => array(
      'help' => t('Print term title.'),
      'handler' => 'nnels_views_custom_handlers_term_title_views_area_handler',
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
