<?php

//Plot Bar Graphs Setup
$canvas = charts_graphs_get_graph('google-charts');
$canvas->type = 'bar';
$canvas->colour = '#FFFFFF';
$canvas->x_labels = array('Your Greenhouse','All', 'Like-for-Like', 'All Large', 'All Potted');
$canvas->parameters['chs'] = "500x400";
$canvas->series_colours = array('#123456');
$canvas->parameters['chco'] = "FF0000|123456|123456|123456|123456";
$canvas->parameters['chbh'] = "40,15,30";

//Create Graphs for Greenhouse Revenue
$canvas->title = 'Greenhouse Revenue';
$canvas->series = array(array(($data['greenhouse_sales']['my']),
			      $data['greenhouse_sales']['all'],
			      $data['greenhouse_sales']['like'],
			      $data['greenhouse_sales']['size'],
			      $data['greenhouse_sales']['type']));
$canvas->parameters['chdl'] = "($1,000)";
$prodsalesrev_chart = $canvas->get_chart();

$canvas->title = 'Comparison of Your Greenhouse Revenue as a Percent';
$canvas->series = array(array((100),138,100,109,142));
$canvas->parameters['chdl'] = "(%)";
$prodcosts_chart = $canvas->get_chart();

$canvas->title = 'Greenhouse Cost';
$canvas->series = array(array(($data['greenhouse_costs']['my']),
			      $data['greenhouse_costs']['all'],
			      $data['greenhouse_costs']['like'],
			      $data['greenhouse_costs']['size'],
			      $data['greenhouse_costs']['type']));
$canvas->parameters['chdl'] = "Costs ($1,000)";
$totalsales_chart = $canvas->get_chart();

$canvas->title = 'Comparison of Your Greenhouse Cost as a Percent';
$canvas->series = $canvas->series = array(array((100),127,96,119,124));
$canvas->parameters['chdl'] = "(%)";
$admincosts_chart = $canvas->get_chart();

//Create Graphs for Costs
$canvas->title = 'Variable Input Costs';
$canvas->series = array(array(($data['input_costs']['my']),
			      $data['input_costs']['all'],
			      $data['input_costs']['like'],
			      $data['input_costs']['size'],
			      $data['input_costs']['type']));
$canvas->parameters['chdl'] = "Costs ($1,000)";
$totalcosts_chart = $canvas->get_chart();

$canvas->title = 'Comparison of Your Variable Input Cost as a Percent';
$canvas->series = $canvas->series = array(array((100),69,80,82,119));
$canvas->parameters['chdl'] = "(%)";
$opmargin_chart = $canvas->get_chart();

$canvas->title = 'Labour';
$canvas->series = array(array(($data['labour']['my']),
			      $data['labour']['all'],
			      $data['labour']['like'],
			      $data['labour']['size'],
			      $data['labour']['type']));
$canvas->parameters['chdl'] = "Wages ($)";
$greenhouse_chart = $canvas->get_chart();

//Create Graphs for Purchased Inputs
$canvas->title = 'Comparison of Labour Costs as a Percent';
$canvas->series = $canvas->series = array(array((100),172,107,121,182));
$canvas->parameters['chdl'] = "(%)";
$purchasedin_chart = $canvas->get_chart();

$canvas->title = 'Production Cost';
$canvas->series = array(array(($data['production_costs']['my']),
			      $data['production_costs']['all'],
			      $data['production_costs']['like'],
			      $data['production_costs']['size'],
			      $data['production_costs']['type']));
$canvas->parameters['chdl'] = "Cost ($1,000)";
$wages_chart = $canvas->get_chart();

$canvas->title = 'Comparison of Production Cost as a Percent';
$canvas->series = $canvas->series = array(array((100),94,90,104,136));
$canvas->parameters['chdl'] = "(%)";
$other_chart = $canvas->get_chart();

$canvas->title = 'Production Margin';
$canvas->series = array(array(($data['production_margin']['my']),
			      $data['production_margin']['all'],
			      $data['production_margin']['like'],
			      $data['production_margin']['size'],
			      $data['production_margin']['type']));
$canvas->parameters['chdl'] = "($1,000)";
$totalpcosts_chart = $canvas->get_chart();

