<?php
// $Id: gvs_style_plugin.inc,v 1.12 2010/10/06 13:33:53 btomic Exp $
/**
 * @file
 */

class gvs_style_plugin extends views_plugin_style {

  function option_definition() {
  //$options = parent::option_definition();
    $options['title'] = array('default' => 'Chart');
    $options['type'] = array('default' => '0');
    $options['width'] = array('default' => '300');
    $options['height'] = array('default' => '200');
	$options['chartAreaL'] = array('default' => '');
	$options['chartAreaT'] = array('default' => '');
	$options['chartAreaW'] = array('default' => '');
	$options['chartAreaH'] = array('default' => '');
    $options['emlink'] = array('default' => '0');
    $options['emlinkforever'] = array('default' => '1');
	$options['isimage'] = array('default' => '0');
    $options['xaxis'] = array('default' => '');
    $options['xaxis1'] = array('default' => '');
    $options['yaxis1'] = array('default' => '');
    $options['yaxis1_1'] = array('default' => '');
    $options['yaxis2'] = array('default' => '');
    $options['yaxis3'] = array('default' => '');
    $options['yaxis4'] = array('default' => '');
    $options['yaxis5'] = array('default' => '');
	$options['yaxis6'] = array('default' => '');
	$options['yaxis7'] = array('default' => '');
	$options['yaxis8'] = array('default' => '');
	$options['yaxis9'] = array('default' => '');
	$options['yaxis10'] = array('default' => '');
	$options['yaxis11'] = array('default' => '');
	$options['yaxis12'] = array('default' => '');
	$options['yaxis13'] = array('default' => '');
	$options['yaxis14'] = array('default' => '');
	$options['yaxis15'] = array('default' => '');
	$options['yaxis16'] = array('default' => '');
	$options['yaxis17'] = array('default' => '');
	$options['yaxis18'] = array('default' => '');
	$options['yaxis19'] = array('default' => '');
	$options['yaxis20'] = array('default' => '');
	$options['zaxis1'] = array('default' => '');
    $options['zaxis2'] = array('default' => '');
    $options['zaxis3'] = array('default' => '');
    $options['zaxis4'] = array('default' => '');
    $options['zaxis5'] = array('default' => '');
	$options['zaxis6'] = array('default' => '');
    $options['zaxis7'] = array('default' => '');
    $options['zaxis8'] = array('default' => '');
    $options['zaxis9'] = array('default' => '');
    $options['zaxis10'] = array('default' => '');
	$options['zaxis11'] = array('default' => '');
    $options['zaxis12'] = array('default' => '');
    $options['zaxis13'] = array('default' => '');
    $options['zaxis14'] = array('default' => '');
    $options['zaxis15'] = array('default' => '');
	$options['zaxis16'] = array('default' => '');
    $options['zaxis17'] = array('default' => '');
    $options['zaxis18'] = array('default' => '');
    $options['zaxis19'] = array('default' => '');
    $options['zaxis20'] = array('default' => '');
	$options['zzaxis1'] = array('default' => '');
    $options['zzaxis2'] = array('default' => '');
    $options['zzaxis3'] = array('default' => '');
    $options['zzaxis4'] = array('default' => '');
    $options['zzaxis5'] = array('default' => '');
	$options['zzaxis6'] = array('default' => '');
    $options['zzaxis7'] = array('default' => '');
    $options['zzaxis8'] = array('default' => '');
    $options['zzaxis9'] = array('default' => '');
    $options['zzaxis10'] = array('default' => '');
	$options['zzaxis11'] = array('default' => '');
    $options['zzaxis12'] = array('default' => '');
    $options['zzaxis13'] = array('default' => '');
    $options['zzaxis14'] = array('default' => '');
    $options['zzaxis15'] = array('default' => '');
	$options['zzaxis16'] = array('default' => '');
    $options['zzaxis17'] = array('default' => '');
    $options['zzaxis18'] = array('default' => '');
    $options['zzaxis19'] = array('default' => '');
    $options['zzaxis20'] = array('default' => '');	
    $options['region'] = array('default' => 'world');
    $options['region1'] = array('default' => 'world');
    $options['geomaptype'] = array('default' => 'markers');
    $options['geomaplon'] = array('default' => '');
    $options['geomaplat'] = array('default' => '');
    $options['geomaplon1'] = array('default' => '');
    $options['geomaplat1'] = array('default' => '');
    $options['geomapstring'] = array('default' => '');
    $options['maptype'] = array('default' => 'normal');
	$options['curveType'] = array('default' => '');

    $options['is3D'] = array('default' => '0');
    $options['isStacked'] = array('default' => '0');
    $options['color'] = array('default' => '0');
	$options['pieSliceText'] = array('default' => '');
	$options['interpolateNulls']=array('default' => '1');
    $options['legend'] = array('default' => 'right');
  //  $options['legendBackgroundColor'] = array('default' => '');
    $options['legendFontSize'] = array('default' => '');
    $options['legendTextColor'] = array('default' => '');
    $options['backgroundColor'] = array('default' => '');
	$options['gridlineColor'] = array('default' => '');
	$options['backgroundColorStrokeColor'] = array('default' => '');
	$options['backgroundColorStrokeWidth'] = array('default' => '');
	$options['HaxisTitlePosition'] = array('default' => '');
	$options['HaxisTextPosition'] = array('default' => '');
	$options['HaxisNumberFormat'] = array('default' => '');
	$options['VaxisTitlePosition'] = array('default' => '');
	$options['VaxisTextPosition'] = array('default' => '');
	$options['VaxisNumberFormat'] = array('default' => '');
   // $options['borderColor'] = array('default' => '');
    $options['titleColor'] = array('default' => '');
    $options['titleFontSize'] = array('default' => '');
  //  $options['enableTooltip'] = array('default' => '1');
  //$options['axisBackgroundColor'] = array('default' => '');  
	$options['baselineX'] = array('default' => '');
    $options['axisColorX'] = array('default' => '');
    $options['axisFontSizeX'] = array('default' => '');
	$options['axisFontColorX'] = array('default' => '');
    $options['linlogX'] = array('default' => 'lin');
	$options['minX'] = array('default' => '');
    $options['maxX'] = array('default' => '');
    $options['titleX'] = array('default' => '');
    $options['axisTitleFontSizeX'] = array('default' => '');
	$options['axisTitleFontColorX'] = array('default' => '');
	
	$options['baselineY'] = array('default' => '');
    $options['axisColorY'] = array('default' => '');
    $options['axisFontSizeY'] = array('default' => '');
	$options['axisFontColorY'] = array('default' => '');
    $options['linlogY'] = array('default' => 'lin');
	$options['minY'] = array('default' => '');
    $options['maxY'] = array('default' => '');
    $options['titleY'] = array('default' => '');
    $options['axisTitleFontSizeY'] = array('default' => '');
	$options['axisTitleFontColorY'] = array('default' => '');

//for Pie
   // $options['pieJoinAngle'] = array('default' => '');
    $options['pieMinimalAngle'] = array('default' => '');
	$options['pieFontSize'] = array('default' => '');
	$options['pieFontColor'] = array('default' => '');
//for MotionChart
	$options['mcdateformat'] = array('default' => '1');
    $options['showChartButtons'] = array('default' => '1');
    $options['showHeadermc'] = array('default' => '1');
    $options['showSelectListComponent'] = array('default' => '1');
    $options['showSidePanel'] = array('default' => '1');
    $options['showXMetricPicker'] = array('default' => '1');
    $options['showYMetricPicker'] = array('default' => '1');
    $options['showXScalePicker'] = array('default' => '1');
    $options['showYScalePicker'] = array('default' => '1');
    $options['showAdvancedPanel'] = array('default' => '1');
    $options['state'] = array('default' => '');
//for Map
	$options['enableScrollWheel'] = array('default' => '0');
	$options['showTipMap'] = array('default' => '0');
	$options['showLineMap'] = array('default' => '0');
	$options['lineColorMap'] = array('default' => '');
	$options['lineWidthMap'] = array('default' => '');
	$options['zoomLevelMap'] = array('default' => '');
//for Gauge	
	$options['greenFrom'] = array('default' => '');
	$options['greenTo'] = array('default' => '');
	$options['yellowFrom'] = array('default' => '');
	$options['yellowTo'] = array('default' => '');
	$options['redFrom'] = array('default' => '');
	$options['redTo'] = array('default' => '');
	$options['GaugeMin'] = array('default' => '');
	$options['GaugeMax'] = array('default' => '');
//for ATL
	$options['displayAnnotations'] = array('default' => '0');
	$options['displayAnnotationsFilter'] = array('default' => '0');
	$options['allowHtml'] = array('default' => '0');
	$options['displayDateBarSeparator'] = array('default' => '1');
	$options['displayExactValues'] = array('default' => '0');
	$options['displayLegendDots'] = array('default' => '1');
	$options['displayRangeSelector'] = array('default' => '1');
	$options['displayZoomButtons'] = array('default' => '1');
	$options['atlmin'] = array('default' => '');
	$options['atlmax'] = array('default' => '');
	$options['scaleType'] = array('default' => 'fixed');
	$options['scaleColumns'] = array('default' => '0');
	$options['atlfill'] = array('default' => '0');
	$options['atlthickness'] = array('default' => '0');
	
//for Table
	$options['page'] = array('default' => 'disable');
	$options['pageSize'] = array('default' => 10);
	$options['showRowNumber'] = array('default' => '0');
	
//for Organizational chart
	$options['Name'] = array('default' => '');
	$options['LongName'] = array('default' => '');
	$options['Manager'] = array('default' => '');
	$options['Tooltip'] = array('default' => '');
	return $options;
  }

