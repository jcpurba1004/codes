<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>View A Quotation</title>
</head>
<body>
<h1>Random Quotation</h1>
<?php

// Script 11.3 - view_quote.php
/* This script displays and handles an HTML form. This script reads in a file and prints a random line from it. */
    
// Read the file's contents and store them in an array.
// Each element of $data is a string, which is the submitted quotation.
$data = file('../quotes.txt');
    
// Count the number of items in the array:
$n = count($data);
    
// Pick a random item based on the number of elements in our quotes.txt file
$rand = rand(0, ($n - 1));
    
// Print the quotation:
print '<p>' . trim($data[$rand]) . '</p>';
   
?>
</body>
</html>