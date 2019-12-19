<html>
<body>
<?php // Script 10.4 - calculator1.php
/* This script displays and handles an HTML form.
It uses a function to calculate a total from a quantity and price. */

// Define this function which performs the calculations received from the form values quantity and price.
function calculate_total($quantity, $price) {
    
    $total = $quantity * $price; // Calculation
    $total = number_format($total, 2); // Format the total cost in two digits behind the period.
    
    return $total; // To return a value to the $total variable below in the if statement, the code must include a return statement within the the calculate_total() function, which totals the quantity and price.
    
} // End of function.

// Check to see if the form was submitted
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    
    // Validate the form data and use the function
    if ( is_numeric($_POST['quantity']) AND is_numeric($_POST['price']) ) {
        
        // Call the function and print the results:
        $total = calculate_total($_POST['quantity'], $_POST['price']);
        print "<p>Your total comes to $<span style=\"font-weight: bold;\">$total</span>.</p>";
        
    } else { // Inappropriate values entered.
        print '<p style="color: red;">Please enter a valid quantity and price!</p>';
    }
}
?>
<form action="" method="post">
    <p>Quantity: <input type="text" name="quantity" size="3"></p>
    <p>Price: <input type="text" name="price" size="5"></p>
    <input type="submit" name="submit" value="Calculate!">
</form>
</body>
</html>