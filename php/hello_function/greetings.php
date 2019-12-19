<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>Greetings!</title>
</head>
<body>
<?php
/*
 *   Filename: hello.html
 *   Book reference: Script 3.8
 *   Created by: Jeremiah Purba
 */
    
//this page should receive a name value in the URL
    
//Say "Hello":
$first_name = $_GET['first_name'];
$last_name = $_GET['last_name'];
$name = $first_name . ' ' . $last_name;
//$name = urlencode($name);
$name = str_replace('+', ' ', urlencode($name));   

print "<p>Hello, <span style=\"font-weight: bold;\">$name</span>!</p>";
    
?>
</body>
</html>