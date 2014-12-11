<?php

/**
 * Render the HTML for render-examples/example1 path.
 */
function render_examples_example1() {
  global $user;

  $account = user_load($user->uid);
  $output  = '<div class="logged-user-info">';
  // User picture:
  $output .= "<a href='/user/$account->uid'>";
  $output .= "<img src='/sites/default/files/pictures/" . $account->picture->filename ."'>";
  $output .= "</a>";
  // User roles:
  $output .= '<ul>';
  foreach($user->roles as $rid => $role) {
    $output .= '<li>'. $role .'</li>';
  }
  $output .= '</ul>';
  // User achievements:
  $output .= '<div class="user-achievements">';
  $output .= '<span class="user-points">' . t('User points: @points', array('@points' => 4)) . '</span>';
  $output .= '<span class="highlighted-achievement">';
  $output .= t('Highest score: @score', array('@score' => 16));
  $output .= '</span>';
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}