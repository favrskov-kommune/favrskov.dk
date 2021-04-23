const _ = require('lodash');

/**
 * Attributes object resembling Drupal's Attribute object behavior.
 *
 * This minimalistic port is essentially just a key/value store for all HTML
 * attributes on an element. All attributes are assumed to be single values,
 * except the 'class' attribute, which is a list of strings that can be modified
 * with the addClass() and removeClass() methods.
 *
 * Drupal does not (yet) have the handy merge() method implemented here.
 *
 * @see https://api.drupal.org/api/drupal/core%21lib%21Drupal%21Core%21Template%21Attribute.php/class/Attribute
 */
class Attribute {

  /**
   * Constructs a new Attribute instance.
   *
   * @param attributes
   *   (optional) An initial set of attributes; either an anonymous object (as
   *   parsed from YAML) or an Attributes instance (as inherited from the
   *   parent template context).
   */
  constructor(attributes) {
    this.storage = {};

    if (attributes !== undefined) {
      this.merge(attributes);
    }
  }

  /**
   * Adds one or more class names to the list of class names.
   *
   * @param classNames
   *   One or more strings to add as class names. Multiple class names should
   *   be passed as separate arguments.
   *
   * @return self
   */
  addClass(...classNames) {
    if (typeof classNames[0] !== 'string') {
      classNames = classNames[0];
    }
    if (this.storage['class'] === undefined) {
      this.storage['class'] = classNames;
    } else {
      this.storage['class'] = _.concat(this.storage['class'], classNames);
    }
    return this;
  };

  /**
   * Removes one or more class names from the list of class names.
   *
   * @param classNames
   *   One or more strings to remove from class names. Multiple class names
   *   must be passed as separate arguments.
   *
   * @return self
   */
  removeClass(...classNames) {
    _.pullAll(this.storage['class'], classNames);
    return this;
  };

  /**
   * Sets an attribute to a given value.
   *
   * @param name
   *   The attribute name to set.
   * @param value
   *   The value to set.
   *
   * @return self
   */
  setAttribute(name, value) {
    this.storage[name] = value;
    return this;
  };

  /**
   * Remove one or more attributes.
   *
   * @param attributes
   *   One or more strings to remove from attributes. Multiple attributes
   *   must be passed as separate arguments.
   *
   * @return self
   */
  removeAttribute(...attributes) {
    let storage = this.storage;
    _.forEach(attributes, function (key) {
      if (storage[key] !== undefined) {
        delete storage[key];
      }
    })
    this.storage = storage;
    return this;
  };

  /**
   * Merges a given set of attributes into this Attributes instance.
   *
   * @param attributes
   *   An anonymous object with key/value pairs to set as attributes, or an
   *   Attributes class instance.
   *
   * @return self
   */
  merge(attributes) {
    if (typeof attributes !== 'object') {
      return this;
    }
    let self = this;
    if (attributes.constructor.name === 'Attributes') {
      this.storage['class'] = _.concat(this.storage['class'], attributes.classes);
      _.merge(this.storage, _.pickBy(attributes.storage, (value, key) => !_.isNull(value)));
    } else {
      _.forEach(attributes, function (value, name) {
        // The interactive web server picks up the internal
        // _keys property in context data that is regenerated
        // by adapter().render().setKeys().
        // (The build/export does not expose this gem.)
        if (name === '_keys') {
          return;
        }
        if (name === 'class') {
          if (typeof value === 'string') {
            value = value.split(' ');
          }
          self.addClass(value);
        } else {
          self.setAttribute(name, value);
        }
      });
    }
    return this;
  };

  /**
   * Serializes all attributes into an HTML element attributes string.
   *
   * The resulting string MUST start with a space, unless there are no attributes
   * to serialize.
   *
   * @return string
   */
  toString() {
    let string = '';
    // Class handling, and filtering and clean up.
    if (this.storage['class'] !== undefined) {
      if (this.storage['class'].length > 0) {
        // Clean up.
        _.remove(this.storage['class'], function (el) {
          return el === undefined || el === '';
        })
        if (this.storage['class'].constructor.name === 'String') {
          this.storage['class'] = [this.storage['class']];
        }
        this.storage['class'] = _.uniq(this.storage['class']).join(' ');
      }
      if (this.storage['class'].length === 0) {
        delete this.storage['class'];
      }
    }
    // Handle attributes.
    _.forEach(this.storage, function (value, name) {
      if (value !== undefined) {
        string += ` ${name}="${value}"`;
      } else
        string += ` ${name}`;
    });
    return string;
  };
}

module.exports = Attribute;
