WxT Media
=========

Assisting with the management of media files in [Drupal WxT][drupalwxt].

Key Features
------------

* Builds upon the [Media][media] module and core Files
* Creates a new taxonomy for Media File Tags
* Adds the autocomplete term reference field <i>Media File Tags</i> to file types. (Image, Video, Audio, Document, and WetKit Video)
* Creates a new media files administration View page with Media File Tags displayed and searchable.
* Can be easily integrated with the default Files administration page.
* Can be easily integrated with the Media Browser.


Further integration possible with a few simple manual steps :
* Add media tags column to the main files administration page (admin/content/file)
  * Edit the View called Administration: Files (/admin/structure/views/view/admin_views_file/edit)
  * Add the field File: Media File Tags
* Add wetkit-media-admin view to the Media browser


<!-- Links Referenced -->

[drupalwxt]:               http://www.drupal.org/project/wetkit
[media]:               http://www.drupal.org/project/media
