# Basic HTTP Authentication

Module provides a possibility to restrict an access to every system path using basic HTTP authorisation. You can configure, for which paths will be added an additional HTTP authentication before checking its accessibility through standard tools, using UI or programmatically.

## API

Add basic HTTP authorisation for a path:

```php
basic_auth_config_edit('admin/config', TRUE, 'admin', 'passw0rd');
```

Check, that HTTP authentication enabled for a path:

```php
basic_auth_config_exists('admin/config', TRUE) === TRUE;
```

Disable HTTP authentication for a path:

```php
basic_auth_config_edit('admin/config', FALSE);
```

Check, that config exists for a path:

```php
basic_auth_config_exists('admin/config');
```

## Todo

- Hash passwords
