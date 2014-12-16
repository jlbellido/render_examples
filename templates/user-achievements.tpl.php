<span class="see-points"><?php print t('See user points'); ?></span>
<div class="user-achievements">
  <span class="user-points">
    <?php print t('User points: @points', array('@points' => $points)); ?>
  </span>
  <span class="highlighted-achievement">
    <?php print t('Highest score: @score', array('@score' => $score)); ?>
  </span>
</div>
