WxT Media
=========

Assisting with the management of media files in [Drupal WxT][drupalwxt].

Key Features
------------

* Builds upon the [Media][media] module and Drupal core Files
* Creates a new taxonomy for Media File Tags.
* Adds an autocomplete term reference field <i>Media File Tags</i> to all file types. (Image, Video, Audio, Document, and WetKit Video)
* Creates a new files administration View page with <i>Media File Tags</i> displayed and searchable.
* Can be easily integrated with the default files administration View page.
* Can be easily integrated with the Media Browser.


<b>Further integration possible with a few simple manual steps</b>


* Add media tags to the default files administration page (/admin/content/file).
  * Edit the View called Administration: Files (/admin/structure/views/view/admin_views_file/edit).
  * Add the new Field called <i>File: Media File Tags</i>, then click <b>Add and configure fields</b>.
    * Reduce the Label text to just <i>Tags</i>.
    * Uncheck <i>Place a colon after the label</i>.
    * Change Formatter to <i>Plain text</i>, then click <b>Apply</b>
  * Rearrange the fields, place <i>File: Media File Tags (Tags)</i> in between <i>File: Name (Title)</i> and <i>File: Type (Type)</i>

* Add a Filter criteria
  * Add the new Field called <i>File: Media File Tags</i>, then click <b>Add and configure filter criteria</b>.
  * Select the option to <i>Autocomplete</i>, then click <b>Apply and Continue</b>.
    * Check the option <i>Expose this filter to visitors, to allow them to change it</i>.
    * Reduce the Label text to just <i>Tags</i>.
    * Check the option to <i>Expose operator</i>.
    * Check the option to <i>Allow multiple selections</i>.
    * Check the option to <i>Remember the last selection</i>.


* Add wetkit-media-admin view to the Media browser


<!-- Links Referenced -->

[drupalwxt]:               http://www.drupal.org/project/wetkit
[media]:               http://www.drupal.org/project/media