  function options_form(&$form, &$form_state) {
  //parent::options_form($form, $form_state);

/*
        foreach ($this->display->display_options['fields'] as $id => $handler) {
            $data = views_fetch_data($handler['table']);
            $options[$id] = $handler['label'];
        }
 */
    $supported_date_handlers = array('views_handler_field_date', 'date_handler_field_multiple');
    $supported_numeric_handlers = array('views_handler_field_numeric', 'location_views_handler_field_latitude', 'location_views_handler_field_longitude');
    $field_names['']='-----';
    $date_fields['']='-----';
    $other_fields['']='-----';
    $numeric_fields['']='-----';

    $handlers = $this->display->handler->get_handlers('field');
    foreach ($handlers as $field => $handler) {
    //drupal_set_message(get_class($handler));
    //$field=$handler->table.'_'.$field;
      if ($label = $handler->label()) {
        $field_names[$field] .= " (\"$label\")";
      }
      if (in_array(get_class($handler), $supported_date_handlers))
        $date_fields[$field] = $field_names[$field];
      else
        if (in_array(get_class($handler), $supported_numeric_handlers))
          $numeric_fields[$field]= $field_names[$field];
        elseif (!in_array(get_class($handler), array('views_groupby_handler_field_groupfields')))
            $other_fields[$field]= $field_names[$field];
    }
    if (count($numeric_fields)==1)$numeric_fields=$other_fields;
    if (count($date_fields)==1)$date_fields=$other_fields;

    $form['title'] = array(
        '#title' => t('Title'),
        '#type' => 'textfield',
        '#size' => 10,
        '#maxlength' => 40,
        '#default_value' => isset($this->options['title']) ? $this->options['title'] : '',
    );

    $form['width'] = array(
        '#title' => t('Width'),
        '#type' => 'textfield',
        '#description' => t('Chart width in px.'),
        '#size' => 4,
        '#maxlength' => 4,
        '#default_value' => isset($this->options['width']) ? $this->options['width'] : '300',
    );

    $form['height'] = array(
        '#title' => t('Height'),
        '#type' => 'textfield',
        '#description' => t('Chart height in px.'),
        '#size' => 4,
        '#maxlength' => 4,
        '#default_value' => isset($this->options['height']) ? $this->options['height'] : '200',
    );

	$form['emlink'] = array(
        '#type' => 'checkbox',
        '#weight' => 4,
        '#title' => t('Embed link'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['emlink']) ? $this->options['emlink'] : '0',
    );	

    $form['emlinkforever'] = array(
        '#type' => 'checkbox',
        '#weight' => 4,
        '#title' => t('Permanent embed link'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['emlinkforever']) ? $this->options['emlinkforever'] : '1',
    );
    $form['type'] = array(
        '#title' => t('Type'),
        '#description' => t('Chart type.'),
        '#type' => 'select',
        '#options' => array(
        '0' => t('Pie'),
        '1' => t('Gauge'),
        '2' => t('Bar'),
        '3' => t('Area'),
        '4' => t('Column'),
        '5' => t('Line'),
        '6' => t('Scatter'),
        '7' => t('Geo Map'),
        '8' => t('Intensity Map'),
        '9' => t('Motion Chart'),
        '10' => t('Annotated Time Line'),
        '11' => t('Map'),
        //'12' => 'Term Cloud',
		//'13' => 'Earth',
        '14' => t('Table'),
		'15' => t('Treemap'),
		'16' => t('Organizational Chart'),
        ),
        '#default_value' => isset($this->options['type']) ? $this->options['type'] : '0',
    );

	$form['isimage'] = array(
        '#type' => 'checkbox',
        '#title' => t('Is image'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['isimage']) ? $this->options['isimage'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0','2','3','4','5')),
    );
	
	
    $form['geomaptype'] = array(
        '#title' => t('Map Type'),
        '#type' => 'select',
        '#options' => array('markers' => t('Markers'), 'regions' => t('Regions')),
        '#default_value' => isset($this->options['geomaptype']) ? $this->options['geomaptype'] : 'markers',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('7')),
    );

    $form['geomaplat'] = array(
        '#title' => t('Latitude'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['geomaplat']) ? $this->options['geomaplat'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency_count' => 2,
        '#dependency' => array('edit-style-options-type' => array('7'), 'edit-style-options-geomaptype' => array('markers')),
    );

    $form['geomaplon'] = array(
        '#title' => t('Longitude'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['geomaplon']) ? $this->options['geomaplon'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency_count' => 2,
        '#dependency' => array('edit-style-options-type' => array('7'), 'edit-style-options-geomaptype' => array('markers')),
    );

    $form['geomaplat1'] = array(
        '#title' => t('Latitude'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['geomaplat1']) ? $this->options['geomaplat1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );

    $form['geomaplon1'] = array(
        '#title' => t('Longitude'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['geomaplon1']) ? $this->options['geomaplon1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );

    $form['geomapstring'] = array(
        '#title' => t('Adress or region'),
        '#description' => t('Must be string(A specific address, uppercase ISO-3166 code, ISO-3166-2 region code, a metropolitan area code-US)'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['geomapstring']) ? $this->options['geomapstring'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('7', '11')),
    );

    $form['maptype'] = array(
        '#title' => t('Map type'),
        '#type' => 'select',
        '#options' => array(
        'normal' => 'Normal',
        'satellite' => 'Satellite',
        'hybrid' => 'Hybrid'
        ),
        '#default_value' => isset($this->options['maptype']) ? $this->options['maptype'] : 'normal',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('7', '11')),
    );

    $form['xaxis'] = array(
        '#title' => t('Label'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $field_names,
        '#default_value' => isset($this->options['xaxis']) ? $this->options['xaxis'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '1', '2', '3', '4', '5', '7', '8', '9', '14')),
    );

    $form['xaxis1'] = array(
        '#title' => t('X-axis'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['xaxis1']) ? $this->options['xaxis1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('6')),
    );

    $form['yaxis1_1'] = array(
        '#title' => t('Date'),
        '#description' => t('Must be DATE'),
        '#type' => 'select',
        //'#options' => $date_fields,
		'#options' => $field_names,
        '#default_value' => isset($this->options['yaxis1_1']) ? $this->options['yaxis1_1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9','10')),
    );

    $form['yaxis1'] = array(
        '#title' => t('Value-1'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis1']) ? $this->options['yaxis1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '1', '2', '3', '4', '5', '6', '7', '8', '10', '14', '15')),
    );

    $form['zaxis1'] = array(
        '#title' => t('String Value-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis1']) ? $this->options['zaxis1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14', '15'))
    );

    $form['zzaxis1'] = array(
        '#title' => t('String Value-1-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis1']) ? $this->options['zzaxis1'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14', '15'))
    );
	
    $form['yaxis2'] = array(
        '#title' => t('Value-2'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis2']) ? $this->options['yaxis2'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14', '15')),
    );

    $form['zaxis2'] = array(
        '#title' => t('String Value-2'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis2']) ? $this->options['zaxis2'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '12', '14'))
    );

    $form['zzaxis2'] = array(
        '#title' => t('String Value-2-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis2']) ? $this->options['zzaxis2'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14'))
    );
	
    $form['yaxis3'] = array(
        '#title' => t('Value-3'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis3']) ? $this->options['yaxis3'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );

    $form['zaxis3'] = array(
        '#title' => t('String Value-3'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis3']) ? $this->options['zaxis3'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis3'] = array(
        '#title' => t('String Value-3-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis3']) ? $this->options['zzaxis3'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
	
    $form['yaxis4'] = array(
        '#title' => t('Value-4'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis4']) ? $this->options['yaxis4'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );

    $form['zaxis4'] = array(
        '#title' => t('String Value-4'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis4']) ? $this->options['zaxis4'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis4'] = array(
        '#title' => t('String Value-4-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis4']) ? $this->options['zzaxis4'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );

    $form['yaxis5'] = array(
        '#title' => t('Value-5'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis5']) ? $this->options['yaxis5'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );

    $form['zaxis5'] = array(
        '#title' => t('String Value-5'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis5']) ? $this->options['zaxis5'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis5'] = array(
        '#title' => t('String Value-5-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis5']) ? $this->options['zzaxis5'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
	
    $form['yaxis6'] = array(
        '#title' => t('Value-6'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis6']) ? $this->options['yaxis6'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );

    $form['zaxis6'] = array(
        '#title' => t('String Value-6'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis6']) ? $this->options['zaxis6'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis6'] = array(
        '#title' => t('String Value-6-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis6']) ? $this->options['zzaxis6'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
	
    $form['yaxis7'] = array(
        '#title' => t('Value-7'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis7']) ? $this->options['yaxis7'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis7'] = array(
        '#title' => t('String Value-7'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis7']) ? $this->options['zaxis7'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis7'] = array(
        '#title' => t('String Value-7-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis7']) ? $this->options['zzaxis7'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis8'] = array(
        '#title' => t('Value-8'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis8']) ? $this->options['yaxis8'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis8'] = array(
        '#title' => t('String Value-8'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis8']) ? $this->options['zaxis8'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis8'] = array(
        '#title' => t('String Value-8-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis8']) ? $this->options['zzaxis8'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis9'] = array(
        '#title' => t('Value-9'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis9']) ? $this->options['yaxis9'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis9'] = array(
        '#title' => t('String Value-9'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis9']) ? $this->options['zaxis9'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );

    $form['zzaxis9'] = array(
        '#title' => t('String Value-9-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis9']) ? $this->options['zzaxis9'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis10'] = array(
        '#title' => t('Value-10'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis10']) ? $this->options['yaxis10'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis10'] = array(
        '#title' => t('String Value-10'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis10']) ? $this->options['zaxis10'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis10'] = array(
        '#title' => t('String Value-10-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis10']) ? $this->options['zzaxis10'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis11'] = array(
        '#title' => t('Value-11'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis11']) ? $this->options['yaxis11'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis11'] = array(
        '#title' => t('String Value-11'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis11']) ? $this->options['zaxis11'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis11'] = array(
        '#title' => t('String Value-11-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis11']) ? $this->options['zzaxis11'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis12'] = array(
        '#title' => t('Value-12'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis12']) ? $this->options['yaxis12'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis12'] = array(
        '#title' => t('String Value-12'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis12']) ? $this->options['zaxis12'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis12'] = array(
        '#title' => t('String Value-12-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis12']) ? $this->options['zzaxis12'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis13'] = array(
        '#title' => t('Value-10'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis13']) ? $this->options['yaxis13'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis13'] = array(
        '#title' => t('String Value-13'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis13']) ? $this->options['zaxis13'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis13'] = array(
        '#title' => t('String Value-13-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis13']) ? $this->options['zzaxis13'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis14'] = array(
        '#title' => t('Value-14'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis14']) ? $this->options['yaxis14'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis14'] = array(
        '#title' => t('String Value-14'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis14']) ? $this->options['zaxis14'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis14'] = array(
        '#title' => t('String Value-14-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis14']) ? $this->options['zzaxis14'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis15'] = array(
        '#title' => t('Value-15'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis15']) ? $this->options['yaxis15'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis15'] = array(
        '#title' => t('String Value-15'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis15']) ? $this->options['zaxis15'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis15'] = array(
        '#title' => t('String Value-15-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis15']) ? $this->options['zzaxis15'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis16'] = array(
        '#title' => t('Value-16'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis16']) ? $this->options['yaxis16'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis16'] = array(
        '#title' => t('String Value-16'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis16']) ? $this->options['zaxis16'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis16'] = array(
        '#title' => t('String Value-16-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis16']) ? $this->options['zzaxis16'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis17'] = array(
        '#title' => t('Value-17'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis17']) ? $this->options['yaxis17'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis17'] = array(
        '#title' => t('String Value-17'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis17']) ? $this->options['zaxis17'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis17'] = array(
        '#title' => t('String Value-17-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis17']) ? $this->options['zzaxis17'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
	$form['yaxis18'] = array(
        '#title' => t('Value-18'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis18']) ? $this->options['yaxis18'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis18'] = array(
        '#title' => t('String Value-18'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis18']) ? $this->options['zaxis18'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis18'] = array(
        '#title' => t('String Value-18-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis18']) ? $this->options['zzaxis18'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis19'] = array(
        '#title' => t('Value-19'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis19']) ? $this->options['yaxis19'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis19'] = array(
        '#title' => t('String Value-19'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis19']) ? $this->options['zaxis19'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis19'] = array(
        '#title' => t('String Value-19-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis19']) ? $this->options['zzaxis19'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
    $form['yaxis20'] = array(
        '#title' => t('Value-20'),
        '#description' => t('Must be number.'),
        '#type' => 'select',
        '#options' => $numeric_fields,
        '#default_value' => isset($this->options['yaxis20']) ? $this->options['yaxis20'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6', '8', '9', '10', '14')),
    );
    $form['zaxis20'] = array(
        '#title' => t('String Value-20'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zaxis20']) ? $this->options['zaxis20'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9', '10', '14')),
    );
    $form['zzaxis20'] = array(
        '#title' => t('String Value-20-1'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $other_fields,
        '#default_value' => isset($this->options['zzaxis20']) ? $this->options['zzaxis20'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10', '14')),
    );
	
    $form['region'] = array(
        '#title' => t('Region'),
        '#description' => t('Select region'),
        '#type' => 'select',
        '#options' => array('world' => t('World'), 'africa' => t('Africa'), 'asia' => t('Asia'), 'europe' => t('Europe'), 'middle_east' => t('Middle East'), 'south_america' => t('South America'), 'usa' => t('USA')),
        '#default_value' => isset($this->options['region']) ? $this->options['region'] : 'world',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('8')),
    );

    $form['region1'] = array(
        '#title' => t('Region'),
        '#description' => t('Select region'),
        '#type' => 'select',
        '#options' => array(
        'world' => t('World'),
        '005' => t('South America'),
        '013' => t('Central America'),
        '021' => t('North America'),
        '002' => t('All of Africa'),
        '017' => t('Central Africa'),
        '015' => t('Northern Africa'),
        '018' => t('Southern Africa'),
        '030' => t('Eastern Asia'),
        '034' => t('Southern Asia'),
        '035' => t('Asia/Pacific region'),
        '143' => t('Central Asia'),
        '145' => t('Middle East'),
        '151' => t('Northern Asia'),
        '154' => t('Northern Europe'),
        '155' => t('Western Europe'),
        '039' => t('Southern Europe'),
        'AF' => t('Afghanistan'),
        'AX' => t('Aland Islands'),
        'AL' => t('Albania'),
        'DZ' => t('Algeria'),
        'AS' => t('American Samoa'),
        'AD' => t('Andorra'),
        'AO' => t('Angola'),
        'AI' => t('Anguilla'),
        'AQ' => t('Antarctica'),
        'AG' => t('Antigua and Barbuda'),
        'AR' => t('Argentina'),
        'AM' => t('Armenia'),
        'AW' => t('Aruba'),
        'AU' => t('Australia'),
        'AT' => t('Austria'),
        'AZ' => t('Azerbaijan'),
        'BS' => t('Bahamas'),
        'BH' => t('Bahrain'),
        'BD' => t('Bangladesh'),
        'BB' => t('Barbados'),
        'BY' => t('Belarus'),
        'BE' => t('Belgium'),
        'BZ' => t('Belize'),
        'BJ' => t('Benin'),
        'BM' => t('Bermuda'),
        'BT' => t('Bhutan'),
        'BO' => t('Bolivia'),
        'BA' => t('Bosnia and Herzegovina'),
        'BW' => t('Botswana'),
        'BV' => t('Bouvet Island'),
        'BR' => t('Brazil'),
        'IO' => t('British Indian Ocean Territory'),
        'BN' => t('Brunei Darussalam'),
        'BG' => t('Bulgaria'),
        'BF' => t('Burkina Faso'),
        'BI' => t('Burundi'),
        'KH' => t('Cambodia'),
        'CM' => t('Cameroon'),
        'CA' => t('Canada'),
        'CV' => t('Cape Verde'),
        'KY' => t('Cayman Islands'),
        'CF' => t('Central African Republic'),
        'TD' => t('Chad'),
        'CL' => t('Chile'),
        'CN' => t('China'),
        'CX' => t('Christmas Island'),
        'CC' => t('Cocos (Keeling) Islands'),
        'CO' => t('Colombia'),
        'KM' => t('Comoros'),
        'CG' => t('Congo'),
        'CD' => t('DR Congo'),
        'CK' => t('Cook Islands'),
        'CR' => t('Costa Rica'),
        'CI' => t('Cote dIvoire'),
        'HR' => t('Croatia'),
        'CU' => t('Cuba'),
        'CY' => t('Cyprus'),
        'CZ' => t('Czech Republic'),
        'DK' => t('Denmark'),
        'DJ' => t('Djibouti'),
        'DM' => t('Dominica'),
        'DO' => t('Dominican Republic'),
        'EC' => t('Ecuador'),
        'EG' => t('Egypt'),
        'SV' => t('El Salvador'),
        'GQ' => t('Equatorial Guinea'),
        'ER' => t('Eritrea'),
        'EE' => t('Estonia'),
        'ET' => t('Ethiopia'),
        'FK' => t('Falkland Islands'),
        'FO' => t('Faroe Islands'),
        'FJ' => t('Fiji'),
        'FI' => t('Finland'),
        'FR' => t('France'),
        'GF' => t('French Guiana'),
        'PF' => t('French Polynesia'),
        'TF' => t('French Southern Territories'),
        'GA' => t('Gabon'),
        'GM' => t('Gambia'),
        'GE' => t('Georgia'),
        'DE' => t('Germany'),
        'GH' => t('Ghana'),
        'GI' => t('Gibraltar'),
        'GR' => t('Greece'),
        'GL' => t('Greenland'),
        'GD' => t('Grenada'),
        'GP' => t('Guadeloupe'),
        'GU' => t('Guam'),
        'GT' => t('Guatemala'),
        'GG' => t('Guernsey'),
        'GN' => t('Guinea'),
        'GW' => t('Guinea-Bissau'),
        'GY' => t('Guyana'),
        'HT' => t('Haiti'),
        'HM' => t('Heard Island and McDonald Islands'),
        'VA' => t('Holy See (Vatican City State)'),
        'HN' => t('Honduras'),
        'HK' => t('Hong Kong'),
        'HU' => t('Hungary'),
        'IS' => t('Iceland'),
        'IN' => t('India'),
        'ID' => t('Indonesia'),
        'IR' => t('Iran, Islamic Republic of'),
        'IQ' => t('Iraq'),
        'IE' => t('Ireland'),
        'IM' => t('Isle of Man'),
        'IL' => t('Israel'),
        'IT' => t('Italy'),
        'JM' => t('Jamaica'),
        'JP' => t('Japan'),
        'JE' => t('Jersey'),
        'JO' => t('Jordan'),
        'KZ' => t('Kazakhstan'),
        'KE' => t('Kenya'),
        'KI' => t('Kiribati'),
        'KP' => t('N Korea'),
        'KR' => t('S Korea'),
        'KW' => t('Kuwait'),
        'KG' => t('Kyrgyzstan'),
        'LA' => t('Lao Peoples Democratic Republic'),
        'LV' => t('Latvia'),
        'LB' => t('Lebanon'),
        'LS' => t('Lesotho'),
        'LR' => t('Liberia'),
        'LY' => t('Libyan Arab Jamahiriya'),
        'LI' => t('Liechtenstein'),
        'LT' => t('Lithuania'),
        'LU' => t('Luxembourg'),
        'MO' => t('Macao'),
        'MK' => t('Macedonia'),
        'MG' => t('Madagascar'),
        'MW' => t('Malawi'),
        'MY' => t('Malaysia'),
        'MV' => t('Maldives'),
        'ML' => t('Mali'),
        'MT' => t('Malta'),
        'MH' => t('Marshall Islands'),
        'MQ' => t('Martinique'),
        'MR' => t('Mauritania'),
        'MU' => t('Mauritius'),
        'YT' => t('Mayotte'),
        'MX' => t('Mexico'),
        'FM' => t('Micronesia'),
        'MD' => t('Moldova'),
        'MC' => t('Monaco'),
        'MN' => t('Mongolia'),
        'ME' => t('Montenegro'),
        'MS' => t('Montserrat'),
        'MA' => t('Morocco'),
        'MZ' => t('Mozambique'),
        'MM' => t('Myanmar'),
        'NA' => t('Namibia'),
        'NR' => t('Nauru'),
        'NP' => t('Nepal'),
        'NL' => t('Netherlands'),
        'AN' => t('Netherlands Antilles'),
        'NC' => t('New Caledonia'),
        'NZ' => t('New Zealand'),
        'NI' => t('Nicaragua'),
        'NE' => t('Niger'),
        'NG' => t('Nigeria'),
        'NU' => t('Niue'),
        'NF' => t('Norfolk Island'),
        'MP' => t('Northern Mariana Islands'),
        'NO' => t('Norway'),
        'OM' => t('Oman'),
        'PK' => t('Pakistan'),
        'PW' => t('Palau'),
        'PS' => t('Palestinian Territory, Occupied'),
        'PA' => t('Panama'),
        'PG' => t('Papua New Guinea'),
        'PY' => t('Paraguay'),
        'PE' => t('Peru'),
        'PH' => t('Philippines'),
        'PN' => t('Pitcairn'),
        'PL' => t('Poland'),
        'PT' => t('Portugal'),
        'PR' => t('Puerto Rico'),
        'QA' => t('Qatar'),
        'RE' => t('Reunion'),
        'RO' => t('Romania'),
        'RU' => t('Russian Federation'),
        'RW' => t('Rwanda'),
        'BL' => t('Saint Barthelemy'),
        'SH' => t('Saint Helena'),
        'KN' => t('Saint Kitts and Nevis'),
        'LC' => t('Saint Lucia'),
        'MF' => t('Saint Martin'),
        'PM' => t('Saint Pierre and Miquelon'),
        'VC' => t('Saint Vincent and the Grenadines'),
        'WS' => t('Samoa'),
        'SM' => t('San Marino'),
        'ST' => t('Sao Tome and Principe'),
        'SA' => t('Saudi Arabia'),
        'SN' => t('Senegal'),
        'RS' => t('Serbia'),
        'SC' => t('Seychelles'),
        'SL' => t('Sierra Leone'),
        'SG' => t('Singapore'),
        'SK' => t('Slovakia'),
        'SI' => t('Slovenia'),
        'SB' => t('Solomon Islands'),
        'SO' => t('Somalia'),
        'ZA' => t('South Africa'),
        'GS' => t('South Georgia and the South Sandwich Islands'),
        'ES' => t('Spain'),
        'LK' => t('Sri Lanka'),
        'SD' => t('Sudan'),
        'SR' => t('Suriname'),
        'SJ' => t('Svalbard and Jan Mayen'),
        'SZ' => t('Swaziland'),
        'SE' => t('Sweden'),
        'CH' => t('Switzerland'),
        'SY' => t('Syrian Arab Republic'),
        'TW' => t('Taiwan'),
        'TJ' => t('Tajikistan'),
        'TZ' => t('Tanzania'),
        'TH' => t('Thailand'),
        'TL' => t('Timor-Leste'),
        'TG' => t('Togo'),
        'TK' => t('Tokelau'),
        'TO' => t('Tonga'),
        'TT' => t('Trinidad and Tobago'),
        'TN' => t('Tunisia'),
        'TR' => t('Turkey'),
        'TM' => t('Turkmenistan'),
        'TC' => t('Turks and Caicos Islands'),
        'TV' => t('Tuvalu'),
        'UG' => t('Uganda'),
        'UA' => t('Ukraine'),
        'AE' => t('United Arab Emirates'),
        'GB' => t('United Kingdom'),
        'US' => t('United States'),
        'UM' => t('United States Minor Outlying Islands'),
        'UY' => t('Uruguay'),
        'UZ' => t('Uzbekistan'),
        'VU' => t('Vanuatu'),
        'VE' => t('Venezuela'),
        'VN' => t('Viet Nam'),
        'VG' => t('Virgin Islands, British'),
        'VI' => t('Virgin Islands'),
        'WF' => t('Wallis and Futuna'),
        'EH' => t('Western Sahara'),
        'YE' => t('Yemen'),
        'ZM' => t('Zambia'),
        'ZW' => t('Zimbabwe'),
        ),
        '#default_value' => isset($this->options['region1']) ? $this->options['region1'] : 'world',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('7')),
    );

	$form['curveType'] = array(
        '#title' => t('Curve Type'),
        '#type' => 'select',
        '#options' => array(
			'none' => t('None'),
			'function' => t('Function'),
        ),
        '#default_value' => isset($this->options['curveType']) ? $this->options['curveType'] : 'none',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('6')),
    );
	
	
    $form['is3D'] = array(
        '#type' => 'checkbox',
        '#title' => t('Is 3D'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['is3D']) ? $this->options['is3D'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '4')),
    );
	
    $form['pieSliceText'] = array(
        '#title' => t('Pie Slice Text'),
        '#type' => 'select',
        '#options' => array(
			'percentage' => t('percentage'),
			'value' => t('value'),
			'label' => t('label'),
			'none' => t('none'),
        ),
        '#default_value' => isset($this->options['pieSliceText']) ? $this->options['pieSliceText'] : 'percentage',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0')),
    );	

	$form['pieFontSize'] = array(
        '#type' => 'textfield',
        '#title' => t('Slice Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['pieFontSize']) ? $this->options['pieFontSize'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0')),
    );
	
	$form['pieFontColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Slice Font Color'),
        '#default_value' => isset($this->options['pieFontColor']) ? $this->options['pieFontColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0')),
    );
	
    $form['isStacked'] = array(
        '#type' => 'checkbox',
        '#title' => t('Stacked'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['isStacked']) ? $this->options['isStacked'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4')),
    );

    $form['color'] = array(
        '#title' => t('Colors'),
        '#description' => t('Color palette.'),
        '#type' => 'select',
        '#options' => array(
        '0' => 'Default',
        '1' => 'Logic',
        '2' => 'Vivid',
		'3' => 'Max contrast',
        '4' => 'Web2 Bold',
        '5' => 'Web2 Muted',
        '6' => 'Neutral',
		'7' => 'Map blue',
		'8' => 'Map red',
		'9' => 'Map violet',
		'10' => 'Map kivi',
        '11' => 'Orange-scaled',
        '12' => 'Green-scaled',		
        ),
        '#default_value' => isset($this->options['color']) ? $this->options['color'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5', '6', '7', '8', '10')),
    );

    $form['legend'] = array(
        '#title' => t('Legend position'),
        '#type' => 'select',
        '#options' => array(
            'right' => t('Right'),
            'left' => t('Left'),
            'top' => t('Top'),
            'bottom' => t('Bottom'),
            'none' => t('None'),
        ),
        '#default_value' => isset($this->options['legend']) ? $this->options['legend'] : 'right',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
/*
    $form['legendBackgroundColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Legend Background Color'),
        '#default_value' => isset($this->options['legendBackgroundColor']) ? $this->options['legendBackgroundColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
*/
    $form['legendFontSize'] = array(
        '#type' => 'textfield',
        '#title' => t('Legend Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['legendFontSize']) ? $this->options['legendFontSize'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['legendTextColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Legend Text Color'),
        '#default_value' => isset($this->options['legendTextColor']) ? $this->options['legendTextColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['backgroundColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Background Color'),
        '#default_value' => isset($this->options['backgroundColor']) ? $this->options['backgroundColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['backgroundColorStrokeColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Background Border Color'),
        '#default_value' => isset($this->options['backgroundColorStrokeColor']) ? $this->options['backgroundColorStrokeColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
	
    $form['backgroundColorStrokeWidth'] = array(
        '#type' => 'textfield',
        '#title' => t('Background Border Width'),
        '#default_value' => isset($this->options['backgroundColorStrokeWidth']) ? $this->options['backgroundColorStrokeWidth'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['gridlineColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Gridline Color'),
        '#default_value' => isset($this->options['gridlineColor']) ? $this->options['gridlineColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );	

    $form['chartAreaL'] = array(
        '#type' => 'textfield',
        '#title' => t('Chart Area Left'),
		'#description' => t('in px'),
        '#default_value' => isset($this->options['chartAreaL']) ? $this->options['chartAreaL'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
	
    $form['chartAreaT'] = array(
        '#type' => 'textfield',
        '#title' => t('Chart Area Top'),
		'#description' => t('in px'),
        '#default_value' => isset($this->options['chartAreaT']) ? $this->options['chartAreaT'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['chartAreaW'] = array(
        '#type' => 'textfield',
        '#title' => t('Chart Area Width'),
		'#description' => t('can be in %'),
        '#default_value' => isset($this->options['chartAreaW']) ? $this->options['chartAreaW'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );	
	
    $form['chartAreaH'] = array(
        '#type' => 'textfield',
        '#title' => t('Chart Area Height'),
		'#description' => t('can be in %'),
        '#default_value' => isset($this->options['chartAreaH']) ? $this->options['chartAreaH'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );	
/*    
    $form['borderColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Border Color'),
        '#default_value' => isset($this->options['borderColor']) ? $this->options['borderColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
*/
    $form['titleColor'] = array(
        '#type' => 'textfield',
        '#title' => t('Title Color'),
        '#default_value' => isset($this->options['titleColor']) ? $this->options['titleColor'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );

    $form['titleFontSize'] = array(
        '#type' => 'textfield',
        '#title' => t('Title Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['titleFontSize']) ? $this->options['titleFontSize'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );
// H Axis
	$form['HaxisTitlePosition'] = array(
        '#title' => t('H Axis Title Position'),
        '#type' => 'select',
        '#options' => array(
		  'out' => 'out',
          'in' => 'in',
		  'none' => 'none',
        ),
        '#default_value' => isset($this->options['HaxisTitlePosition']) ? $this->options['HaxisTitlePosition'] : 'out',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );
	$form['HaxisTextPosition'] = array(
        '#title' => t('H Axis Text Position'),
        '#type' => 'select',
        '#options' => array(
          'in' => 'in',
          'out' => 'out',
		  'none' => 'none',
        ),
        '#default_value' => isset($this->options['HaxisTextPosition']) ? $this->options['HaxisTextPosition'] : 'out',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );
	
    $form['HaxisNumberFormat'] = array(
        '#title' => t('Haxis Number Format'),
        '#type' => 'select',
        '#options' => array(
			'0' => t('Default'),
			'#' => '123456',
			'#0.00' => '12345,67',
			'###,##0.00' => '12,345.67',
			'##0.###E0' => '12.345E3',
        ),
        '#default_value' => isset($this->options['HaxisNumberFormat']) ? $this->options['HaxisNumberFormat'] : '0',
		'#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2','6')),
    );
	
    $form['linlogX'] = array(
        '#title' => t('H Axis Scale'),
        '#type' => 'select',
        '#options' => array(
        'lin' => 'Lin',
        'log' => 'Log',
        ),
        '#default_value' => isset($this->options['linlogX']) ? $this->options['linlogX'] : 'lin',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );
	$form['baselineX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis Baseline'),
        '#default_value' => isset($this->options['baselineX']) ? $this->options['baselineX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
	$form['minX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis min'),
        '#default_value' => isset($this->options['minX']) ? $this->options['minX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['maxX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis max'),
        '#default_value' => isset($this->options['maxX']) ? $this->options['maxX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisColorX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis Color'),
        '#default_value' => isset($this->options['axisColorX']) ? $this->options['axisColorX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisFontSizeX'] = array(
        '#type' => 'textfield',
        '#title' => t('Axis Font Size H'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['axisFontSizeX']) ? $this->options['axisFontSizeX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['titleX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis Title'),
        '#default_value' => isset($this->options['titleX']) ? $this->options['titleX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisTitleColorX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis Title Color'),
        '#default_value' => isset($this->options['axisTitleColorX']) ? $this->options['axisTitleColorX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisTitleFontSizeX'] = array(
        '#type' => 'textfield',
        '#title' => t('H Axis Title Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['axisTitleFontSizeX']) ? $this->options['axisTitleFontSizeX'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
	
// V Ahis
	$form['VaxisTitlePosition'] = array(
        '#title' => t('V Axis Title Position'),
        '#type' => 'select',
        '#options' => array(
          'out' => 'out',		
          'in' => 'in',
		  'none' => 'none',
        ),
        '#default_value' => isset($this->options['VaxisTitlePosition']) ? $this->options['VaxisTitlePosition'] : 'out',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );

	$form['VaxisTextPosition'] = array(
        '#title' => t('V Axis Text Position'),
        '#type' => 'select',
        '#options' => array(
          'in' => 'in',
          'out' => 'out',
		  'none' => 'none',
        ),
        '#default_value' => isset($this->options['VaxisTextPosition']) ? $this->options['VaxisTextPosition'] : 'out',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );

    $form['VaxisNumberFormat'] = array(
        '#title' => t('Vaxis Number Format'),
        '#type' => 'select',
        '#options' => array(
			'0' => t('Default'),
			'#' => '123456',
			'#0.00' => '12345,67',
			'###,##0.00' => '12,345.67',
			'##0.###E0' => '12.345E3',
        ),
        '#default_value' => isset($this->options['VaxisNumberFormat']) ? $this->options['VaxisNumberFormat'] : '0',
		'#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('3', '4', '5', '6')),
    );

    $form['linlogY'] = array(
        '#title' => t('V Axis Scale'),
        '#type' => 'select',
        '#options' => array(
        'lin' => 'Lin',
        'log' => 'Log',
        ),
        '#default_value' => isset($this->options['linlogY']) ? $this->options['linlogY'] : 'lin',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5', '6')),
    );
	$form['baselineY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Baseline'),
        '#default_value' => isset($this->options['baselineY']) ? $this->options['baselineY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
	$form['minY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis min'),
        '#default_value' => isset($this->options['minY']) ? $this->options['minY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['maxY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis max'),
        '#default_value' => isset($this->options['maxY']) ? $this->options['maxY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisColorY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Color'),
        '#default_value' => isset($this->options['axisColorY']) ? $this->options['axisColorY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisFontSizeY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['axisFontSizeY']) ? $this->options['axisFontSizeY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['titleY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Title'),
        '#default_value' => isset($this->options['titleY']) ? $this->options['titleY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisTitleColorY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Title Color'),
        '#default_value' => isset($this->options['axisTitleColorY']) ? $this->options['axisTitleColorY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );
    $form['axisTitleFontSizeY'] = array(
        '#type' => 'textfield',
        '#title' => t('V Axis Title Font Size'),
        '#description' => t('in px'),
        '#default_value' => isset($this->options['axisTitleFontSizeY']) ? $this->options['axisTitleFontSizeY'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('2', '3', '4', '5','6')),
    );

    $form['interpolateNulls'] = array(
        '#type' => 'checkbox',
        '#title' => t('Interpolate NULLs'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['interpolateNulls']) ? $this->options['interpolateNulls'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('5')),
    );	
	/*
    $form['pieJoinAngle'] = array(
        '#type' => 'textfield',
        '#title' => t('Pie Join Angle'),
        '#description' => t('Any slice less than this angle will be combined into a generic slice labeled "Other". Must be number.'),
        '#default_value' => isset($this->options['axisFontSize']) ? $this->options['axisFontSize'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0')),
    );
*/
    $form['pieMinimalAngle'] = array(
        '#type' => 'textfield',
        '#title' => t('Pie Minimal Angle'),
        '#description' => t('Any slice smaller than this angle will not be drawn in the pie chart (though it will still get a legend entry). Must be number.'),
        '#default_value' => isset($this->options['axisFontSize']) ? $this->options['axisFontSize'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0')),
    );
/*
    $form['enableTooltip'] = array(
        '#type' => 'checkbox',
        '#title' => t('Enable Tooltip'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['enableTooltip']) ? $this->options['enableTooltip'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('0', '2', '3', '4', '5','6')),
    );*/
//MotionChart
    $form['mcdateformat'] = array(
        '#title' => t('Date format'),
        '#type' => 'select',
        '#options' => array(
			'1' => t('Date (m-d-Y)'),
			'2' => t('Year'),
			'3' => t('Week number'),
			'4' => t('Quarter'),
        ),
        '#default_value' => isset($this->options['mcdateformat']) ? $this->options['mcdateformat'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showChartButtons'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Chart Buttons'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showChartButtons']) ? $this->options['showChartButtons'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showHeadermc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Header'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showHeadermc']) ? $this->options['showHeadermc'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showSelectListComponent'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Select List Component'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showSelectListComponent']) ? $this->options['showSelectListComponent'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showSidePanel'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Side Panel'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showSidePanel']) ? $this->options['showSidePanel'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showXMetricPicker'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show X Metric Picker'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showXMetricPicker']) ? $this->options['showXMetricPicker'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showYMetricPicker'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Y Metric Picker'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showYMetricPicker']) ? $this->options['showYMetricPicker'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showXScalePicker'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show X Scale Picker'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showXScalePicker']) ? $this->options['showXScalePicker'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showYScalePicker'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Y Scale Picker'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showYScalePicker']) ? $this->options['showYScalePicker'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['showAdvancedPanel'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Advanced Panel'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showAdvancedPanel']) ? $this->options['showAdvancedPanel'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );

    $form['state'] = array(
        '#type' => 'textarea',
        '#title' => t('State'),
        '#description' => t('An initial display state for the chart. This is a serialized JSON object that describes zoom level, selected dimensions, selected bubbles/entities, and other state descriptions'),
        '#default_value' => isset($this->options['state']) ? $this->options['state'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('9')),
    );
//for ATL
	$form['displayAnnotations'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Annotations'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayAnnotations']) ? $this->options['displayAnnotations'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['displayAnnotationsFilter'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Annotations Filter'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayAnnotationsFilter']) ? $this->options['displayAnnotationsFilter'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['allowHtml'] = array(
        '#type' => 'checkbox',
        '#title' => t('Allow Html'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['allowHtml']) ? $this->options['allowHtml'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10','16')),
    );
	$form['displayDateBarSeparator'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Date Bar Separator'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayDateBarSeparator']) ? $this->options['displayDateBarSeparator'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['displayExactValues'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Exact Values'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayExactValues']) ? $this->options['displayExactValues'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['displayLegendDots'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Legend Dots'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayExactValues']) ? $this->options['displayExactValues'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['displayRangeSelector'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Range Selector'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayRangeSelector']) ? $this->options['displayRangeSelector'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['displayZoomButtons'] = array(
        '#type' => 'checkbox',
        '#title' => t('displayZoomButtons'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['displayZoomButtons']) ? $this->options['displayZoomButtons'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['scaleColumns'] = array(
        '#title' => t('Number of Scales'),
        '#type' => 'select',
        '#options' => array('0'=>'1 scale','1'=>'2 scales','2'=>'3 scales'),
        '#default_value' => isset($this->options['scaleType']) ? $this->options['scaleType'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['scaleType'] = array(
        '#title' => t('Scale Type'),
        '#type' => 'select',
        '#options' => array('fixed'=>'fixed','maximized'=>'maximized'),
        '#default_value' => isset($this->options['scaleType']) ? $this->options['scaleType'] : 'fixed',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
    $form['atlmin'] = array(
        '#type' => 'textfield',
        '#title' => t('Scales MIN'),
        '#default_value' => isset($this->options['atlmin']) ? $this->options['atlmin'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
    $form['atlmax'] = array(
        '#type' => 'textfield',
        '#title' => t('Scales MAX'),
        '#default_value' => isset($this->options['atlmax']) ? $this->options['atlmax'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
	$form['atlfill'] = array(
        '#type' => 'textfield',
        '#title' => t('Fill Opacity'),
		'#description' => t('0-100'),
        '#default_value' => isset($this->options['atlfill']) ? $this->options['atlfill'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
    $form['atlthickness'] = array(
        '#type' => 'textfield',
        '#title' => t('Line Thickness'),
		'#description' => t('0-10'),
        '#default_value' => isset($this->options['atlthickness']) ? $this->options['atlthickness'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('10')),
    );
// for Map	
	$form['enableScrollWheel'] = array(
        '#type' => 'checkbox',
        '#title' => t('Enable Scroll Wheel'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['enableScrollWheel']) ? $this->options['enableScrollWheel'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );

	$form['showTipMap'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Tip'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showTipMap']) ? $this->options['showTipMap'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );
	
	$form['showLineMap'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Line'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showLineMap']) ? $this->options['showLineMap'] : '1',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );
	
    $form['lineColorMap'] = array(
        '#type' => 'textfield',
        '#title' => t('Line Color'),
        '#default_value' => isset($this->options['lineColorMap']) ? $this->options['lineColorMap'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );
	
    $form['lineWidthMap'] = array(
        '#type' => 'textfield',
        '#title' => t('Line Width'),
        '#description' => t('in pixels'),
        '#default_value' => isset($this->options['lineWidthMap']) ? $this->options['lineWidthMap'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );	

    $form['zoomLevelMap'] = array(
        '#type' => 'textfield',
        '#title' => t('Zoom Level'),
        '#description' => t('0-19'),
        '#default_value' => isset($this->options['zoomLevelMap']) ? $this->options['zoomLevelMap'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('11')),
    );
// gauge	
    $form['GaugeMin'] = array(
        '#type' => 'textfield',
        '#title' => t('Minimum Value'),
        '#default_value' => isset($this->options['GaugeMin']) ? $this->options['GaugeMin'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['GaugeMax'] = array(
        '#type' => 'textfield',
        '#title' => t('Maximum Value'),
        '#default_value' => isset($this->options['GaugeMax']) ? $this->options['GaugeMax'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['greenFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('Green From'),
        '#default_value' => isset($this->options['greenFrom']) ? $this->options['greenFrom'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['greenTo'] = array(
        '#type' => 'textfield',
        '#title' => t('Green To'),
        '#default_value' => isset($this->options['greenTo']) ? $this->options['greenTo'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['yellowFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('Yellow From'),
        '#default_value' => isset($this->options['yellowFrom']) ? $this->options['yellowFrom'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['yellowTo'] = array(
        '#type' => 'textfield',
        '#title' => t('Yellow To'),
        '#default_value' => isset($this->options['yellowTo']) ? $this->options['yellowTo'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['redFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('RedFrom'),
        '#default_value' => isset($this->options['redFrom']) ? $this->options['redFrom'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
    $form['redTo'] = array(
        '#type' => 'textfield',
        '#title' => t('Red To'),
        '#default_value' => isset($this->options['redTo']) ? $this->options['redTo'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('1')),
    );
//for Table
	$form['page'] = array(
        '#title' => t('Pager'),
        '#type' => 'select',
        '#options' => array('enable'=>t('Enable'),'disable'=>t('Disable')),
        '#default_value' => isset($this->options['page']) ? $this->options['page'] : 'disable',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('14')),
    );
	$form['pageSize'] = array(
        '#type' => 'textfield',
        '#title' => t('Page Size'),
        '#default_value' => isset($this->options['pageSize']) ? $this->options['pageSize'] : '10',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('14')),
    );
	$form['showRowNumber'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show Row Number'),
        '#return_value' => 1,
        '#default_value' => isset($this->options['showRowNumber']) ? $this->options['showRowNumber'] : '0',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('14')),
    );
//for Organizational chart
    $form['Name'] = array(
        '#title' => t('Name'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $field_names,
        '#default_value' => isset($this->options['Name']) ? $this->options['Name'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('16')),
    );
    $form['LongName'] = array(
        '#title' => t('LongName'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $field_names,
        '#default_value' => isset($this->options['LongName']) ? $this->options['LongName'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('16')),
    );
    $form['Manager'] = array(
        '#title' => t('Manager'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $field_names,
        '#default_value' => isset($this->options['Manager']) ? $this->options['Manager'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('16')),
    );
    $form['Tooltip'] = array(
        '#title' => t('Tooltip'),
        '#description' => t('Must be string.'),
        '#type' => 'select',
        '#options' => $field_names,
        '#default_value' => isset($this->options['Tooltip']) ? $this->options['Tooltip'] : '',
        '#process' => array('views_process_dependency'),
        '#dependency' => array('edit-style-options-type' => array('16')),
    );
  }

  function options_validate(&$form, &$form_state) {
    parent::options_validate($form, $form_state);
    switch ($form_state['values']['style_options']['type']) {
      case '0':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '1':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '2':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '3':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '4':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '5':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '6':
        if ($form_state['values']['style_options']['xaxis1']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '8':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
      case '9':
        if ($form_state['values']['style_options']['xaxis']=='') {
          form_set_error('style_options][xaxis', t('Field @field must be set.', array('@field' => $form['xaxis']['#title'])));
        }
        if ($form_state['values']['style_options']['yaxis1_1']=='') {
          form_set_error('style_options][yaxis1_1', t('Field @field must be set.', array('@field' => $form['yaxis1_1']['#title'])));
        }
        break;
	  case '10':
        if ($form_state['values']['style_options']['yaxis1_1']=='') {
          form_set_error('style_options][yaxis1_1', t('Field @field must be set.', array('@field' => $form['yaxis1_1']['#title'])));
        }
		if ($form_state['values']['style_options']['atlfill']<0 || $form_state['values']['style_options']['atlfill']>10) {
          form_set_error('style_options][atlfill', t('@field must be 0-10 range.', array('@field' => $form['atlfill']['#title'])));
        }
		if ($form_state['values']['style_options']['atlthickness']<0 || $form_state['values']['style_options']['atlthickness']>100) {
          form_set_error('style_options][atlthickness', t('@field must be 0-100 range.', array('@field' => $form['atlthickness']['#title'])));
        }
        break;
	  case '14':
        if ($form_state['values']['style_options']['pageSize']=='') {
          form_set_error('style_options][pageSize', t('Field @field must be set.', array('@field' => $form['pageSize']['#title'])));
        }
        break;
	  case '15':
        if ($form_state['values']['style_options']['zaxis1']=='') {
          form_set_error('style_options][zaxis1', t('Field @field must be set.', array('@field' => $form['zaxis1']['#title'])));
        }
		if ($form_state['values']['style_options']['zzaxis1']=='') {
          form_set_error('style_options][zzaxis1', t('Field @field must be set.', array('@field' => $form['zzaxis1']['#title'])));
        }
		if ($form_state['values']['style_options']['yaxis1']=='') {
          form_set_error('style_options][yaxis1', t('Field @field must be set.', array('@field' => $form['yaxis1']['#title'])));
        }
        break;
		case '16':
		break;
    }
  }
}