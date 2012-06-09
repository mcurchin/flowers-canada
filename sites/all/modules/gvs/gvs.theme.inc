<?php
// $Id: gvs.theme.inc,v 1.12 2010/10/14 07:23:05 btomic Exp $
/**
 * @file
 */

/**
 * Implementation of template_preprocess
 */

function template_preprocess_views_view_gvs(&$vars) {
  global $user;
  global $language;
  $mcstate="";
// preprocess css information for the template
  $view = $vars['view'];
  $no_of_rows=count($view->result);

  $basetable=$view->base_table;
  $vars['divh']=$vars['options']['height'];
  $vars['divw']=$vars['options']['width'];
  $vars['emlink']=$vars['options']['emlink'];

  if ($vars['divh'] == '') $vars['divh']='100%';
  if ($vars['divw'] == '') $vars['divw']='100%';
  $pattern = "/^([0-9])+$/";
  if (!preg_match($pattern, $vars['divh'])) $vars['divh']='100%';
  if (!preg_match($pattern, $vars['divw'])) $vars['divw']='100%';
  if ($vars['divh']!='100%')$vars['divh']=$vars['divh'].'px';
  if ($vars['divw']!='100%')$vars['divw']=$vars['divw'].'px';

  // Width and height properties for API
  $csa=array();
  $csa['width']=$vars['options']['width'];
  $csa['height']=$vars['options']['height'];

  if ($vars['options']['title']!='')  $csa['title'] = $vars['options']['title'];
  // Make DIV instance
  $vars['gvs_id'] = 'gvs-'. $view->name  . '-'. $view->current_display;
  $vars['cwidth'] = $vars['options']['width'];
  $vars['cheight'] = $vars['options']['height'];

  // Color paletes for GeoMap and other charts
  $colorspie[1]=array('#1d73aa', '#c44441', '#8cbc4f', '#7a5892', '#009ab2', '#f48533', '#8baad1');
  $colorspie[2]=array('#003DF5', '#6633FF', '#CC33FF', '#FF33CC', '#3366FF', '#33CCFF', '#C3D9FF', '#002EB8', '#FF3366', '#33FFCC', '#B88A00', '#F5B800', '#FF6633', '#33FF66', '#66FF33', '#CCFF33', '#FFCC33');
  $colorspie[3]=array('#FFD300', '#90FF00', '#FF5F00', '#3D00FF', '#807540', '#648040', '#805740', '#4F4080', '#4D3F00', '#2B4D00', '#4D1C00', '#12004D', '#FFE980', '#C8FF80', '#FFAF80', '#9E80FF', '#FFFBE6', '#F4FFE6', '#FFEFE6', '#ECE6FF');
  $colorspie[4]=array('#FF1A00', '#CC0000', '#FF7400', '#008C00', '#006E2E', '#4096EE', '#FF0084');
  $colorspie[5]=array('#B02B2C', '#D15600', '#C79810', '#73880A', '#6BBA70', '#3F4C6B', '#356AA0', '#D01F3C');
  $colorspie[6]=array('#D81F26', '#F15D51', '#F7A396', '#FDE2DB', '#DDE9EC', '#88CADD', '#0092C2', '#144A90');
  $colorspie[7]=array('#ebebff', '#000379');
  $colorspie[8]=array('#FFEEF3', '#8F0028');
  $colorspie[9]=array('#FCE5FF', '#B100C6');
  $colorspie[10]=array('#e3ffc7', '#3d7c00');
  $colorspie[11]=array('#a12c21', '#e74d24', '#f37121', '#f6f5bc', '#f7f9e4', '#f89728', '#fec246', '#ffe38d');
  $colorspie[12]=array('#00fa2c', '#00dd25', '#00bf1f', '#00a06a', '#007d10', '#005908', '#002e02', '#000d10');

  $colorsmap[1]=array(0x1d73aa, 0xc44441, 0x8cbc4f, 0x7a5892, 0x009ab2, 0xf48533, 0x8baad1);
  $colorsmap[2]=array(0x3366FF, 0x6633FF, 0xCC33FF, 0xFF33CC, 0x33CCFF, 0xC3D9FF, 0x003DF5, 0x002EB8, 0xFF3366, 0x33FFCC, 0xB88A00, 0xF5B800, 0xFF6633, 0x33FF66, 0x66FF33, 0xCCFF33, 0xFFCC33);
  $colorsmap[3]=array(0xFFD300, 0x90FF00, 0xFF5F00, 0x3D00FF, 0x807540, 0x648040, 0x805740, 0x4F4080, 0x4D3F00, 0x2B4D00, 0x4D1C00, 0x12004D, 0xFFE980, 0xC8FF80, 0xFFAF80, 0x9E80FF, 0xFFFBE6, 0xF4FFE6, 0xFFEFE6, 0xECE6FF);
  $colorsmap[4]=array(0xFF1A00, 0xCC0000, 0xFF7400, 0x008C00, 0x006E2E, 0x4096EE, 0xFF0084);
  $colorsmap[5]=array(0xB02B2C, 0xD15600, 0xC79810, 0x73880A, 0x6BBA70, 0x3F4C6B, 0x356AA0, 0xD01F3C);
  $colorsmap[6]=array(0xd81f26, 0xf15d51, 0xf7a396, 0xfde2db, 0xdde9ec, 0x88cadd, 0x0092c2, 0x144a90);
  $colorsmap[7]=array(0xebebff, 0x000379);
  $colorsmap[8]=array(0xffeef3, 0x8f0028);
  $colorsmap[9]=array(0xfce5ff, 0xb100c6);
  $colorsmap[10]=array(0xe3ffc7, 0x3d7c00);
  $colorsmap[11]=array(0xa12c21, 0xffe38d);
  $colorsmap[12]=array(0x00fa2c, 0x000d10);

  if ($vars['options']['isimage']){
    $colorspie[1]=array ('1d73aaff','c44441ff','8cbc4fff','7a5892ff','009ab2ff','f48533ff','8baad1ff');
    $colorspie[2]=array ('003DF5ff', '6633FFff', 'CC33FFff', 'FF33CCff', '3366FFff', '33CCFFff', 'C3D9FFff', '002EB8ff', 'FF3366ff', '33FFCCff', 'B88A00ff', 'F5B800ff', 'FF6633ff', '33FF66ff', '66FF33ff', 'CCFF33ff', 'FFCC33ff');
    $colorspie[3]=array ('FFD300ff', '90FF00ff', 'FF5F00ff', '3D00FFff', '807540ff', '648040ff', '805740ff', '4F4080ff', '4D3F00ff', '2B4D00ff', '4D1C00ff', '12004Dff', 'FFE980ff', 'C8FF80ff', 'FFAF80ff', '9E80FFff', 'FFFBE6ff', 'F4FFE6', 'FFEFE6', 'ECE6FF');
    $colorspie[4]=array ('FF1A00ff', 'CC0000ff', 'FF7400ff', '008C00ff', '006E2Eff', '4096EEff', 'FF0084ff');
    $colorspie[5]=array ('B02B2Cff', 'D15600ff', 'C79810ff', '73880Aff', '6BBA70ff', '3F4C6Bff', '356AA0ff', 'D01F3Cff');
    $colorspie[6]=array ('D81F26ff', 'F15D51ff', 'F7A396ff', 'FDE2DBff', 'DDE9ECff', '88CADDff', '0092C2ff', '144A90ff');
    $colorspie[7]=array ('ebebffff', '000379ff');
    $colorspie[8]=array ('FFEEF3ff', '8F0028ff');
    $colorspie[9]=array ('FCE5FFff', 'B100C6ff');
    $colorspie[10]=array('e3ffc7ff', '3d7c00ff');
    $colorspie[11]=array('a12c21ff', 'e74d24ff', 'f37121ff', 'f6f5bcff', 'f7f9e4ff', 'f89728ff', 'fec246ff', 'ffe38dff');
    $colorspie[12]=array('00fa2cff', '00dd25ff', '00bf1fff', '00a06aff', '007d10ff', '005908ff', '002e02ff', '000d10ff');
  }
  
  // Generate appropriate js code for different type of charts
  switch ($vars['options']['type']) {
    case '0':
      // PieChart
	  if ($vars['options']['isimage']){
		$constructor='ImagePieChart';
		$package='imagepiechart';
		$csa['labels'] = 'value';
	  } else {
		$constructor='PieChart';
		$package='corechart';
		if ($vars['options']['pieSliceText'] !='') $csa['pieSliceText'] = $vars['options']['pieSliceText'];
		if ($vars['options']['pieFontSize'] !='') $csa['pieSliceTextStyle']['fontSize'] = $vars['options']['pieFontSize'];
		if ($vars['options']['pieFontColor'] !='') $csa['pieSliceTextStyle']['color'] = $vars['options']['pieFontColor'];
		if ($vars['options']['pieMinimalAngle'] !='') $csa['sliceVisibilityThreshold'] = $vars['options']['pieMinimalAngle'];
	  }
      if ($vars['options']['is3D']) $csa ['is3D'] =  true; else $csa ['is3D'] = false;
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
	  $labely1 = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');data.addColumn('number','" . $labely1 . "');
                data.addRows(" . $no_of_rows . ");";
      $xfield=$view->field[$vars['options']['xaxis']]->field;
      $yfield=$view->field[$vars['options']['yaxis1']]->field;
      for ($j=0;$j<$no_of_rows;$j++) {
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        $strdata .= "data.setValue(" . $j . ", 1, " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
      }
      break;
    case '1':
      // Gauge
      $constructor='Gauge';
	  $package='gauge';
	  
	  if ($vars['options']['greenFrom'] !='') $csa['greenFrom'] =$vars['options']['greenFrom'];
	  if ($vars['options']['greenTo'] !='') $csa['greenTo'] = $vars['options']['greenTo'];
	  if ($vars['options']['yellowFrom'] !='') $csa['yellowFrom'] = $vars['options']['yellowFrom'];
	  if ($vars['options']['yellowTo'] !='') $csa['yellowTo'] = $vars['options']['yellowTo'];
	  if ($vars['options']['redFrom'] !='') $csa['redFrom'] = $vars['options']['redFrom'];
	  if ($vars['options']['redTo'] !='') $csa['redTo'] = $vars['options']['redTo'];
	  if ($vars['options']['GaugeMin'] !='') $csa['min'] = $vars['options']['GaugeMin'];
	  if ($vars['options']['GaugeMax'] !='') $csa['max'] = $vars['options']['GaugeMax'];

	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
	  $labely1 = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');data.addColumn('number','" . $labely1 . "');
                data.addRows(" . $no_of_rows . ");";
      $xfield=$view->field[$vars['options']['xaxis']]->field;
      $yfield=$view->field[$vars['options']['yaxis1']]->field;
      for ($j=0;$j<$no_of_rows;$j++) {
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        $strdata .= "data.setValue(" . $j . ", 1, " . (is_null($yvalue)?'undefined': strip_tags($yvalue)) . ");";
      }
      break;
    case '2':
      // BarChart
	  if ($vars['options']['isimage']){
		$constructor='ImageBarChart';
		$package='imagebarchart';
	  } else {
		$constructor='BarChart';
		$package='corechart';
	  }
      if ($vars['options']['isStacked']) $csa ['isStacked'] = true; else $csa ['isStacked'] = false;
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  if ($vars['options']['is3D']) $csa ['is3D'] =  true; else $csa ['is3D'] = false;

	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');";
      for ($jj=1; $jj<21; $jj++) {
        if ($vars['options']['yaxis' . $jj] != ''){
	 	  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $labely . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0; $j<$no_of_rows; $j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis']]->field;
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . ( is_null($xvalue) ? 'undefined' : "'" .  str_replace("'","`",strip_tags($xvalue)) . "'" ) . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ( $vars['options']['yaxis' . $jj] != '' ) {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '3':
      // AreaChart
	  if ($vars['options']['isimage']){
		$constructor='ImageAreaChart';
		$package='imageareachart';
	  } else {
        $constructor='AreaChart';
		$package='corechart';
      }
      if ($vars['options']['isStacked']) $csa ['isStacked'] = true; else $csa ['isStacked'] = false;
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];	  
      $strdata="data.addColumn('string','" . $labelx . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $labely . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis']]->field;
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined': strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '4':
      // ColumnChart
	  if ($vars['options']['isimage']){
	  	$constructor='ImageBarChart';
		$package='imagebarchart';
	    $csa['isVertical']=true;
	  } else {
		$constructor='ColumnChart';
		$package='corechart';
	  }
      if ($vars['options']['isStacked']) $csa ['isStacked'] = true;
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
      if ($vars['options']['is3D']) $csa ['is3D'] =  true; else $csa ['is3D'] = false;
	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $labely . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis']]->field;
		$xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '5':
      // LineChart
	  if ($vars['options']['isimage']){
		$constructor='ImageLineChart';
		$package='imagelinechart';
	  } else {
        $constructor='LineChart';
		$package='corechart';
	  }
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  if ($vars['options']['interpolateNulls']!='0') $csa ['interpolateNulls'] = true; else $csa ['interpolateNulls'] = false;
	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $labely . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis']]->field;
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '6':
      // ScatterChart
      $constructor='ScatterChart';
	  $package='corechart';
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  if ($vars['options']['curveType']!='' && $vars['options']['curveType']!='none') $csa ['curveType'] = $vars['options']['curveType'];
	  
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis1']]['label'] : $view->field[$vars['options']['xaxis1']]->options['label'];	  	  	  
      $strdata="data.addColumn('number','" . $labelx . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $labely . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis1']]->field;
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':strip_tags($xvalue)) . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '7':
      // GeoMap
      $constructor='GeoMap';
	  $package='geomap';
	  $csa['region'] = $vars['options']['region1']; $csa['dataMode'] = $vars['options']['geomaptype'];
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorsmap[$vars['options']['color']];

      $no_of_cols=array();
      if ($vars['options']['geomaptype']=='region') {
		$label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label'] : $view->field[$vars['options']['geomapstring']]->options['label'];
        $strdata="data.addColumn('string','" . $label . "');";
        $no_of_cols[]='geomapstring';
        if ($vars['options']['yaxis1']!='') {
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];
          $strdata .= "data.addColumn('number','" . $label . "');";
          $no_of_cols[]='yaxis1';
        }
        if ($vars['options']['xaxis']!='') {
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
          $no_of_cols[]='xaxis';
        }
      }
      else {
        if ($vars['options']['geomaplat']!='' && $vars['options']['geomaplon']!='') {
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomaplat']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomaplat']]['label'] : $view->field[$vars['options']['geomaplat']]->options['label'];
          $strdata="data.addColumn('number','" . $label . "');";
          $no_of_cols[]='geomaplat';
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomaplon']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomaplon']]['label'] : $view->field[$vars['options']['geomaplon']]->options['label'];
          $strdata .= "data.addColumn('number','" . $label . "');";
          $no_of_cols[]='geomaplon';
          if ($vars['options']['yaxis1']!='') {
		    $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];		  
            $strdata .= "data.addColumn('number','" . $label . "');";
            $no_of_cols[]='yaxis1';
          }
          if ($vars['options']['xaxis']!='') {
			$label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
            $strdata .= "data.addColumn('string','" . $label . "');";
            $no_of_cols[]='xaxis';
          }
        }
        else {
          if ($vars['options']['geomapstring']!='') {
			$label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label'] : $view->field[$vars['options']['geomapstring']]->options['label'];
            $strdata="data.addColumn('string','" . $label . "');";
            $no_of_cols[]='geomapstring';
            if ($vars['options']['yaxis1']!='') {
			  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];
              $strdata .= "data.addColumn('number','" . $label . "');";
              $no_of_cols[]='yaxis1';
            }
            if ($vars['options']['xaxis']!='') {
			  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
              $strdata .= "data.addColumn('string','" . $label . "');";
              $no_of_cols[]='xaxis';
            }
          }
          else
            $strdata='Error';
        }
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++)
        for ($jj=0;$jj<count($no_of_cols);$jj++) {
          $xfield=$view->field[$vars['options'][$no_of_cols[$jj]]]->field;
          $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];

          if ($no_of_cols[$jj]=='yaxis1' || $no_of_cols[$jj]=='geomaplat' || $no_of_cols[$jj]=='geomaplon')
            $strdata .= "data.setValue(" . $j . "," . $jj . "," . (is_null($xvalue)?'undefined':strip_tags($xvalue)) . ");";
          else {
            if ($no_of_cols[$jj]=='xaxis') $xvalue=strtoupper($xvalue);
            $strdata .= "data.setValue(" . $j . "," . $jj . "," . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
          }
        }
      break;
    case '8':
      // Intensity Map
      $constructor='IntensityMap';
	  $package='intensitymap';
	  $csa['region'] = $vars['options']['region'];
	  if ($vars['options']['color']!='0') $csa ['colors'] = $colorspie[$vars['options']['color']];
	  $labelx = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata="data.addColumn('string','" . $labelx . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $labely = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];		
          $strdata .= "data.addColumn('number','". $labely ."');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $jjj=1;
        $xfield=$view->field[$vars['options']['xaxis']]->field;
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" . str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field;
            $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
        }
      }
      break;
    case '9':
      // Motion Chart
	  $constructor='MotionChart';
	  $package='motionchart';
	  
	  if ($vars['options']['showChartButtons'])  $csa['showChartButtons'] = true; else $csa['showChartButtons'] = false;
	  if ($vars['options']['showHeadermc']) $csa['showHeader'] = true; else $csa['showHeader'] = false;
	  if ($vars['options']['showSelectListComponent']) $csa['showSelectListComponent'] = true; else $csa['showSelectListComponent'] = false;
	  if ($vars['options']['showSidePanel']) $csa['showSidePanel'] = true; else $csa['showSidePanel'] = false;
	  if ($vars['options']['showXMetricPicker']) $csa['showXMetricPicker'] = true; else $csa['showXMetricPicker'] = false;
	  if ($vars['options']['showYMetricPicker']) $csa['showYMetricPicker'] = true; else $csa['showYMetricPicker'] = false;
	  if ($vars['options']['showXScalePicker']) $csa['showXScalePicker'] = true; else $csa['showXScalePicker'] = false;
	  if ($vars['options']['showYScalePicker']) $csa['showYScalePicker'] = true; else $csa['showYScalePicker'] = false;
	  if ($vars['options']['showAdvancedPanel']) $csa['showAdvancedPanel'] = true; else $csa['showAdvancedPanel'] = false;
      if ($vars['options']['state'] !='') $mcstate = "'".$vars['options']['state']."'";

	  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata="data.addColumn('string','" . $label . "');";
	  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1_1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1_1']]['label'] : $view->field[$vars['options']['yaxis1_1']]->options['label'];
      if ($vars['options']['mcdateformat'] == '1'){
		$strdata .= "data.addColumn('date','" . $label . "');";
	  } elseif ($vars['options']['mcdateformat'] == '2') {
		$strdata .= "data.addColumn('number','" . $label . "');";
	  } else {
		$strdata .= "data.addColumn('string','" . $label . "');";
	  }
      for ($jj=2;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $label . "');";
		}
      }
      for ($jj=2;$jj<21;$jj++) {
        if ($vars['options']['zaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label'] : $view->field[$vars['options']['zaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $xfield=$view->field[$vars['options']['xaxis']]->field_alias;
        $xvalue=$view->result[$j]->$xfield;
        $yfield=$view->field[$vars['options']['yaxis1_1']]->field_alias;
        $yvalue=$view->result[$j]->$yfield;
        $strdata .= "data.setValue(" . $j . ", 0," . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";

        if (is_null($yvalue))
          $strdata .= "data.setValue(" . $j . ", 1, undefined);";
        else {
			switch ($vars['options']['mcdateformat']){
				case '1':
					$yvaluedate = strtotime($yvalue);
					if ($yvaluedate === FALSE) $yvaluedate=strtotime(date("Y-m-d H:i:s",$yvalue));
					if ($yvaluedate === FALSE)
						$strdata .= "data.setValue(" . $j . ", 1, undefined);";
					else
						$strdata .= "data.setValue(" . $j . ", 1, new Date (" . date('Y', $yvaluedate) . "," . (date('m', $yvaluedate)-1) . "," . date('d', $yvaluedate) . "));";
				break;
				case '2':
					$yvaluedate = strtotime($yvalue);
					if ($yvaluedate === FALSE) $yvaluedate=strtotime(date("Y-m-d H:i:s",$yvalue));
					if ($yvaluedate === FALSE)
						$strdata .= "data.setValue(" . $j . ", 1, undefined);";
					else
						$strdata .= "data.setValue(" . $j . ", 1,". date('Y', $yvaluedate) .");";
					break;
				case '3':
					$yvaluedate = strtotime($yvalue);
					if ($yvaluedate === FALSE) $yvaluedate=strtotime(date("Y-m-d H:i:s",$yvalue));					
					if ($yvaluedate === FALSE)
						$strdata .= "data.setValue(" . $j . ", 1, undefined);";
					else
						$strdata .= "data.setValue(" . $j . ", 1,'". date('Y', $yvaluedate)."W".date('W', $yvaluedate)."');";
					break;
				case '4':
					if (preg_match("/^(\d{4})Q(\d{1})$/", $yvalue,$aaa)){
						$yvaluedate = strtotime($aaa[1]."W".($aaa[2]-1)*15+1);
						$strdata .= "data.setValue(" . $j . ", 1,'". date('Y', $yvaluedate)."Q".((int)floor(date('m', $yvaluedate)/3.1)+1)."');";
					} else {
						$yvaluedate = strtotime($yvalue);
						if ($yvaluedate === FALSE)
							$strdata .= "data.setValue(" . $j . ", 1, undefined);";
						else
							$strdata .= "data.setValue(" . $j . ", 1,'". date('Y', $yvaluedate)."Q".((int)floor(date('m', $yvaluedate)/3.1)+1)."');";
					}
					break;
			}
        }

        $jjj=2;
        for ($jj=2;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
            $yfield=$view->field[$vars['options']['yaxis' . $jj]]->field_alias;
            $yvalue=$view->result[$j]->$yfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':$yvalue) . ");";
            $jjj++;
          }
        }
        for ($jj=2;$jj<21;$jj++) {
          if ($vars['options']['zaxis' . $jj]!='') {
            $zfield=$view->field[$vars['options']['zaxis' . $jj]]->field_alias;
            $zvalue=$view->result[$j]->$zfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($zvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($zvalue)) . "'") . ");";
            $jjj++;
          }
        }
      }
      break;
    case '10':
      $constructor='AnnotatedTimeLine';
	  $package='annotatedtimeline';
      if ($vars['options']['displayAnnotations']) $csa['displayAnnotations'] = true ; else $csa['displayAnnotations'] = false;
	  if ($vars['options']['displayAnnotationsFilter']) $csa['displayAnnotationsFilter'] = true ; else $csa['displayAnnotationsFilter'] = false;
	  if ($vars['options']['displayDateBarSeparator']) $csa['displayDateBarSeparator'] = true ; else $csa['displayDateBarSeparator'] = false;
	  if ($vars['options']['displayExactValues']) $csa['displayExactValues'] = true ; else $csa['displayExactValues'] = false;
      if ($vars['options']['displayLegendDots']) $csa['displayLegendDots'] = true ; else $csa['displayLegendDots'] = false;
      if ($vars['options']['displayRangeSelector']) $csa['displayRangeSelector'] = true ; else $csa['displayRangeSelector'] = false;
      if ($vars['options']['displayZoomButtons']) $csa['displayZoomButtons'] = true ; else $csa['displayZoomButtons'] = false;
	  if ($vars['options']['atlmin']!='') $csa['min'] = $vars['options']['atlmin'];
	  if ($vars['options']['atlmax']!='') $csa['max'] = $vars['options']['atlmax'];
	  if ($vars['options']['atlfill']!='') $csa['atlfill'] = $vars['options']['atlmax'];else $csa['atlfill'] = 0;
	  if ($vars['options']['atlthickness']!='') $csa['atlthickness'] = $vars['options']['atlmax'];else $csa['atlthickness'] = 0;
	  if ($vars['options']['scaleColumns']=='0'){
		if ($vars['options']['scaleType']!='fixed') $csa['scaleType'] = 'maximized'; else $csa['scaleType']='fixed';
	  }
	  else {
		if ($vars['options']['scaleType']!='fixed') $csa['scaleType'] = 'allmaximized'; else $csa['scaleType']='allfixed';
		if ($vars['options']['scaleColumns']=='1')
			$csa['scaleColumns']=array(0,1);
		else
			$csa['scaleColumns']=array(0,1,2);
	  }
	  if ($vars['options']['color']!='0') $csa['colors'] = $colorspie[$vars['options']['color']];
	  
	  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1_1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1_1']]['label'] : $view->field[$vars['options']['yaxis1_1']]->options['label'];
      $strdata = "data.addColumn('date','" . $label . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $label . "');";
		}
		if ($vars['options']['zaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label'] : $view->field[$vars['options']['zaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
		}
		if ($vars['options']['zzaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis' . $jj]]['label'] : $view->field[$vars['options']['zzaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $yfield=$view->field[$vars['options']['yaxis1_1']]->field_alias;
        $yvalue=$view->result[$j]->$yfield;
        if (is_null($yvalue))
          $strdata .= "data.setValue(" . $j . ", 0, undefined);";
        else {
			$yvaluedate = strtotime($yvalue);
			if ($yvaluedate === FALSE) $yvaluedate=strtotime(date("Y-m-d H:i:s",$yvalue));
			if ($yvaluedate === FALSE)
				$strdata .= "data.setValue(" . $j . ", 0, undefined);";
			else {
				$strdata .= "data.setValue(" . $j . ", 0, new Date (" .date('Y', $yvaluedate) . "," . (date('m', $yvaluedate)-1) . "," . date('d', $yvaluedate).",".date('H', $yvaluedate).",".date('i', $yvaluedate).",".date('s', $yvaluedate)."));";
			}
        }
        $jjj=1;
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
			$yfield=$view->field[$vars['options']['yaxis' . $jj]]->field_alias;
            $yvalue=$view->result[$j]->$yfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
		  if ($vars['options']['zaxis' . $jj]!='') {
            $zfield=$view->field[$vars['options']['zaxis' . $jj]]->field_alias;
            $zvalue=$view->result[$j]->$zfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($zvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($zvalue)) . "'") . ");";
            $jjj++;
          }
		  if ($vars['options']['zzaxis' . $jj]!='') {
            $zzfield=$view->field[$vars['options']['zzaxis' . $jj]]->field_alias;
            $zzvalue=$view->result[$j]->$zfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($zzvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($zzvalue)) . "'") . ");";
            $jjj++;
          }
        }
      }
      break;
    case '11':
      $constructor='Map';
	  $package='map';
	  
	  $csa['mapType']=$vars['options']['maptype'];
	  
      $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomaplat1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomaplat1']]['label'] : $view->field[$vars['options']['geomaplat1']]->options['label'];
      $strdata  = "data.addColumn('number','" . $label . "');";
      $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomaplon1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomaplon1']]['label'] : $view->field[$vars['options']['geomaplon1']]->options['label'];
      $strdata .= "data.addColumn('number','" . $label . "');";
      $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['geomapstring']]['label'] : $view->field[$vars['options']['geomapstring']]->options['label'];
      $strdata .= "data.addColumn('string','" . $label . "');";
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $field=$view->field[$vars['options']['geomaplat1']]->field_alias;
        $value=$view->result[$j]->$field;
        $strdata .= "data.setValue(" . $j . ",0," . (is_null($value)?'undefined':strip_tags($value)) . ");";
        $field=$view->field[$vars['options']['geomaplon1']]->field_alias;
        $value=$view->result[$j]->$field;
        $strdata .= "data.setValue(" . $j . ",1," . (is_null($value)?'undefined':strip_tags($value)) . ");";
        $field=$view->field[$vars['options']['geomapstring']]->field_alias;
        $value=$view->result[$j]->$field;
        $strdata .= "data.setValue(" . $j . ",2," . (is_null($value)?'undefined':"'" . str_replace("'","`",strip_tags($value)) . "'") . ");";
      }
      break;
    case '14':
      $constructor='Table';
	  $package='table';
	  $csa['page']=$vars['options']['page'];
	  $csa['pageSize']=$vars['options']['pageSize'];
	  if ($vars['options']['showRowNumber']) $csa['showRowNumber'] = true ; else $csa['showRowNumber'] = false;

      $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['xaxis']]['label'] : $view->field[$vars['options']['xaxis']]->options['label'];
      $strdata = "data.addColumn('string','" . $label . "');";
      for ($jj=1;$jj<21;$jj++) {
        if ($vars['options']['yaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis' . $jj]]['label'] : $view->field[$vars['options']['yaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('number','" . $label . "');";
		}
		if ($vars['options']['zaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zaxis' . $jj]]['label'] : $view->field[$vars['options']['zaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
		}
		if ($vars['options']['zzaxis' . $jj]!=''){
		  $label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis' . $jj]]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis' . $jj]]['label'] : $view->field[$vars['options']['zzaxis' . $jj]]->options['label'];
          $strdata .= "data.addColumn('string','" . $label . "');";
		}
      }
      $strdata .= "data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $yfield=$view->field[$vars['options']['xaxis']]->field_alias;
        $yvalue=$view->result[$j]->$yfield;
		$strdata .= "data.setValue(" . $j . ", 0, " . (is_null($yvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($yvalue)) . "'") . ");";
        $jjj=1;
        for ($jj=1;$jj<21;$jj++) {
          if ($vars['options']['yaxis' . $jj]!='') {
			$yfield=$view->field[$vars['options']['yaxis' . $jj]]->field_alias;
            $yvalue=$view->result[$j]->$yfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($yvalue)?'undefined':strip_tags($yvalue)) . ");";
            $jjj++;
          }
		  if ($vars['options']['zaxis' . $jj]!='') {
            $zfield=$view->field[$vars['options']['zaxis' . $jj]]->field_alias;
            $zvalue=$view->result[$j]->$zfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($zvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($zvalue)) . "'") . ");";
            $jjj++;
          }
		  if ($vars['options']['zzaxis' . $jj]!='') {
            $zzfield=$view->field[$vars['options']['zzaxis' . $jj]]->field_alias;
            $zzvalue=$view->result[$j]->$zfield;
            $strdata .= "data.setValue(" . $j . ", " . $jjj . ", " . (is_null($zzvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($zzvalue)) . "'") . ");";
            $jjj++;
          }
        }
      }
      break;
	case '15':
      // Treemap
      $constructor='TreeMap';
	  $package='treemap';
	  /*
      if ($vars['options']['is3D'])
        $csa ['is3D'] =  true;
      else
        $csa ['is3D'] = false;
      if ($vars['options']['pieJoinAngle'] !='') $csa['pieJoinAngle'] = $vars['options']['pieJoinAngle'];
      if ($vars['options']['pieMinimalAngle'] !='') $csa['pieMinimalAngle'] = $vars['options']['pieMinimalAngle'];
*/
  	  $labelz1 = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zaxis1']]['label'] : $view->field[$vars['options']['zaxis1']]->options['label'];
      $labelzz1 = isset($view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['zzaxis1']]['label'] : $view->field[$vars['options']['zzaxis1']]->options['label'];
      $labely1 = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis1']]['label'] : $view->field[$vars['options']['yaxis1']]->options['label'];
	  
      $strdata="data.addColumn('string','" . $labelz1 . "');
	            data.addColumn('string','" . $labelzz1 . "');
				data.addColumn('number','" . $labely1 . "');";
      $xfield=$view->field[$vars['options']['zaxis1']]->field;
      $yfield=$view->field[$vars['options']['zzaxis1']]->field;
	  $yfield1=$view->field[$vars['options']['yaxis1']]->field;
	  if ($vars['options']['yaxis2']!=''){
		$label = isset($view->style_plugin->display->display_options['fields'][$vars['options']['yaxis2']]['label']) ? $view->style_plugin->display->display_options['fields'][$vars['options']['yaxis2']]['label'] : $view->field[$vars['options']['yaxis2']]->options['label'];
		$strdata .= "data.addColumn('number','" . $label . "');";
		$yfield2=$view->field[$vars['options']['yaxis2']]->field;
	  }
	  $strdata.="data.addRows(" . $no_of_rows . ");";
      for ($j=0;$j<$no_of_rows;$j++) {
        $xvalue=$view->style_plugin->rendered_fields[$j][$xfield];
        $yvalue=$view->style_plugin->rendered_fields[$j][$yfield];
		$y1value=$view->style_plugin->rendered_fields[$j][$yfield1];
        $strdata .= "data.setValue(" . $j . ", 0, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($xvalue)) . "'") . ");";
		$strdata .= "data.setValue(" . $j . ", 1, " . (is_null($xvalue)?'undefined':"'" .  str_replace("'","`",strip_tags($yvalue)) . "'") . ");";
        $strdata .= "data.setValue(" . $j . ", 2, " . (is_null($yvalue)?'undefined':strip_tags($y1value)) . ");";
		if ($vars['options']['yaxis2']!=''){
			$y2value=$view->style_plugin->rendered_fields[$j][$yfield2];
			$strdata .= "data.setValue(" . $j . ", 3, " . (is_null($yvalue)?'undefined':strip_tags($y2value)) . ");";
		}
      }
      break;
	  case '16':
      // Treemap
      $constructor='OrgChart';
	  $package='orgchart';
      if ($vars['options']['allowHtml'] ==1) $csa['allowHtml'] ='true';

      $strdata ="\n\tdata.addColumn('string','" . 'Name' . "');\n";
	  $strdata.="\tdata.addColumn('string','" . 'Manager' . "');\n";
	  $strdata.="\tdata.addColumn('string','" . 'Tooltip' . "');\n";
	  $strdata.="\tdata.addRows([\n" ;
      for ($j=0;$j<$no_of_rows;$j++) {
	    $vn = $view->field[$vars['options']['Name']]->field_alias;
		$vm = $view->field[$vars['options']['Manager']]->field_alias;
		$vt = $view->field[$vars['options']['Tooltip']]->field_alias;
        $name=$view->result[$j]->$vn;
        $lname=$view->style_plugin->rendered_fields[$j][$view->field[$vars['options']['LongName']]->field];
		if($lname=="")$lname=$view->style_plugin->rendered_fields[$j][$view->field[$vars['options']['Name']]->field];
		//$manager=$view->result[$j]->$vm;
		$manager = $view->style_plugin->rendered_fields[$j][$view->field[$vars['options']['Manager']]->field];
		//$tooltip=$view->style_plugin->rendered_fields[$j][$view->field[$vars['options']['Tooltip']]->field];
		$tooltip = $view->style_plugin->rendered_fields[$j][$view->field[$vars['options']['Tooltip']]->field];
        $strdata .= "\t\t[{v:'".$name."', f:'".$lname."'}, '".$manager."', '".$tooltip."'],\n";
	  }   
	  if($j>0)$strdata=substr($strdata,0,strlen($strdata)-2)."\n";
	  $strdata.="\t]);\n" ;
      break;
  }

