<?php
namespace Deployer;

use Deployer\Exception\GracefulShutdownException;
use Deployer\Utility\Httpie;

set('disable_slack', false);

desc('Process slack notification');
task('slack:notify', function () {
  if (get('disable_slack')) {
    return;
  }

  $attachment = [
    'title' => get('application', 'Unknown project'),
    'text' => get('slack_text'),
    'color' => get('slack_color'),
    'mrkdwn_in' => ['text'],
  ];

  Httpie::post(get('slack_webhook'))->body(['attachments' => [$attachment]])->send();
})
  ->shallow()
  ->setPrivate();

desc('Send slack notification about initiating deployment');
task('slack:notify:start', function () {
  if (get('disable_slack')) {
    return;
  }

  set('slack_color', 'E6E6E6');

  $git_name = runLocally('git config --get user.name');
  $git_email = runLocally('git config --get user.email');
  if(empty($git_name) && empty($git_email)){
    throw new GracefulShutdownException('You need to specify Git user.name and user.email in your Git configuration.');
  }
  $git_user = !empty($git_name) ? (!empty($git_email) ? $git_name.' <'.$git_email.'>' : $git_name) : $git_email;

  set('slack_text', '_'.$git_user.'_ is deploying `{{branch}}` branch to *{{target}}*');

})
  ->once()
  ->setPrivate()
;


desc('Send slack notification about successful deployment');
task('slack:notify:success', function () {
  if (get('disable_slack')) {
    return;
  }

  set('slack_color', '4AB441');
  set('slack_text', 'Deploy to *{{target}}* successful');

})
  ->once()
  ->setPrivate();

desc('Send slack notification about failed deployment');
task('slack:notify:failed', function () {
  if (get('disable_slack')) {
    return;
  }

  set('slack_color', 'CF423F');
  set('slack_text', 'Deploy to *{{target}}* failed');

})
  ->once()
  ->setPrivate();

task('slack:check', function () {
  if (!get('disable_slack') && !get('slack_webhook', false)) {
    if(askConfirmation('No slack-hook found. Would you like to continue without sending slack notifications?')){
      set('disable_slack', true);
    } else {
      throw new GracefulShutdownException('Cancelling deploy');
    }
  }
})
  ->once()
  ->setPrivate();


after('slack:notify:start', 'slack:notify');

after('slack:notify:success', 'slack:notify');

after('slack:notify:failed', 'slack:notify');
