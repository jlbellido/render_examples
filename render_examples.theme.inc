<?php

/**
 * Implements theme_THEME().
 */
function theme_render_add_span(&$variables) {
  $element = $variables['element'];
  $output = '<span class="render-wrapper-span">';
  $output .= $element['#children'];
  $output .= '</span>';
  return $output;
}