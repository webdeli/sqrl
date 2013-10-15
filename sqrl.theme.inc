<?php

/**
 * @file
 * TBD.
 */

function theme_sqrl_user_profile($variables) {
  $content = $variables['content'];
  return '';
}

function theme_sqrl_register($variables) {
  $sqrl = $variables['sqrl'];
  return '<div id="sqrl-register" class="sqrl register">' . $sqrl . '</div>';
}

function theme_sqrl_login($variables) {
  $sqrl = $variables['sqrl'];
  return '<div id="sqrl-login" class="sqrl login">' . $sqrl . '</div>';
}
