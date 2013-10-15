<?php

/**
 * @file
 * TBD.
 */

/**
 * Callback from sqrl_menu to provide the QR code image for the operation $op.
 *
 * @see sqrl_supported_operations()
 *
 * @param string $op
 */
function sqrl_qr($op) {
  if (!in_array($op, sqrl_supported_operations())) {
    header('http_code: 404', TRUE, 404);
    echo "";
    exit;
  }
  $string = sqrl_get_url($op);

  if (libraries_detect('phpqrcode')) {
    libraries_load('phpqrcode');
    header("Content-type: image/png");
    echo QRcode::png($string, FALSE, QR_ECLEVEL_L, 3, 4, FALSE);
  }

  // TODO: Support alternative QR code libraries or modules.

  exit;
}
