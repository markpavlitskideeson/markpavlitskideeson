<?php

/**
 * @file
 * Article Entity wrapper class.
 */

namespace Drupal\ddc_article\EntityWrapper\Node;

use \EntityDrupalWrapper;

/**
 * Adds additional functionality to the Article content type.
 */
class ArticleWrapper extends EntityDrupalWrapper
{
  /**
   * Construct a new ArticleWrapper object.
   *
   * @param $data
   *   The article to wrap or its identifier.
   * @param $info
   *   Optional. Used internally to pass info about properties down the tree.
   */
  public function __construct($data, $info = array()) {
    parent::__construct('node', $data, $info);
  }

  /**
   * Check if this is a highlighted article.
   *
   * @return boolean
   *   TRUE if the Article is set to be highlighted; FALSE otherwise.
   */
  public function isHighlighted() {
    return (bool) $this->field_highlight->raw();
  }

  /**
   * Check if this content should only be available to members.
   *
   * @return boolean
   *   TRUE if the Article is for members only.
   */
  public function isMembersOnly() {
    // Articles can only be for members-only if they are highlighted.
    if (!$this->isHighlighted()) {
      // This is not a highlighted article, so it can't be for members-only.
      return FALSE;
    }

    // Get the general availability date.
    $available = $this->field_available_date->value();
    // Check if the general availability date has passed.
    if ($available <= REQUEST_TIME) {
      // The article is no longer for members only.
      return FALSE;
    }

    // This content is reserved for members.
    return TRUE;
  }
}
