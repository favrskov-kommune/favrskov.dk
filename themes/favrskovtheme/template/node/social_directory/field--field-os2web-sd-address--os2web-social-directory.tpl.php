<div class="data">
    <h2>
        <?php if (!$label_hidden) print $label ?>
    </h2>

    <p>
        <?php print l($items[0]['#markup'], "http://map.krak.dk/query?what=map&mop=wp&geo_area={$items[0]['#markup']}&stq=0", array('attributes' => array('target' => '_blank'))) ?>
    </p>
</div>
