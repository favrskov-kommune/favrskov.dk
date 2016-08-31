<?php if (empty($box['color'])): ?>
<div class="combi-box">
  <?php else: ?>
  <div class="combi-box <?php print $box['color'] . ' ' .$box['class']; ?>">
    <?php endif ?>
    <div class="icon-<?php print $box['class']; ?>"> </div>

    <?php if(!empty($box['time_ago']) || !empty($box['username'])): ?>
      <span class="box-info">

        <?php if ($box['time_ago']): ?>
          <span class="time-ago"> <?php print $box['time_ago']; ?> </span>
        <?php endif; ?>

        <?php if ($box['username']): ?>
          <span class="username"> <?php print $box['username']; ?> </span>
        <?php endif; ?>
      </span>
    <?php endif; ?>

    <a href="<?php print $box['url'] ?>" target="_blank">

      <?php if (!empty($box['image'])): ?>
        <img src="<?php print $box['image'] ?>">
      <?php endif ?>

      <?php if (!empty($box['text'])): ?>
        <span> <?php print $box['text'] ?> </span>
      <?php endif ?>
    </a>
  </div>
