<html>
<body>
<?php // Script 10.4 - calculator1.php

// Name: Jeremiah Christian Purba
// Date: 11-1-2019
// Chapter 10 Assignment

/* This script displays and handles an HTML form.
It uses a function to calculate a total from a quantity and price. */

// Homework requirement: "Define a global tax rate for your city (See Script 10.5)."
// Define a tax rate for city of San Diego 7.75%:
// It is a global variable.
$tax = 7.75;
// Define this function which performs the calculations received from the form cost, tax and tip.
// Homework requirement: "Use or modify the existing function so it that returns a value."
// In this case, the return value is total.
function calculate_total($cost, $tax, $tip) {
    
    global $tax;
    
    $taxrate = ($tax / 100) + 1;
    $total = ($cost + $tip) * $taxrate; // Calculation
    $total = number_format($total, 2); // Format the total cost in two digits behind the period.
    
    return $total; // return value
    
} // End of function.

// Check to see if the form was submitted
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    
    // Validate the form data and use the function
    if ( is_numeric($_POST['cost']) AND is_numeric($_POST['tax']) AND is_numeric($_POST['tip']) ) {
        
        // Call the function and print the results:
        $total = calculate_total($_POST['cost'], $_POST['tax'], $_POST['tip']);
        print "<p>Your total comes to $<span style=\"font-weight: bold;\">$total</span> (San Diego tax rate (%) = <span style=\"font-weight: bold;\">$tax</span>). </p>";
        
    } else { // Inappropriate values entered.
        print '<p style="color: red;">Please enter a valid cost, tax and tip!</p>';
    }
} else {
    
}
?>

<!-- Homework requirement: "Make a form with input fields for the cost of the dinner, tax, and the tip."-->

<form action="" method="post">
    <p>Cost of the dinner: <input type="text" name="cost" size="5"></p>
    <p>Tax: <input type="text" name="tax" size="5"></p>
    <p>Tip: <input type="text" name="tip" size="5"></p>
    <input type="submit" name="submit" value="Calculate!">
</form>
</body>
</html>