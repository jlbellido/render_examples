<?php

/**
 * Render the HTML for render-examples/example1 path.
 */
function render_examples_example1() {
  global $user;

  $render = array(
    'user-picture' => array(
      '#theme' => 'user_picture',
      '#account' => $user,
    ),
    'item-list' => array(
      '#theme' => 'item_list',
      '#items' => $user->roles,
    ),
    'user-achievements' => array(
      '#theme' => 'user_achievements',
      '#points' => 4,
      '#score' => 16,
      '#attached' => array(
        'js' => array(drupal_get_path('module', 'render_examples') . '/js/user_achievements.js'),
        'css' => array(drupal_get_path('module', 'render_examples') . '/css/user_achievements.css'),
      ),
    ),
    'element_cached' => array(
      '#markup' => '',
      '#pre_render' => array('render_element_cached_pre_render'),
      '#cache' => array(
        'keys' => array('render_examples', 'cache-element'),
        'bin' => 'cache',
        'expire' => time() + 10,
        'granularity' => DRUPAL_CACHE_PER_PAGE | DRUPAL_CACHE_PER_USER,
      ),
    ),
    '#attributes' => array('class' => array('logged-user-info')),
    '#theme_wrappers' => array('container', 'render_add_span'),
  );

  return $render;
}