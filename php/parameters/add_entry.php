<!doctype html>
<html lang="en">
<head> 
    <meta charset="utf-8">
    <title>Add a Blog Entry</title>
</head>
<body>
<h1>Add a Blog Entry</h1> 
<?php // Script 12.4 - add_entry.php
/* This script adds a blog entry to the database. */
    
if ($_SERVER['REQUEST_METHOD'] == 'POST') { // Handle the form.
    
    // Validate the form data:
    $problem = FALSE;
    if (!empty($_POST['title']) && !empty($_POST['entry'])) {
        $title = trim(strip_tags($_POST['title']));
        $entry = trim(strip_tags($_POST['entry']));
    } else {
        print '<p style="color: red;">Please submit both a title and an entry.</p>';
        $problem = TRUE;
    }
    
    if (!$problem) {
        
        // Connect and select:
        //$dbc = mysqli_connect('localhost', 'username', 'password', 'myblog');
        include('../pdo_connect.php');
        
        // Define the query:
        //$query = "INSERT INTO entries (id, title, entry, date_entered) VALUES (0, '$title', '$entry', NOW())";
        $insert = $dbh->prepare("INSERT INTO entries (title, entry, date_entered) VALUES (:title, :entry, NOW())");
        $insert->bindParam(':title', $title);
        $insert->bindParam(':entry', $entry);
        
        // Execute the query:
        if ($insert->execute()) {
            print '<p>The blog entry has been added!</p>';
        } else {
            print '<p style="color: red;">WEBD166: Insert Failed!</p>';
        }
        
        //mysqli_close($dbc); // Close the connection.
        $dbh = NULL;
        
    } // No problem!
    
} // End of form submission IF.
    
// Display the form:
?>
<form action="add_entry.php" method="post">
    <p>Entry Title: <input type="text" name="title" size="40" maxsize="100"></p>
    <p>Entry Text: <textarea name="entry" cold="40" rows="5"></textarea></p>
    <input type="submit" name="submit" value="Post This Entry!">
</form>
</body>
</html>