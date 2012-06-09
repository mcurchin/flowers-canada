$(document).ready(function () {


$("#edit-submitted-greenhouse-area").change(function() {
if($(this).val() > 250000) {
     $("#large_categorization").val('Large');
}
else {
     $("#large_categorization").val('Small');
}
});

var validateInput = function(key) {

    if(key != "")
    	   return parseFloat(key);
    else
	   return 0;

}

if($("#edit-details-page-num").val() == 2) { // page 2


var g_size = $("#edit-submitted-greenhouse-size").val();

var input_groups = {
"edit-submitted-revenue-and-sales-data-crop-sales-sales-of-products-produced-in-your-greenhouse-or-field-operations":
"edit-submitted-revenue-and-sales-data-crop-sales-sales-of-products-produced-in-your-greenhouse-or-field-operations-per-sq",
"edit-submitted-revenue-and-sales-data-other-sales-sales-of-plants-or-products-purchased-of-resale--other-sources-of-revenue":
"edit-submitted-revenue-and-sales-data-other-sales-sales-of-plants-or-products-purchased-of-resale--other-sources-of-revenue-per-sq",
"edit-submitted-greenhouse-costs-total-greenhouse-costs":"",
"edit-submitted-total-variable-input-costs-calculated":"",
"edit-submitted-wages-commissions-and-benefits-non-family":"",
"edit-submitted-flowers-purchased-for-resale":"",
"edit-submitted-greenhouse-costs-heat":
"edit-submitted-greenhouse-costs-heat-per-sq-ft",
"edit-submitted-greenhouse-costs-hydro":
"edit-submitted-greenhouse-costs-hydro-per-sq-ft",
"edit-submitted-greenhouse-costs-repairs":
"edit-submitted-greenhouse-costs-repairs-per-sq-ft",
"edit-submitted-input-costs-fertilizer-and-sprays":
"edit-submitted-input-costs-fertilizer-and-sprays-sqft",
"edit-submitted-input-costs-seeds-cuttings":
"edit-submitted-input-costs-seeds-cuttings-sqft",
"edit-submitted-input-costs-growing-media":
"edit-submitted-input-costs-growing-media-sqft",
"edit-submitted-input-costs-containers-pots-pails":
"edit-submitted-input-costs-containers-pots-pails-sqft",
"edit-submitted-input-costs-packaging-labels-boxes":
"edit-submitted-input-costs-packaging-labels-boxes-sqft",
"edit-submitted-input-costs-royalties":
"edit-submitted-input-costs-royalties-sqft",
"edit-submitted-input-costs-freight":
"edit-submitted-input-costs-freight-sqft",
"edit-submitted-input-costs-other":
"edit-submitted-input-costs-other-sqft"
};



var recalcTotals = function() {

    $("#edit-submitted-revenue-and-sales-data-total-sales-or-revenue-000-dollars-this-is-calculated-from-the-data-entered").val(
	validateInput($("#edit-submitted-revenue-and-sales-data-crop-sales-sales-of-products-produced-in-your-greenhouse-or-field-operations").val()) +
	validateInput($("#edit-submitted-revenue-and-sales-data-other-sales-sales-of-plants-or-products-purchased-of-resale--other-sources-of-revenue").val()));

    $("#edit-submitted-greenhouse-costs-total-greenhouse-costs").val(
	validateInput($("#edit-submitted-greenhouse-costs-heat").val()) + 
	validateInput($("#edit-submitted-greenhouse-costs-hydro").val()) +
	validateInput($("#edit-submitted-greenhouse-costs-repairs").val()));

    $("#edit-submitted-total-variable-input-costs-calculated").val(
	validateInput($("#edit-submitted-input-costs-fertilizer-and-sprays").val()) + 
	validateInput($("#edit-submitted-input-costs-seeds-cuttings").val()) +
	validateInput($("#edit-submitted-input-costs-growing-media").val()) +
	validateInput($("#edit-submitted-input-costs-containers-pots-pails").val()) + 
	validateInput($("#edit-submitted-input-costs-packaging-labels-boxes").val()) +
	validateInput($("#edit-submitted-input-costs-royalties").val()) + 
	validateInput($("#edit-submitted-input-costs-freight").val()) +
	validateInput($("#edit-submitted-input-costs-other").val()));
	
    $("#edit-submitted-total-production-costs").val(
	validateInput($("#edit-submitted-greenhouse-costs-total-greenhouse-costs").val()) +
    	validateInput($("#edit-submitted-total-variable-input-costs-calculated").val()) + 
	validateInput($("#edit-submitted-wages-commissions-and-benefits-non-family").val()));

    $("#edit-submitted-calculated-gross-margin-based-on-revenue-and-costs-of-greenhouse-production-calculated").val(
	validateInput($("#edit-submitted-revenue-and-sales-data-crop-sales-sales-of-products-produced-in-your-greenhouse-or-field-operations").val()) -
	validateInput($("#edit-submitted-greenhouse-costs-total-greenhouse-costs").val()) -
	validateInput($("#edit-submitted-total-variable-input-costs-calculated").val()) -
	validateInput($("#edit-submitted-wages-commissions-and-benefits-non-family").val()));
	
    $("#edit-submitted-calculated-gross-margin-based-on-total-revenue-and-total-costs").val(
	validateInput($("#edit-submitted-revenue-and-sales-data-total-sales-or-revenue-000-dollars-this-is-calculated-from-the-data-entered").val()) -
	validateInput($("#edit-submitted-calculated-gross-margin-based-on-revenue-and-costs-of-greenhouse-production-calculated").val()) -
	validateInput($("#edit-submitted-flowers-purchased-for-resale").val()));

};



var eventBindings = function(input_obj) {
    input_obj.change(function() {
    	recalcTotals();

    });
};


for(key in input_groups) {
	  eventBindings($("#" + key));
}

} else if($("#edit-details-page-num").val() == 3) { // page 3


var input_groups2 = {
"edit-submitted-sales-and-marketing-expenses-sales-and-marketing-wages":
"",
"edit-submitted-sales-and-marketing-expenses-advertising-and-promotion":
"",
"edit-submitted-sales-and-marketing-expenses-travel-and-entertainment":
"",
"edit-submitted-sales-and-marketing-expenses-other-sales-and-marketing-expenses":
"",
"edit-submitted-total-general-and-administrative-expenses-excluding-family-wages-calculated":
"",
"edit-submitted-general-and-administrative-expenses-rent-and-lease-payment":
"",
"edit-submitted-general-and-administrative-expenses-rent-and-lease-payment":
"",
"edit-submitted-general-and-administrative-expenses-insurance-vehicle-and-building":
"",
"edit-submitted-general-and-administrative-expenses-insurance":
"",
"edit-submitted-general-and-administrative-expenses-training-and-education":
"",
"edit-submitted-general-and-administrative-expenses-truck-and-auto-expenses":
"",
"edit-submitted-general-and-administrative-expenses-office-expenses-and-supplies":
"",
"edit-submitted-general-and-administrative-expenses-licenses-and-taxes":
"",
"edit-submitted-general-and-administrative-expenses-wages-commissions-and-benefits---other":
"",
"edit-submitted-general-and-administrative-expenses-other-expenses":
"",
"edit-submitted-total-general-and-administrative-expenses":
"",
"edit-submitted-general-and-administrative-expenses-wages-and-salary---family":
""

};


var recalcTotalsPage2 = function() {

    $("#edit-submitted-sales-and-marketing-expenses-total-sales-and-marketing-expenses-calculated").val(
	parseFloat($("#edit-submitted-sales-and-marketing-expenses-sales-and-marketing-wages").val()) +
	validateInput($("#edit-submitted-sales-and-marketing-expenses-advertising-and-promotion").val()) +
	validateInput($("#edit-submitted-sales-and-marketing-expenses-travel-and-entertainment").val()) + 
	validateInput($("#edit-submitted-sales-and-marketing-expenses-other-sales-and-marketing-expenses").val()));


    $("#edit-submitted-total-general-and-administrative-expenses-excluding-family-wages-calculated").val(
	validateInput($("#edit-submitted-total-general-and-administrative-expenses-excluding-family-wages-calculated").val()) + 
	validateInput($("#edit-submitted-general-and-administrative-expenses-rent-and-lease-payment").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-rent-and-lease-payment").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-insurance-vehicle-and-building").val()) + 
	validateInput($("#edit-submitted-general-and-administrative-expenses-insurance").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-training-and-education").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-truck-and-auto-expenses").val()) + 
	validateInput($("#edit-submitted-general-and-administrative-expenses-office-expenses-and-supplies").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-licenses-and-taxes").val()) + 
	validateInput($("#edit-submitted-general-and-administrative-expenses-wages-commissions-and-benefits---other").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-other-expenses").val()));
	
    $("#edit-submitted-total-general-and-administrative-expenses").val(
	validateInput($("#edit-submitted-total-general-and-administrative-expenses").val()) +
	validateInput($("#edit-submitted-general-and-administrative-expenses-wages-and-salary---family").val()));


};

var eventBindings = function(input_obj) {
    input_obj.change(function() {
    	recalcTotalsPage2();
    });
};


for(key in input_groups2) {
	  eventBindings($("#" + key));
}


} else if($("#edit-details-page-num").val() == 4) { // page 4

var input_groups3 = {
"edit-submitted-other-income":
"",
"edit-submitted-scientific-research-and-development-credits":
"",
"edit-submitted-agri-invest-income":
"",
"edit-submitted-income-recoveries":
"",
"edit-submitted-rent":
"",
"edit-submitted-other-income-2":
"",
"edit-submitted-other-government-assistance":
""

};

var recalcTotalsPage3 = function() {

    $("#edit-submitted-total-of-other-income-calculated").val(
	validateInput($("#edit-submitted-other-income").val()) +
	validateInput($("#edit-submitted-scientific-research-and-development-credits").val()) +
	validateInput($("#edit-submitted-agri-invest-income").val()) + 
	validateInput($("#edit-submitted-income-recoveries").val()) +
	validateInput($("#edit-submitted-rent").val()) +
	validateInput($("#edit-submitted-other-income-2").val()) + 
	validateInput($("#edit-submitted-other-government-assistance").val()));

};


var eventBindings = function(input_obj) {
    input_obj.change(function() {
    	recalcTotalsPage3();

    });
};


for(key in input_groups3) {
	  eventBindings($("#" + key));
}


}

});


