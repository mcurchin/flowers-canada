<?php
//var_dump($data);
?>

<table border="0" frame="VOID" rules="NONE" cellspacing="0">
<colgroup><col width="440" /><col width="101" /><col width="118" /><col width="84" /></colgroup>
<tbody>
<tr>
<td align="LEFT" valign="BOTTOM" width="440" height="19"><span style="color: #000000; font-family: 'Arial Black';">&nbsp;</span></td>
<td align="LEFT" valign="BOTTOM" width="101"><span style="color: #000000;">&nbsp;</span></td>
<td align="LEFT" valign="BOTTOM" width="118"><span style="color: #000000;">&nbsp;</span></td>
<td align="LEFT" valign="BOTTOM" width="84"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-top: 3px solid #000000; border-bottom: 3px solid #000000; border-left: 3px solid #000000;" colspan="2" align="CENTER" valign="BOTTOM"><span style="color: #000000;">Greenhouse</span></td>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" rowspan="2" align="CENTER" valign="BOTTOM"><span style="color: #000000;">Total</span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="38"><span style="color: #000000;">Income</span></td>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000;" align="CENTER" valign="BOTTOM"><span style="color: #000000;">Total</span></td>
<td style="border-top: 3px solid #000000; border-right: 3px solid #000000;" align="CENTER" valign="BOTTOM"><span style="color: #000000;">Per Square Foot</span></td>
</tr>
<tr>
<td style="border-top: 3px solid #000000; border-bottom: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Revenue/Sales</span></td>
<td style="border-top: 3px solid #000000; border-bottom: 3px solid #000000; border-left: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['crop_sales_sales_of_products_produced_in_your_greenhouse_or_field_operations'] ?></span></td>
<td style="border-top: 3px solid #000000; border-bottom: 3px solid #000000; border-right: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['crop_sales_sales_of_products_produced_in_your_greenhouse_or_field_operations_per_sq'] ?></span></td>
<td style="border: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['other_sales_sales_of_plants_or_products_purchased_of_resale__other_sources_of_revenue'] ?></span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Expenses</span></td>
<td style="border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Production Expenses</span></td>
<td style="border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Greenhouse</span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_greenhouse_costs'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_greenhouse_costs_per_sq_ft'] ?></span></td>
<td style="border-top: 3px solid #000000; border-bottom: 1px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td style="border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Variable Inputs</span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_variable_input_costs_calculated'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_variable_input_costs_calculated_sqft'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td style="border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Labor</span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['wages_commissions_and_benefits_non_family'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['wages_commissions_and_benefits_non_family_sqft'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td style="border-bottom: 3px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Total</span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_production_costs'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_production_costs_sqft'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_production_costs'] ?></span></td>
</tr>
<tr>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Gross Margin</span></td>
<td style="border-top: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['calculated_gross_margin_based_on_revenue_and_costs_of_greenhouse_production_calculated'] ?></span></td>
<td style="border-top: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['calculated_gross_margin_based_on_revenue_and_costs_of_greenhouse_production_calculated_sqft'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 3px solid #000000; border-left: 3px solid #000000; border-right: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
</tr>
<tr>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Plants purchased for Resale</span></td>
<td style="border-top: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-top: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-top: 3px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['flowers_purchased_for_resale'] ?></span></td>
</tr>
<tr>
<td style="border-bottom: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Other Income</span></td>
<td style="border-bottom: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-bottom: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-top: 1px solid #000000; border-bottom: 3px solid #000000; border-left: 1px solid #000000; border-right: 3px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_of_other_income_calculated'] ?></span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Gross Margin for Firm</span></td>
<td style="border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['other_sales_sales_of_plants_or_products_purchased_of_resale__other_sources_of_revenue'] - $data['total_production_costs'] - $data['flowers_purchased_for_resale'] + $data['total_of_other_income_calculated'] ?></span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">Sales and Marketing</span></td>
<td style="border: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_sales_and_marketing_expenses_calculated'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_sales_and_marketing_expenses_per_sq_ft_calculated'] ?></span></td>
<td style="border: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_sales_and_marketing_expenses_calculated'] ?></span></td>
</tr>
<tr>
<td align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">General and Administrative Costs</span></td>
<td style="border: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_general_and_administrative_expenses_excluding_family_wages_calculated'] ?></span></td>
<td style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_general_and_administrative_expenses_sqft'] ?></span></td>
<td style="border: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['total_general_and_administrative_expenses_excluding_family_wages_calculated'] ?></span></td>
</tr>
<tr>
<td style="border: 3px solid #000000;" align="LEFT" valign="BOTTOM" height="19"><span style="color: #000000;">EBITA Earnings before Interest, Taxes and Amortization</span></td>
<td style="border-bottom: 3px solid #000000; border-left: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border-bottom: 3px solid #000000;" align="LEFT" valign="BOTTOM"><span style="color: #000000;">&nbsp;</span></td>
<td style="border: 1px solid #000000;" align="RIGHT" valign="BOTTOM"><span style="color: #000000;"><?php print $data['other_sales_sales_of_plants_or_products_purchased_of_resale__other_sources_of_revenue'] - $data['total_production_costs'] - $data['flowers_purchased_for_resale'] + $data['total_of_other_income_calculated'] - $data['total_sales_and_marketing_expenses_calculated'] - $data['total_general_and_administrative_expenses_excluding_family_wages_calculated'] ?></span></td>
</tr>
</tbody>
</table>