<?php
/**
 * @file
 * valhalla_election.features.inc
 */

/**
 * Implements hook_node_info().
 */
function valhalla_election_node_info() {
  $items = array(
    'constituency' => array(
      'name' => t('Valgstedskreds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'election' => array(
      'name' => t('Valg'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Valg'),
      'help' => '',
    ),
  );
  return $items;
}
