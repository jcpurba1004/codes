<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>View My Blog</title>
</head>
<body>
<h1>View My Blog</h1>  
<?php // Script 12.6 - view_entries.php
/* This script retrieves blog entries from the database. */
    
// Connect and select:
//$dbc = mysqli_connect('localhost', 'username', 'password', 'myblog');
include('../pdo_connect.php');
    
// Define the query:
//$query = 'SELECT * FROM entries ORDER BY date_entered DESC';
$query = $dbh->query('SELECT * FROM entries ORDER BY date_entered DESC');

//$sql = "SELECT * FROM entries ORDER BY date_entered DESC"; // From phpMyAdmin 

    
// Retrieve and print every record:
while ($row = $query->fetch(PDO::FETCH_ASSOC)) {
    print "<p><h3>{$row['title']}</h3>
    {$row['entry']}<br>
    <a href=\"edit_entry.php?id={$row['id']}\">Edit</a>
    <a href=\"delete_entry.php?id={$row['id']}\">Delete</a>
    </p><hr>\n";
}
//print_r($dbh->errorInfo());    
  
//mysqli_close($dbc); // Close the connection.
$dbh = NULL;
    
?>
</body>
</html>