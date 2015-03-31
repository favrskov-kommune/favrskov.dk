<?php
/**
 * @file
 * rule_send_email_on_comment_posting.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rule_send_email_on_comment_posting_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_on_comment_posting'] = entity_import('rules_config', '{ "rules_send_email_on_comment_posting" : {
      "LABEL" : "Send email on comment posting",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "kommunikation@roskilde.dk",
            "subject" : "' . t("New comment on Roskilde") .'",
            "message" : "[comment:node:title] ' . t("at") . ': [comment:url]\\r\\n\\u003Cbr\\u003E\\r\\n' . t("Author")
                        . ': [comment:author:name]\\r\\n\\u003Cbr\\u003E\\r\\n' . t("Subject")
                        . ': [comment:title]\\r\\n\\u003Cbr\\u003E\\r\\n' . t("Comment text") . ': [comment:body]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
