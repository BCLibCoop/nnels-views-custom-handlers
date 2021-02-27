<?php

/**
 * Library Login Field Handler.
 */
class nnels_views_custom_handlers_library_login_views_field_handler extends views_handler_field {

  /**
   * Implements views_handler_field#query().
   */
  function query() {
    $this->field_library_login = TRUE;
  }

  /**
   * Implements views_handler_field#render().
   */
  function render($value) {
    global $user;

    $html = '';
    if ($user->uid == 0) {
      $node = $value->_entity_properties['entity object'];
      $status = field_get_items('node', $node, 'field_partner_library_');
      if ($status) {
        switch ($status[0]['value']) {
          case 0:
            $html = t('This library is not participating in NNELS, yet.') . '<br />';
            $html .= l(t('Please contact us to register your interest.'), "contact/");
            break;

          case 1:
            $html = l(t('If this is your local library, click here to log in with a valid library card from this branch'), "node/" . $node->nid);
            break;

          case 2:
            $html = l(t("Apply for an account"), "node/" . $node->nid);
            break;
        }
      }
    }

    return $html;
  }
}
