<?php

/**
 * @file
 *   CoffeeBot API settings.
 */

/**
 * CoffeeBot API global settings form.
 *
 * @param $form_state
 *   FAPI form state
 * @return
 *   FAPI form definition
 * @ingroup forms
 * @see deploy_server_form_validate()
 * @see deploy_server_form_submit()
 */
function coffeebot_settings_form() {
  $form = array();

  $form['coffeebot_channel'] = array(
    '#title' => t('CoffeeBot Channel'),
    '#type' => 'textfield',
    '#size' => 32,
    '#maxlength' => 32,
    '#required' => TRUE,
    '#default_value' => variable_get('coffeebot_channel', COFFEEBOT_DEFAULT_CHANNEL),
    '#description' => t('Slack Channel. eg)@user_name for direct message or #channel_name for group message.'),
  );

  $form['coffeebot_user'] = array(
    '#title' => t('CoffeeBot\'s name'),
    '#type' => 'textfield',
    '#size' => 32,
    '#maxlength' => 32,
    '#required' => TRUE,
    '#default_value' => variable_get('coffeebot_user', COFFEEBOT_DEFAULT_USERNAME),
    '#description' => t('Give CoffeeBot a name.'),
  );

  $form['coffeebot_icon_emoji'] = array(
    '#title' => t('CoffeeBot\'s Icon emoji'),
    '#type' => 'textfield',
    '#size' => 32,
    '#maxlength' => 32,
    '#required' => TRUE,
    '#default_value' => variable_get('coffeebot_icon_emoji', COFFEEBOT_DEFAULT_EMOJI),
    '#description' => t('Give CoffeeBot a face.'),
  );
  
  $form['content_json_url'] = array(
    '#title' => t('CoffeeBot\'s content json url'),
    '#type' => 'textfield',
    '#size' => 500,
    '#maxlength' => 500,
    '#required' => TRUE,
    '#default_value' => variable_get('content_json_url', CONTENT_JSON_URL),
    '#description' => t('JSON URL.'),
  );

  return system_settings_form($form);
}
