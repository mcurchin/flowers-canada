<?php
$con = mysql_connect("localhost","drupal","drupal");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

// some code

mysql_close($con);
?>