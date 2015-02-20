WxT Media
=========

Improves the management of media files in [Drupal WxT][drupalwxt].

Key Features
------------

* Builds upon the [Media][media] module and Drupal core Files
* Creates a new taxonomy called <i>Media File Tags</i>.
* Adds an autocomplete term reference field called <i>Media File Tags</i> to all of the file types. (Image, Video, Audio, Document, and WetKit Video)
* Creates a new files administration View page (wetkit-media-admin) with <i>Media File Tags</i> displayed and searchable.
* Integrates with the WYSIWYG Media Browser.
* Can be easily integrated with the default Files administration View page.



<b>(Optional) Further Integration Possible:</b> 
1- Add <i>Media File Tags</i> to the default files administration page (/admin/content/file).
 * Edit the View called <i>Administration: Files</i> (/admin/structure/views/view/admin_views_file/edit).
   * Add the new Field called <i>File: Media File Tags</i>, then click <b>Add and configure fields</b>.
     * Shorten the Label text to only <i>Tags</i>.
     * Uncheck <i>Place a colon after the label</i>.
     * Change the Formatter to <i>Plain text</i>, then click <b>Apply</b>.
     * Rearrange the fields to place <i>File: Media File Tags</i> in between <i>File: Name Title</i> and <i>File: Type Type</i>

   * Add a Filter criteria
     * Add the new Field called <i>File: Media File Tags</i>, then click <b>Add and configure filter criteria</b>.
     * Select the option to <i>Autocomplete</i>, then click <b>Apply and Continue</b>.
     * Check the option <i>Expose this filter to visitors, to allow them to change it</i>.
     * Shorten the Label text to only <i>Tags</i>.
     * Check the option to <i>Expose operator</i>.
     * Check the option to <i>Allow multiple selections</i>.
     * Check the option to <i>Remember the last selection</i>, then click <b>Apply</b>.
 * Complete the changes to Files admin page by clicking on <b>Save</b> in the top right corner of the View.



<!-- Links Referenced -->

[drupalwxt]:               http://www.drupal.org/project/wetkit
[media]:               http://www.drupal.org/project/media
