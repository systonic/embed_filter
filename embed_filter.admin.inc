<?php

/**
 * @file
 * .
 */

/**
 * .
 */
function embed_filter_settings() {
  $form = array();

  $form['embed_filter_patterns'] = array(
    '#type' => 'textarea',
    '#title' => t('Patterns'),
    '#default_value' => variable_get('embed_filter_patterns', '|www.youtube.com/embed/|'),
  );

  $form['embed_filter_replace'] = array(
    '#type' => 'textarea',
    '#title' => t('Replace'),
    '#default_value' => variable_get('embed_filter_replace', 'www.youtube-nocookie.com/embed/'),
  );

  return system_settings_form($form);
}

