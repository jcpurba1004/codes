<?php 
//Dinner cost calculator
$cash = 31;
$dinner = 25;
$tax = 10;
$tip = 10;

if(($cost = restaurant_check($dinner, $tax, $tip)) < $cash) {
	echo 'If my meal cost $'.$cost.', I can afford a tip of ' .$tip. '% '."<br>\n";
}

//This function performs the calculations for a meal, tax, and a tip
function restaurant_check($meal, $tax, $tip) {
	$tax_amount = $meal * ($tax / 100);
	$tip_amount = $meal * ($tip / 100);
	return $meal + $tax_amount + $tip_amount;
}
?>
