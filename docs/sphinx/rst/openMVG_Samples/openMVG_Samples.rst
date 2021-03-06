############################
openMVG samples
############################

openMVG focus on a strong implementation checking of the provided features.
To do so it provides unit test (that assert code results and helps user to see how the code must be used) but it provides also illustrated samples of the major features.

The samples can be seen as showcase and tutorials:

imageData
----------

  - some pictures for each of the following examples.

siftPutativeMatches
--------------------

Show how:
  - extract SIFT features and descriptors,
  - match features descriptors,
  - display the computed matches.

image_describer_matches
-------------------------

Show how:
  - use the Image_describer interface to extract features & descriptors
  - match the detected regions
  - display detected features & corresponding matches

robust_homography
--------------------

Show how:
  - estimate a robust homography between features matches.

robust_homography_guided
---------------------------

Show how:
  - estimate a robust homography between features matches,
  - extent the putative matches with a guided filter,
  - warp the query image over the reference image.

robust_fundamental
--------------------

Show how:
  - estimate a robust fundamental matrix between features matches.

robust_essential
--------------------
Show how:
  - estimate a robust essential matrix between features matches,
  - compute the 3D structure by triangulation of the corresponding inliers.

robust_essential_ba 
--------------------

Show how:
  - refine with bundle_adjustment the Structure and Motion of a scene
  - for different camera model:

    - Refine ``[X],[f,R|t]`` (individual cameras),
    - Refine ``[X],[R|t]``, shared ``[f]``,
    - Refine ``[X],[R|t]``, shared brown disto models.

robust_essential_spherical
---------------------------

Show how:
  - estimate a robust essential matrix between two spherical panorama
  - triangulate remaning inliers.

kvld_filter
--------------------

Show how:
  - filter putative matches with the K-VLD filter [KVLD12]_.

exifParsing
--------------------

Show how:
  - parse JPEG EXIF metadata

sensorWidthDatabase
--------------------

Show how:
  - use the camera sensor width database

undisto_Brown
--------------------

Show how:
  - undistord a picture according known Brown radial parameters.


**Don't hesitate to help to extend the list.**
