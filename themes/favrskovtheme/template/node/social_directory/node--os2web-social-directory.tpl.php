<article>
    <header>
        <h1>
            <?php print $title ?>
        </h1>
    </header>
    <section>
        <?php
        foreach ($content as $field_name => $value) {
            if ($field_name != 'field_os2web_sd_contact_person' && $field_name[0] != '#') {
                print render($value);
            }
        }
        ?>
    </section>
    <footer>
        <?php print render($content['field_os2web_sd_contact_person']); ?>
    </footer>
</article>