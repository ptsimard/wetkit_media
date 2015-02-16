WxT Webform
=========
Helps to manage media files for [Drupal WxT][drupalwxt].

Key Features
------------

* Builds upon the [Media][media] module and core Files
* Creates a new taxonomy for Media File Tags
* Adds autocomplete term reference field to file types Image, Video, Audio, Document, and WetKit Video
* Creates a new Files administration View page with Media File Tags displayed and searchable.
* Can be easily integrated with the default Files administration page.
* Can be easily integrated with the Media Browser.


Further integration possible with a few simple manual steps :
* Add media tags column to the main files administration page (admin/content/file)
  * Edit the View called Administration: Files (/admin/structure/views/view/admin_views_file/edit)
  * Add the field File: Media File Tags
 - Add wetkit-media-admin view to the Media browser


<!-- Links Referenced -->

[drupalwxt]:               http://www.drupal.org/project/wetkit
[media]:               https://www.drupal.org/project/media