$canvas->title = 'Comparison of Your Production Margin as a Percent';
$canvas->series = $canvas->series = array(array((100),160,136,157,159));
$canvas->parameters['chdl'] = "(%)";
$permargin_chart = $canvas->get_chart();


?>

<style>

.anlys_val {
	text-align: right;
}

.anlys_val2 {
	text-align: right;
	font-weight:bold;
}

.anlys_label {
	font-weight:bold;
}

</style>
<p>*All Comparisons are made on a square foot basis<br />Your Greenhouse is: Large, Potted Plants</p>
<br />
<h3>Revenue &amp; Sales</h3>

<table>
<tr><th width=175px></th><th class="anlys_val">Your Greenhouse</th><th class="anlys_val">All Greenhouses</th><th class="anlys_val">Like-for-Like</th><th class="anlys_val">All Large Greenhouses</th><th class="anlys_val">All Potted Plants</th></tr>
<tr><td>Greenhouse Sales <a href="#hidden_prodsalesrev" id="dom_prodsalesrev" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
<td class="anlys_val"><?php print $data['greenhouse_sales']['my']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_sales']['all']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_sales']['like']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_sales']['size']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_sales']['type']; ?></td></tr>
<tr><td>Percentage of: <a href="#hidden_prodcosts" id="dom_prodcosts" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">138%</td><td class="anlys_val">100%</td><td class="anlys_val">109%</td><td class="anlys_val">142%</td></tr>
</table>
<br />
<br />
<h3>Costs</h3>

<table>
<tr><th width=175px></th><th class="anlys_val">Your Greenhouse</th><th class="anlys_val">All Greenhouses</th><th class="anlys_val">Like-for-Like</th><th class="anlys_val">All Large Greenhouses</th><th class="anlys_val">All Potted Plants</th></tr>
<tr><td>Greenhouse Cost <a href="#hidden_totalsales" id="dom_totalsales" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
<td class="anlys_val"><?php print $data['greenhouse_costs']['my']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_costs']['all']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_costs']['like']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_costs']['size']; ?></td>
<td class="anlys_val"><?php print $data['greenhouse_costs']['type']; ?></td></tr>


<tr><td>Percentage of: <a href="#hidden_admincosts" id="dom_admincosts" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">127%</td><td class="anlys_val">96%</td><td class="anlys_val">119%</td><td class="anlys_val">124%</td></tr>

<tr><td>&nbsp;</td></tr>

<tr><td>Variable Input Costs <a href="#hidden_totalcosts" id="dom_totalcosts" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
<td class="anlys_val"><?php print $data['input_costs']['my']; ?></td>
<td class="anlys_val"><?php print $data['input_costs']['all']; ?></td>
<td class="anlys_val"><?php print $data['input_costs']['like']; ?></td>
<td class="anlys_val"><?php print $data['input_costs']['size']; ?></td>
<td class="anlys_val"><?php print $data['input_costs']['type']; ?></td></tr>

<tr><td>Percentage of: <a href="#hidden_opmargin" id="dom_opmargin" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">69%</td><td class="anlys_val">80%</td><td class="anlys_val">82%</td><td class="anlys_val">119%</td></tr>

<tr><td>&nbsp;</td></tr>

<tr>	<td>Labour<a href="#hidden_greenhouse" id="dom_greenhouse" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a> </td>
<td class="anlys_val"><?php print $data['labour']['my']; ?></td>
<td class="anlys_val"><?php print $data['labour']['all']; ?></td>
<td class="anlys_val"><?php print $data['labour']['like']; ?></td>
<td class="anlys_val"><?php print $data['labour']['size']; ?></td>
<td class="anlys_val"><?php print $data['labour']['type']; ?></td></tr>
<tr><td>Percentage of: <a href="#hidden_purchasedin" id="dom_purchasedin" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">172%</td><td class="anlys_val">107%</td><td class="anlys_val">121%</td><td class="anlys_val">182%</td></tr>


<tr><td>&nbsp;</td></tr>

<tr>	<td>Production Cost<a href="#hidden_wages" id="dom_wages" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a> </td>
<td class="anlys_val"><?php print $data['production_costs']['my']; ?></td>
<td class="anlys_val"><?php print $data['production_costs']['all']; ?></td>
<td class="anlys_val"><?php print $data['production_costs']['like']; ?></td>
<td class="anlys_val"><?php print $data['production_costs']['size']; ?></td>
<td class="anlys_val"><?php print $data['production_costs']['type']; ?></td></tr>
<tr><td>Percentage of: <a href="#hidden_other" id="dom_other" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">94%</td><td class="anlys_val">90%</td><td class="anlys_val">104%</td><td class="anlys_val">136%</td></tr>

