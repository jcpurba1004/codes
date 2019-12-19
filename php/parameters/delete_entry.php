<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Delete a Blog Entry</title>
</head>
<body>
<h1>Delete an Entry</h1> 
<?php // Script 12.7 - delete_entry.php
/* This script deletes a blog entry. */
    
// Connect and select:
//$dbc = mysqli_connect('localhost', 'username', 'password', 'myblog');
include('../pdo_connect.php');
    
if (isset($_GET['id']) && is_numeric($_GET['id']) ) { // Display the entry in a form:
    
    // Define the query:
    //$query = "SELECT title, entry FROM entries WHERE id={$_GET['id']}";
    $query = $dbh->query("SELECT title, entry FROM entries WHERE id={$_GET['id']}");
    if ($row = $query->fetch(PDO::FETCH_ASSOC)) { // Run the query.
        
        
        // Make the form:
        print '<form action="delete_entry.php" method="post">
        <p>Are you sure you want to delete this entry?</p>
        <p><h3>' . $row['title'] . '</h3>' .
        $row['entry'] . '<br>
        <input type="hidden" name="id" value="' . $_GET['id'] . '">
        <input type="submit" name="submit" value="Delete this Entry!"></p>
        </form>';
        
    } else { // Couldn't get the information.
        print '<p style="color: red;">WEBD166: Delete Failed</p>'; 
    }
    
} elseif (isset($_POST['id']) && is_numeric($_POST['id'])) { // Handle the form.
    
    // Define the query:
    //$query = "DELETE FROM entries WHERE id={$_POST['id']} LIMIT 1";
    $query = $dbh->query("DELETE FROM entries WHERE id={$_POST['id']} LIMIT 1");
    
    //Report on the result:
    if ($query->execute()) {
        print '<p>The blog entry has been deleted.</p>';
    } else {
        print '<p style="color: red;">WEBD166: Delete Failed</p>'; 
    }
    
} else { // No ID received.
    print '<p stylThis page has been accessed in error.</p>';
} // End of main IF.
    
//mysqli close($dbc); // Close the connection.
$dbh = NULL;
?>
</body>
</html>