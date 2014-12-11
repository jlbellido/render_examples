<?php

/**
 * Render the HTML for render-examples/example1 path.
 */
function render_examples_example1() {
  global $user;

  $output  = '<div class="logged-user-info">';
  // User picture:
  $output .= theme('user_picture', array('account' => $user));
  // User roles:
  $output .= theme('item_list', array('items' => $user->roles));
  // User achievements:
  $output .= theme('user_achievements', array('points' => 4,'score' => 16));
  $output .= '</div>';

  // Add custom css & js:
  drupal_add_js(drupal_get_path('module', 'render_examples') . '/js/user_achievements.js');
  drupal_add_css(drupal_get_path('module', 'render_examples') . '/css/user_achievements.css');

  return $output;
}