</table>
<br /><br />
<h3>Operating Margin</h3>

<table>
<tr><th width=175px></th><th class="anlys_val">Your Greenhouse</th><th class="anlys_val">All Greenhouses</th><th class="anlys_val">Like-for-Like</th><th class="anlys_val">All Large Greenhouses</th><th class="anlys_val">All Potted Plants</th></tr>
<tr><td>Production Margin<a href="#hidden_totalpcosts" id="dom_totalpcosts" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a> </td>
<td class="anlys_val"><?php print $data['production_margin']['my']; ?></td>
<td class="anlys_val"><?php print $data['production_margin']['all']; ?></td>
<td class="anlys_val"><?php print $data['production_margin']['like']; ?></td>
<td class="anlys_val"><?php print $data['production_margin']['size']; ?></td>
<td class="anlys_val"><?php print $data['production_margin']['type']; ?></td></tr>
<tr><td>Percentage of: <a href="#hidden_permargin" id="dom_permargin" toptions="width = 600, height = 450, type = dom, layout = quicklook, resizable = 0"><img alt="See Graph" src="http://intranetsoftware.ca.s127233.gridserver.com/sites/default/files/images/icon_graph2.gif" /></a></td>
		<td class="anlys_val">100%</td><td class="anlys_val">160%</td><td class="anlys_val">136%</td><td class="anlys_val">157%</td><td class="anlys_val">159%</td></tr>

</table>

<br /><br />



<br />

<div id="hidden_admincosts" style="display: none;">
  <center><?php  echo $admincosts_chart ?></center>
</div>

<div id="hidden_prodsalesrev" style="display: none;">
  <center><?php  echo $prodsalesrev_chart ?></center>
</div>

<div id="hidden_prodcosts" style="display: none;">
  <center><?php  echo $prodcosts_chart ?></center>
</div>

<div id="hidden_totalsales" style="display: none;">
  <center><?php  echo $totalsales_chart ?></center>
</div>

<div id="hidden_totalcosts" style="display: none;">
  <center><?php  echo $totalcosts_chart ?></center>
</div>

<div id="hidden_opmargin" style="display: none;">
  <center><?php  echo $opmargin_chart ?></center>
</div>

<div id="hidden_greenhouse" style="display: none;">
  <center><?php  echo $greenhouse_chart ?></center>
</div>

<div id="hidden_purchasedin" style="display: none;">
  <center><?php  echo $purchasedin_chart ?></center>
</div>

<div id="hidden_wages" style="display: none;">
  <center><?php  echo $wages_chart ?></center>
</div>

<div id="hidden_other" style="display: none;">
  <center><?php  echo $other_chart ?></center>
</div>

<div id="hidden_totalpcosts" style="display: none;">
  <center><?php  echo $totalpcosts_chart ?></center>
</div>

<div id="hidden_grnhouse" style="display: none;">
  <center><?php  echo $grnhouse_chart ?></center>
</div>

<div id="hidden_prchinputs" style="display: none;">
  <center><?php  echo $prchinputs_chart ?></center>
</div>

<div id="hidden_wages_tot" style="display: none;">
  <center><?php  echo $wages_tot_chart ?></center>
</div>

<div id="hidden_other_per" style="display: none;">
  <center><?php  echo $other_per_chart ?></center>
</div>

<div id="hidden_tpl" style="display: none;">
  <center><?php  echo $tpl_chart ?></center>
</div>

<div id="hidden_permargin" style="display: none;">
  <center><?php  echo $permargin_chart ?></center>
</div>

<div style="clear:both"></div>
<div style="float:left;">
<FORM style="display:inline; padding-left:7px"><INPUT TYPE="BUTTON" VALUE="Go Back" 
ONCLICK="history.go(-1)"></FORM>
<FORM style="display:inline; padding-left:7px" METHOD="LINK" ACTION="http://growyourbusinessonline.ca/logout">
<INPUT TYPE="submit" VALUE="Logout">
</FORM>

</div><br /><br />