<?php

/**
 * @file
 * TBD.
 */

/**
 * TBD
 *
 * @param array $form
 *   TBD
 * @param array $form_state
 *   TBD
 * @return mixed
 *   TBD
 */
function sqrl_admin($form, &$form_state) {
  $form['connection'] = array(
    '#type' => 'container',
    '#title' => t('Connection'),
  );
  $form['connection']['sqrl_base_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Base URL'),
    '#default_value' => sqrl_get_base_url(),
  );
  $form['connection']['sqrl_insecure_connection_port'] = array(
    '#type' => 'textfield',
    '#title' => t('Port for insecure connection'),
    '#default_value' => variable_get('sqrl_insecure_connection_port', SQRL_DEFAULT_INSECURE_CONNECTION_PORT),
  );
  $form['connection']['secure_connection'] = array(
    '#type' => 'container',
    '#title' => t('Secure connection'),
    '#disabled' => !sqrl_is_secure_connection_available(),
  );
  $form['connection']['secure_connection']['sqrl_use_secure_connection'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use secure connection'),
    '#default_value' => variable_get('sqrl_use_secure_connection', SQRL_DEFAULT_USE_SECURE_CONNECTION),
  );
  $form['connection']['secure_connection']['sqrl_secure_connection_port'] = array(
    '#type' => 'textfield',
    '#title' => t('Port for secure connection'),
    '#default_value' => variable_get('sqrl_secure_connection_port', SQRL_DEFAULT_SECURE_CONNECTION_PORT),
  );

  $form['options'] = array(
    '#type' => 'container',
    '#title' => t('Options'),
  );
  $form['options']['sqrl_session_allow_multiple'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow multiple sessions per user account'),
    '#default_value' => variable_get('sqrl_session_allow_multiple', SQRL_DEFAULT_SESSION_ALLOW_MULTIPLE),
  );

  // TODO: Provide a list of available QR code solutions and allow the admin to select one of them.

  return system_settings_form($form);
}
