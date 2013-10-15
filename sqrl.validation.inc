<?php

/**
 * @file
 * TBD.
 */

/**
 * Callback from sqrl_menu to start a validation of a SQRL request from a
 * SQRL client for the given operation $op.
 *
 * @see sqrl_supported_operations()
 *
 * @param string $op
 */
function sqrl_validation($op) {
  /*
   * Validate, that this is a legitimate request:
   * - Are all required parameters provided and properly formatted?
   * - Is the NUK valid?
   * - Is the given $op supported?
   */
  // TODO: implement the first two tests.
  if (!in_array($op, sqrl_supported_operations())) {
    header('http_code: 404', TRUE, 404);
    echo "Bad boy";
    exit;
  }

  /*
   * Determine the session that relates to the given NUK.
   */
  // TODO

  /*
   * Determine the user account according to the given public key.
   */
  // TODO

  /*
   * Validate the signature.
   */
  // TODO

  /*
   * Invalidate other user sessions if required.
   */
  // TODO

  /*
   * Start user session and send a signal to the waiting browser.
   */
  // TODO

  /*
   * Send feedback to the request and exit.
   */
  header('http_code: 200', TRUE, 200);
  echo "SQRL: OK";
  exit;
}
