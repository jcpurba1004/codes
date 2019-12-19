<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Login</title>
</head>
<body>
<h1>Login</h1>
<?php 
    /* Script 11.8 - login.php
    Jeremiah Purba*/
    /* This script logs a user in by check the stored values in text file. */

// Identify the file to use:
$file =  '../users/users.txt';

// The conditional tests if the form  has been submitted
if ($_SERVER['REQUEST_METHOD'] == 'POST') { // Handle the form.
    
    //The $loggedin variable is used to indicate whetherthe user entered the correct
    // username/password combination.
	$loggedin = FALSE; // Not currently logged in.
	
	// Enable auto_detect_line_settings:
	ini_set('auto_detect_line_endings', 1);

    /*The $fp variable is short for file pointer. To write to a file, you must create a file pointer when opening it. The file pointer returned by the fopen() function will be used by PHP to refer to the open file. You don't have to worry about the value that is being stored in there. The most important consideration when opening the file is what mode you use. Depending on what you intend to do with.
    the file, the mode dictates how to open it. r only allows you to read from a file. Each mode
    can also be appended with a b flag, which forces files to be opened in binary mode.
    This is a safer option for files that might be read on multiple operating systems. fopen() is short for file open. You need to pass it two parameters.
    The first argument is the file name and the second argument is the mode -- meaning the file should be 
    opened for reading in a binary safe mode.*/   
	$fp = fopen($file, 'rb');
		
	// Loop through the file:
	while ( $line = fgetcsv($fp, 200, "\t") ) {

        // Check the file data against the submitted data. Need to have sha1() for the comparison of the password. Use the trim function to get rid of any space before or after the password to make sure the person didn't inadvertently add any extra spaces when typing.
        if ( ($line[0] == $_POST['username']) AND ($line[1] == sha1(trim($_POST['password']))) ) {
		
            print_r($line);
			$loggedin = TRUE; // Correct username/password combination.

			// Stop looping through the file:
			break;

		} // End of IF.
		
	} // End of WHILE.

	fclose($fp); // Close the file.

	// Print a message:
	if ($loggedin) {
		print '<p>You are now logged in.</p>';
	} else {
		print '<p style="color: red;">The username and password you entered do not match those on file.</p>';	
	}
		
} else { // Display the form.

// Leave PHP and display the form:
?>

<form action="login.php" method="post">
	<p>Username: <input type="text" name="username" size="20"></p>
	<p>Password: <input type="password" name="password" size="20"></p>
	<input type="submit" name="submit" value="Login">
</form>

<?php } // End of submission IF. ?>

</body>
</html>
