<?php

namespace Drupal\basic_auth\Tests;

/**
 * Class BasicAuthTest.
 */
class BasicAuthTest extends \DrupalWebTestCase {

  const DATA = [
    [
      'path' => 'admin/people',
      'username' => 'test',
      'password' => '1234',
    ],
    [
      'path' => 'admin/appearance',
      'username' => 'admin',
      'password' => 'passw0rd',
    ],
    [
      'path' => 'basic-auth-test',
      'username' => 'views-page',
      'password' => 'passw0rd',
    ],
  ];

  /**
   * {@inheritdoc}
   */
  public static function getInfo() {
    return [
      'name' => 'Basic HTTP Authentication',
      'group' => 'Security',
      'description' => t('Testing functionality of Basic HTTP Authentication module.'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  protected function setUp() {
    parent::setUp('basic_auth_test');
  }

  /**
   * Check whether menu items with basic HTTP authentication can be rendered.
   */
  public function testNavigationModules() {
    module_enable(['admin_menu']);

    // Let our tests know about new module enabled.
    $this->resetAll();

    if ($this->createBasicAuthConfigurations([
      [
        'path' => 'user/logout',
        'username' => 'test',
        'password' => 'test',
      ],
    ], [
      'access administration menu',
      'access administration pages',
    ])) {
      $this->drupalGet('<front>');

      if ($this->assertResponse(200, 'Admin menu successfully rendered an item with basic HTTP authentication.')) {
        $this->drupalGet('user/logout');
        $this->assertResponse(401, 'Page requires passing basic HTTP authorisation first.');
      }
    }
  }

  /**
   * Tests configuration through UI.
   */
  public function testConfigForm() {
    if ($this->createBasicAuthConfigurations(static::DATA)) {
      $this->validate(static::DATA);
    }
  }

  /**
   * Test configuration through API.
   */
  public function testApi() {
    $path = 'admin/abracadabra';

    // Try to create new configuration with non-existent path.
    try {
      basic_auth_config_edit($path);
    }
    catch (\InvalidArgumentException $e) {
      $this->assertTrue(strpos($e->getMessage(), $path) !== FALSE, 'Cannot create configuration for non-existent menu path.');
    }

    // Try to create new items without username and password.
    foreach (static::DATA as $item) {
      try {
        basic_auth_config_edit($item['path']);
      }
      catch (\InvalidArgumentException $e) {
        $this->assertTrue(strpos($e->getMessage(), 'required data') !== FALSE, 'Cannot create configuration without username or password.');
      }
    }

    // Create configuration programmatically.
    foreach (static::DATA as $item) {
      // Every configuration is enabled.
      basic_auth_config_edit($item['path'], TRUE, $item['username'], $item['password']);
    }

    // Need to reset static cache because we're doing all in a single request.
    $this->resetAll();
    $this->validate(static::DATA);

    foreach (static::DATA as $item) {
      // Disable the configuration without removal.
      basic_auth_config_edit($item['path'], FALSE);
      // Check that configuration has been disabled.
      $this->assertTrue(basic_auth_config_exists($item['path'], FALSE), sprintf('Configuration for "%s" has been disabled.', $item['path']));
      // Completely remove the configuration.
      basic_auth_config_remove($item['path']);
      // Check that configuration was removed.
      $this->assertFalse(basic_auth_config_exists($item['path']), sprintf('Configuration for "%s" has been removed.', $item['path']));
    }
  }

  /**
   * Ensure that paths restricted by HTTP and original access checks.
   *
   * @param array[] $items
   *   An array of arrays with "path", "username" and "password".
   */
  protected function validate(array $items) {
    foreach ($items as $item) {
      // Visit path, for which was configured basic HTTP authentication.
      $this->drupalGet($item['path']);
      // User should be unauthorized.
      $this->assertResponse(401, sprintf('Path "%s" requires basic HTTP authentication.', $item['path']));
      // Perform request with data for authorisation.
      $this->curlExec([
        CURLOPT_URL => url($item['path'], ['absolute' => TRUE]),
        CURLOPT_NOBODY => FALSE,
        CURLOPT_HTTPGET => TRUE,
        CURLOPT_USERPWD => sprintf('%s:%s', $item['username'], $item['password']),
      ]);
      // Expected result is 403 because user has not enough Drupal permissions.
      $this->assertResponse(403, sprintf('User has passed basic HTTP authentication for "%s".', $item['path']));
    }
  }

  /**
   * Logic as a user with permissions and create basic authentication configs.
   *
   * @param array[] $items
   *   An array of arrays with "path", "username" and "password" keys.
   * @param string[] $permissions
   *   Drupal permissions to create user with.
   *
   * @return bool
   *   A state, whether the configuration has been created correctly.
   */
  protected function createBasicAuthConfigurations(array $items, array $permissions = []) {
    $permissions[] = 'configure basic auth';

    $this->drupalLogin($this->drupalCreateUser(array_unique($permissions)));
    // Visit page with configurations.
    $this->drupalGet('admin/config/system/basic-auth');

    $configs = [];

    foreach ($items as $i => $item) {
      foreach ($item as $property => $value) {
        $configs["items[$i][$property]"] = $value;
      }

      // Pres "Add new item" to load a form.
      $this->drupalPostAJAX(NULL, NULL, ['op' => t('Add new item')]);
    }

    // Save the configuration.
    $this->drupalPost(NULL, $configs, t('Save'));

    foreach ($items as $item) {
      if (!$this->assertTrue(basic_auth_config_exists($item['path'], TRUE), sprintf('Configuration for "%s" has been created.', $item['path']))) {
        return FALSE;
      }
    }

    return TRUE;
  }

}
