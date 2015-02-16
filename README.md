WxT Media
=========

Assisting with the management of media files in [Drupal WxT][drupalwxt].

Key Features
------------

* Builds upon the [Media][media] module and Drupal core Files
* Creates a new taxonomy for Media File Tags.
* Adds an utocomplete term reference field <i>Media File Tags</i> to all file types. (Image, Video, Audio, Document, and WetKit Video)
* Creates a new files administration View page with <i>Media File Tags</i> displayed and searchable.
* Can be easily integrated with the default files administration View page.
* Can be easily integrated with the Media Browser.


<b>Further integration possible with a few simple manual steps</b>


* Add media tags to the default files administration page (/admin/content/file).
  * Edit the View called Administration: Files (/admin/structure/views/view/admin_views_file/edit).
  * Add the new Field called <i>File: Media File Tags</i>.
    * Configure Field : 
      * Label = Tags
      * Formatter = Plain text
  * Rearrange the fields, place <i>File: Media File Tags (Tags)</i> in between <i>File: Name (Title)</i> and <i>File: Type (Type)</i>
* Add wetkit-media-admin view to the Media browser


<!-- Links Referenced -->

[drupalwxt]:               http://www.drupal.org/project/wetkit
[media]:               http://www.drupal.org/project/media
