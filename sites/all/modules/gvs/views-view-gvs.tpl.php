<?php
global $base_url;
// $Id: views-view-gvs.tpl.php,v 1.2 2010/06/29 11:30:28 btomic Exp $
/**
 * @file
 */
?>

<?php
  
  drupal_add_js(
    array(
      'gvs' => array(
        'ajaxUrl' =>url('gvs/ajax')
      ),
    )
    , 'setting');  

//Embed control
if ($options['emlinkforever'])
  $dest = file_create_filename($embed_file_basename, $embed_file_destpath);
else
  $dest = $embed_file_dest;
$strrr = rawurlencode($embed_file_filestring);
?>

<?php 
$str = 'Drupal.behaviors.embedLinkBehaviour = function (context) {' .
    '$("#'. $gvs_id . 'a", context).click(function() {' .
      '$(\'div#' . $gvs_id . 'inst\').toggle(400);' .
      '$.ajax({' .
        'type: \'POST\',' .
        'url: Drupal.settings.gvs.ajaxUrl,' .
        'data: \'dest=' . $dest . '&forever=' . $options['emlinkforever'] . '&filestring=' . $strrr . '\'});' .
      '$(this, context).hide("slow")' .
    '});' .
'};';
?>
<?php drupal_add_js($str, 'inline'); ?> 
<div id="<?php echo $gvs_id; ?>" style="text-align:center; height:<?php echo $divh; ?>;width:<?php echo $divw; ?>;"></div>
<?php
if ($emlink && $user->uid != 0 && user_access('see embeding link')){
  echo '<div id="'. $gvs_id.'emb" class="view-embed-link" style="text-align:right;font-size:80%;">' .
      '<a id="' . $gvs_id . 'a"  href="javascript: void(0);">[embed]</a></div>';
  print "<div id=\"" . $gvs_id . "inst" . "\" class=\"embed-instructions\" style=\" display: none; font-size:90%;\"><strong>Embed link:</strong><br/>";
  print "<div class=\"embed-code\" style=\" color: #666; font-size:90%\">";
  print "&lt;iframe frameborder=\"0\" scrolling = \"no\" width=\"" . $view->style_options['width'] . "\" height=\"" . $view->style_options['height'] . "\" src=\"";
  print $base_url . "/";
  //print $embed_file_path;
  print $dest;
  print "\"&gt;&lt;/iframe&gt</div></div>";
}
?> 