//Additional settings
  if (in_array($vars['options']['type'], array(0, 2, 3, 4, 5, 6))){
	if ($vars['options']['backgroundColor'] !='') $csa['backgroundColor']['fill'] = $vars['options']['backgroundColor'];
	if ($vars['options']['backgroundColorStrokeColor'] !='') $csa['backgroundColor']['stroke'] = $vars['options']['backgroundColorStrokeColor'];
	if ($vars['options']['backgroundColorStrokeWidth'] !='') $csa['backgroundColor']['strokeWidth'] = $vars['options']['backgroundColorStrokeWidth'];
	if ($vars['options']['gridlineColor'] !='') $csa['gridlineColor'] = $vars['options']['gridlineColor'];
	if ($vars['options']['chartAreaL'] !='') $csa['chartArea']['left'] = $vars['options']['chartAreaL'];
	if ($vars['options']['chartAreaT'] !='') $csa['chartArea']['top'] = $vars['options']['chartAreaT'];
	if ($vars['options']['chartAreaH'] !='') $csa['chartArea']['height'] = $vars['options']['chartAreaH'];
	if ($vars['options']['chartAreaW'] !='') $csa['chartArea']['width'] = $vars['options']['chartAreaW'];
    $csa['legend'] = $vars['options']['legend'];
    if ($vars['options']['legendFontSize'] !='')  $csa['legendTextStyle']['fontSize'] = $vars['options']['legendFontSize'];
    if ($vars['options']['legendTextColor'] !='') $csa['legendTextStyle']['color'] = $vars['options']['legendTextColor'];
    if ($vars['options']['titleColor'] !='') $csa['titleTextStyle']['color']=$vars['options']['titleColor'];
    if ($vars['options']['titleFontSize'] !='') $csa['titleTextStyle']['fontSize'] = $vars['options']['titleFontSize'];
  }
  if (in_array($vars['options']['type'], array(2))){
	if ($vars['options']['HaxisNumberFormat'] !='0') $csa['hAxis']['format'] = $vars['options']['HaxisNumberFormat'];
  }
  if (in_array($vars['options']['type'], array(3, 4, 5, 6))){
	if ($vars['options']['VaxisNumberFormat'] !='0') $csa['vAxis']['format'] = $vars['options']['VaxisNumberFormat'];
  }
  
  if (!$vars['options']['isimage']){
    if (in_array($vars['options']['type'], array(2, 3, 4, 5, 6))){
	  if ($vars['options']['HaxisTitlePosition'] !='') $csa['hAxis']['titlePosition'] = $vars['options']['HaxisTitlePosition'];
      if ($vars['options']['HaxisTextPosition'] !='') $csa['hAxis']['textPosition'] = $vars['options']['HaxisTextPosition'];
	  if ($vars['options']['baselineX'] !='') $csa['hAxis']['baseline'] = $vars['options']['baselineX'];
	  if ($vars['options']['linlogX']=='log') $csa['hAxis']['logScale'] = true; else $csa['hAxis']['logScale'] = false;
	  if ($vars['options']['minX'] != '') $csa['hAxis']['minValue'] =$vars['options']['minX'];
      if ($vars['options']['maxX'] != '') $csa['hAxis']['maxValue'] =$vars['options']['maxX'];
	  if ($vars['options']['axisColorX'] !='') $csa['hAxis']['baselineColor']=$vars['options']['axisColorX'];
	  if ($vars['options']['axisFontSizeX'] !='') $csa['hAxis']['textStyle']['fontSize']=$vars['options']['axisFontSizeX'];
	  if ($vars['options']['axisFontColorX'] !='') $csa['hAxis']['textStyle']['color']=$vars['options']['axisFontColorX'];
	  if ($vars['options']['titleX'] !='') $csa['hAxis']['title'] = $vars['options']['titleX'];
	  if ($vars['options']['axisTitleFontSizeX'] !='') $csa['hAxis']['titleTextStyle']['fontSize']=$vars['options']['axisTitleFontSizeX'];
	  if ($vars['options']['axisTitleFontColorX'] !='') $csa['hAxis']['titleTextStyle']['color']=$vars['options']['axisTitleFontColorX'];

	  if ($vars['options']['VaxisTitlePosition'] !='') $csa['vAxis']['titlePosition'] = $vars['options']['VaxisTitlePosition'];
      if ($vars['options']['VaxisTextPosition'] !='') $csa['vAxis']['textPosition'] = $vars['options']['VaxisTextPosition'];
	  if ($vars['options']['baselineY'] !='') $csa['vAxis']['baseline'] = $vars['options']['baselineY'];
	  if ($vars['options']['linlogY']=='log') $csa['vAxis']['logScale'] = true; else $csa['hAxis']['logScale'] = false;
	  if ($vars['options']['minY'] != '') $csa['vAxis']['minValue'] =$vars['options']['minY'];
      if ($vars['options']['maxY'] != '') $csa['vAxis']['maxValue'] =$vars['options']['maxY'];
	  if ($vars['options']['axisColorY'] !='') $csa['vAxis']['baselineColor']=$vars['options']['axisColorY'];
	  if ($vars['options']['axisFontSizeY'] !='') $csa['vAxis']['textStyle']['fontSize']=$vars['options']['axisFontSizeY'];
	  if ($vars['options']['axisFontColorY'] !='') $csa['vAxis']['textStyle']['color']=$vars['options']['axisFontColorY'];
	  if ($vars['options']['titleY'] !='') $csa['vAxis']['title'] = $vars['options']['titleY'];
	  if ($vars['options']['axisTitleFontSizeY'] !='') $csa['vAxis']['titleTextStyle']['fontSize']=$vars['options']['axisTitleFontSizeY'];
	  if ($vars['options']['axisTitleFontColorY'] !='') $csa['vAxis']['titleTextStyle']['color']=$vars['options']['axisTitleFontColorY'];
     }
   } else {
      if (in_array($vars['options']['type'], array(2, 3, 4, 5, 6))){
   	    if ($vars['options']['minY'] != '') $csa['min'] =$vars['options']['minY'];
        if ($vars['options']['maxY'] != '') $csa['max'] =$vars['options']['maxY'];
	  }
   }
  // Generate some necessary js code for Google Viz API
  $typepackages=strtolower($package);
  $api_key = variable_get('dv_api_key', False);

  if (($vars['options']['type']=='7' && $vars['options']['geomaptype']=='markers') || ($vars['options']['type']=='11'))
    if ($api_key) {
      $gvs_gmap_gapi="http://maps.google.com/maps?file=api&v=2&key=" . $api_key;
      drupal_set_html_head('<script type="text/javascript" src="'. $gvs_gmap_gapi  . '"></script>');
    }
    else
      drupal_set_message('Enter Google maps key in Gmap settings','error');

  if ($vars['options']['type']=='11')
    if ($api_key) {
      $gvs_gmap_gapi="http://maps.google.com/maps?file=api&v=2&key=" . $api_key;
      drupal_set_html_head('<script type="text/javascript" src="'. $gvs_gmap_gapi  . '"></script>');
    }
    else
      drupal_set_message('Enter Google maps key in Gmap settings','error');

  if ($vars['options']['type']!='13') {
    $gvs_gapi="https://www.google.com/jsapi";
	if ($mcstate==""){
	  $options=json_encode($csa);
	} else {
	  $options=json_encode($csa);
	  $options=substr($options,0,strlen($options)-1);
	  $options.=',"state":'.$mcstate.'}';
	}
    drupal_set_html_head('<script type="text/javascript" src="'. $gvs_gapi  . '"></script>');
    if ($vars['options']['type']!='12')
	  drupal_add_js("google.load('visualization', '1', {'packages':['" . $typepackages . "'], 'language': '" . $language->language . "'});",'inline');
    $inlinet="function drawChart(){var data = new google.visualization.DataTable();var chart;";
    $inlinet .= $strdata;
    $inlinet .= "chart = new google.visualization." . $constructor . "(document.getElementById('" . $vars['gvs_id'] . "'));
                 chart.draw(data, " . $options . ");}
                 google.setOnLoadCallback(drawChart);";
  }
  else {
    if ($api_key) {
      $gvs_gmap_gapi="https://www.google.com/jsapi?key=" . $api_key;
      drupal_set_html_head('<script type="text/javascript" src="'. $gvs_gmap_gapi  . '"></script>');
    }
    else
      drupal_set_message('Enter Google maps key in Gmap settings','error');
    $inlinet='google.load("earth", "1");var ge = null;function init(){google.earth.createInstance("' . $vars['gvs_id'] . '", initCallback, failureCallback)};
              function initCallback(object){ge = object;ge.getWindow().setVisibility(true);ge.getNavigationControl().setVisibility(ge.VISIBILITY_AUTO);}
              function failureCallback(object) {}
              google.setOnLoadCallback(init);';
  }
  // Add code to template
  drupal_add_js($inlinet, 'inline');

  // Make file for embeding
  if ($vars['emlink'] && $user->uid != 0 && user_access('see embeding link')){
	$filestring ='<html><head>';
	if (($vars['options']['type']=='7' && $vars['options']['geomaptype']=='markers') || ($vars['options']['type']=='11') || ($vars['options']['type']=='13'))
	  $filestring.='<script type="text/javascript" src="'. $gvs_gmap_gapi.'"></script>';
	$filestring.='<script type="text/javascript" src="'. $gvs_gapi  .'"></script>';
	if ($vars['options']['type']!='12')
      $filestring.="<script type=\"text/javascript\">google.load('visualization','1',{'packages':['" . $typepackages . "']});</script>";
    $filestring.='<script type="text/javascript">'. $inlinet .'</script>';
    $filestring.='</head><body>';
    $filestring.='<div id="'.$vars['gvs_id'].'" style="text-align:center;height:'.$vars['divh'].';width:'.$vars['divw'].';"></div>';
    $filestring.='</body></html>';
    $directory = file_directory_path() . '/gvs_embed/' . $user->uid;
    file_check_directory($directory, TRUE);
    $directory = file_directory_path() . '/gvs_embed/' . $user->uid . '/permanent';
    file_check_directory($directory, TRUE);
    if ($vars['options']['emlinkforever']){
       $dest=file_directory_path().'/gvs_embed/' . $user->uid . '/permanent/' . $view->name.'_'.$view->current_display.(isset($view->args[0])?'_'.$view->args[0]:'').'.html';
       $dest_path = file_directory_path().'/gvs_embed/' . $user->uid . '/permanent';
    }
    else{
	   $dest=file_directory_path().'/gvs_embed/' . $user->uid . '/' . $view->name.'_'.$view->current_display.(isset($view->args[0])?'_'.$view->args[0]:'').'.html';
       $dest_path = file_directory_path().'/gvs_embed/' . $user->uid;
    }
    $vars['embed_file_dest'] = $dest;
    $vars['embed_file_basename'] = $view->name.'_'.$view->current_display.(isset($view->args[0])?'_'.$view->args[0]:'').'.html';
    $vars['embed_file_destpath'] = $dest_path;
    $vars['embed_file_filestring'] = $filestring;
  }

}

/**
 * Overridable theme function.
 * This functions prints a warning when no data is available.
 */
function theme_gvs_nodata() {
  drupal_set_message(t('There is no data available'), 'warning');
}
