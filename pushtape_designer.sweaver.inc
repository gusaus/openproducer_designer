<?php
/**
 * @file
 * pushtape_designer.sweaver.inc
 */

/**
 * Implements hook_default_sweaver_selector().
 */
function pushtape_designer_default_sweaver_selector() {
  $export = array();

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'body';
    $selector->description = t('Body');
    $selector->selector_selector = 'body';
    $selector->selector_highlight = FALSE;
    $selector->weight = 0;
    $selectors['body'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'menu';
    $selector->description = t('Menu');
    $selector->selector_selector = '.menu';
    $selector->selector_highlight = TRUE;
    $selector->weight = 50;
    $selectors['menu'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'navigation';
    $selector->description = t('Navigation');
    $selector->selector_selector = '.navigation';
    $selector->selector_highlight = TRUE;
    $selector->weight = 50;
    $selectors['navigation'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'read_more';
    $selector->description = t('Read more');
    $selector->selector_selector = '.node-readmore';
    $selector->selector_highlight = TRUE;
    $selector->weight = 51;
    $selectors['read_more'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'h1';
    $selector->description = t('Heading 1');
    $selector->selector_selector = 'h1';
    $selector->selector_highlight = FALSE;
    $selector->weight = 52;
    $selectors['h1'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'h2';
    $selector->description = t('Heading 2');
    $selector->selector_selector = 'h2';
    $selector->selector_highlight = FALSE;
    $selector->weight = 53;
    $selectors['h2'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'h3';
    $selector->description = t('Heading 3');
    $selector->selector_selector = 'h3';
    $selector->selector_highlight = FALSE;
    $selector->weight = 54;
    $selectors['h3'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'li';
    $selector->description = t('a list item');
    $selector->selector_selector = 'li';
    $selector->selector_highlight = FALSE;
    $selector->weight = 55;
    $selectors['li'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'link';
    $selector->description = t('a link');
    $selector->selector_selector = 'a';
    $selector->selector_highlight = FALSE;
    $selector->weight = 56;
    $selectors['link'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'ol';
    $selector->description = t('an ordered list');
    $selector->selector_selector = 'ol';
    $selector->selector_highlight = FALSE;
    $selector->weight = 57;
    $selectors['ol'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'p';
    $selector->description = t('a paragraph');
    $selector->selector_selector = 'p';
    $selector->selector_highlight = FALSE;
    $selector->weight = 58;
    $selectors['p'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'ul';
    $selector->description = t('an unordered list');
    $selector->selector_selector = 'ul';
    $selector->selector_highlight = FALSE;
    $selector->weight = 59;
    $selectors['ul'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'form';
    $selector->description = t('a form');
    $selector->selector_selector = 'form';
    $selector->selector_highlight = FALSE;
    $selector->weight = 60;
    $selectors['form'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'label';
    $selector->description = t('a label');
    $selector->selector_selector = 'label';
    $selector->selector_highlight = FALSE;
    $selector->weight = 61;
    $selectors['label'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'input';
    $selector->description = t('an input field');
    $selector->selector_selector = '.form-text';
    $selector->selector_highlight = FALSE;
    $selector->weight = 62;
    $selectors['input'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'textarea';
    $selector->description = t('a textarea');
    $selector->selector_selector = '.form-textarea';
    $selector->selector_highlight = FALSE;
    $selector->weight = 63;
    $selectors['textarea'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'submit';
    $selector->description = t('a submit button');
    $selector->selector_selector = '.form-submit';
    $selector->selector_highlight = FALSE;
    $selector->weight = 64;
    $selectors['submit'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'allids';
    $selector->description = t('All other id\'s');
    $selector->selector_selector = '';
    $selector->selector_highlight = FALSE;
    $selector->weight = 97;
    $selectors['allids'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'allclasses';
    $selector->description = t('All other classes');
    $selector->selector_selector = '';
    $selector->selector_highlight = FALSE;
    $selector->weight = 98;
    $selectors['allclasses'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = TRUE;
    $selector->name = 'alltags';
    $selector->description = t('All other tags');
    $selector->selector_selector = '';
    $selector->selector_highlight = FALSE;
    $selector->weight = 99;
    $selectors['alltags'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = FALSE;
    $selector->name = 'span';
    $selector->description = t('an item');
    $selector->selector_selector = 'span';
    $selector->selector_highlight = FALSE;
    $selector->weight = 100;
    $selectors['span'] = $selector;

    $selector = new stdClass;
    $selector->api_version = 1;
    $selector->disabled = TRUE;
    $selector->name = 'div';
    $selector->description = t('a region');
    $selector->selector_selector = 'div';
    $selector->selector_highlight = FALSE;
    $selector->weight = 100;
    $selectors['div'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'branding_region';
  $selector->description = 'branding region';
  $selector->selector_selector = '.l-branding';
  $selector->selector_highlight = FALSE;
  $export['branding_region'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'content';
  $selector->description = 'main content area';
  $selector->selector_selector = '.l-content';
  $selector->selector_highlight = FALSE;
  $export['content'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'content_block';
  $selector->description = 'content block';
  $selector->selector_selector = '.pane-views-panes';
  $selector->selector_highlight = FALSE;
  $export['content_block'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'field';
  $selector->description = 'content field';
  $selector->selector_selector = '.field';
  $selector->selector_highlight = FALSE;
  $export['field'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer';
  $selector->description = 'footer region';
  $selector->selector_selector = '.l-footer';
  $selector->selector_highlight = FALSE;
  $export['footer'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'header';
  $selector->description = 'header region';
  $selector->selector_selector = '.l-header';
  $selector->selector_highlight = FALSE;
  $export['header'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_region';
  $selector->description = 'main region';
  $selector->selector_selector = '.l-main';
  $selector->selector_highlight = FALSE;
  $export['main_region'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'page';
  $selector->description = 'Page';
  $selector->selector_selector = '.l-page';
  $selector->selector_highlight = FALSE;
  $export['page'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'page_title';
  $selector->description = 'page title';
  $selector->selector_selector = '.page-title';
  $selector->selector_highlight = FALSE;
  $export['page_title'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'site_name';
  $selector->description = 'site name';
  $selector->selector_selector = '.site-name';
  $selector->selector_highlight = FALSE;
  $export['site_name'] = $selector;

  $selector = new stdClass();
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'widget';
  $selector->description = 'widget';
  $selector->selector_selector = '.view';
  $selector->selector_highlight = FALSE;
  $export['widget'] = $selector;

  return $export;
}
