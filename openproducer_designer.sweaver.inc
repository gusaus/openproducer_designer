<?php
/**
 * @file
 * openproducer_designer.sweaver.inc
 */

/**
 * Implements hook_default_sweaver_selector().
 */
function openproducer_designer_default_sweaver_selector() {
  $export = array();

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'content';
  $selector->description = 'main content area';
  $selector->selector_selector = '#content';
  $selector->selector_highlight = FALSE;
  $export['content'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer';
  $selector->description = 'footer region';
  $selector->selector_selector = '#footer';
  $selector->selector_highlight = FALSE;
  $export['footer'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'header';
  $selector->description = 'header region';
  $selector->selector_selector = '#header';
  $selector->selector_highlight = FALSE;
  $export['header'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'jumbotron';
  $selector->description = 'A Jumbotron';
  $selector->selector_selector = '.jumbotron';
  $selector->selector_highlight = FALSE;
  $export['jumbotron'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_wrapper';
  $selector->description = 'main wrapper';
  $selector->selector_selector = '#main-wrapper';
  $selector->selector_highlight = FALSE;
  $export['main_wrapper'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'navbar';
  $selector->description = 'Navigation';
  $selector->selector_selector = '.navbar';
  $selector->selector_highlight = TRUE;
  $export['navbar'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'page_title';
  $selector->description = 'page title';
  $selector->selector_selector = '.title';
  $selector->selector_highlight = FALSE;
  $export['page_title'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'panel';
  $selector->description = 'panel';
  $selector->selector_selector = '.panel';
  $selector->selector_highlight = FALSE;
  $export['panel'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'well';
  $selector->description = 'well';
  $selector->selector_selector = '.well';
  $selector->selector_highlight = FALSE;
  $export['well'] = $selector;

  return $export;
}
