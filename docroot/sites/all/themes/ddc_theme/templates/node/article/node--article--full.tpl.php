<?php
/**
 * @file
 * Template file for article full view.
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <article>
    <div class="media">
      <div class="pull-right">
        <?php print render($content['field_image']); ?>
        <span class="published-date">Published:</span>
        <?php print render($content['publication_date']); ?>
      </div>
      <div class="media-body">
        <h1><?php print $title; ?></h1>
        <h2><?php print render($content['field_subtitle']); ?></h2>
        <?php print render($content['body']); ?>
      </div>
      <div class="media-footer">
        <?php print render($content['field_author']); ?>
      </div>
    </div>
  </article>
</div>
