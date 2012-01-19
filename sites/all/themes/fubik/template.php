<?php

/**
 * Preprocessor for theme('page').
 */
function fubik_preprocess_html(&$vars) {

  $vars['classes_array'][] = 'fubik';
  
  if(isset($vars['page']['sidebar_first'])) {
    $vars['classes_array'][] = 'fubik-sidebar-first';
  }
  if(isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-sidebar-second';
  }
  if(isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-two-sidebars';
  }
  if((!isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) || (isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second']))) {
    $vars['classes_array'][] = 'fubik-one-sidebar';
  }
  if(!isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'fubik-no-sidebars';
  }
}

/**
 * Preprocessor for theme('page').
 */
function fubik_preprocess_page(&$vars) {
  // Process local tasks. Only do this processing if the current theme is
  // indeed Rubik. Subthemes must reimplement this call.
  global $theme;
  if ($theme === 'fubik') {
    _rubik_local_tasks($vars);
  }
}

/**
 * Override of theme('menu_local_task').
 */
function fubik_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  // Render child tasks if available.
  $children = '';
  if (element_children($variables['element'])) {
    $children = drupal_render_children($variables['element']);
    $children = "<ul class='secondary-tabs links clearfix'>{$children}</ul>";
  }

  return '<li' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . $children . "</li>\n";
}

/**
 * Preprocessor for theme('help').
 */
function fubik_preprocess_help(&$vars) {
  $vars['hook'] = 'help';
  $vars['attr']['id'] = 'help-text';
  $class = 'path-admin-help clear-block toggleable';
  $vars['attr']['class'] = isset($vars['attr']['class']) ? "{$vars['attr']['class']} $class" : $class;
  $help = menu_get_active_help();
  if (($test = strip_tags($help)) && !empty($help)) {
    // Thankfully this is static cached.
    $vars['attr']['class'] .= menu_secondary_local_tasks() ? ' with-tabs' : '';

    $vars['is_prose'] = TRUE;
    $vars['layout'] = TRUE;
    $vars['content'] = "<span class='icon'></span>" . $help;

    // Link to help section.
    $item = menu_get_item('admin/help');
    if ($item && $item['path'] === 'admin/help' && $item['access']) {
      $vars['links'] = l(t('More help topics'), 'admin/help');
    }
  }
}

