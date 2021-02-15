<?php

/**
 * Term Warning Area Handler.
 */
class nnels_views_custom_handlers_term_warning_views_area_handler extends views_handler_area {

  /**
   * Implements views_handler_area#render().
   */
  function render($empty = FALSE) {
    $link = l('config page', 'admin/config/cals_importer/normalization');
    $terms = str_replace("\r\n", ', ', variable_get('cals_importer_prefix_stopwords_narrators'));

    $warning = '<p>' . t('This report strips out the following terms: @terms', array('@terms' => $terms)) . '</p>';
    $warning .= '<p>' . t('To update this list, please go here: !config', array('!config' => $link)) . '</p>';

    return $warning;
  }
}
