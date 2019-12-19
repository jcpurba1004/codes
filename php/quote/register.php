<!doctype html>
<head>
	<meta charset="utf-8">
	<title>Register</title>
	<link rel="stylesheet" type="text/css" href="css/styles.css">
	<link rel="stylesheet" type="text/css" href="css/concise.min.css">
	<style type="text/css" media="screen">
		.error { color: red; }
	</style>
</head>

<html>
<body>
<h1>Register</h1>
<?php 
    /* Script 11.6 - register.php
    Jeremiah Purba
    This lesson is on writing to a file from a form. This script registers a user by storing their 
    information in a text file and creating a directory for them in a file on the hard drive. */

// Identify the directory and file to use:
$dir = '../users/';
$file = $dir . 'users.txt';

if ($_SERVER['REQUEST_METHOD'] == 'POST') { // Handle the form.

	$problem = FALSE; // No problems so far.

	// Check for each value...
	if (empty($_POST['username'])) {
		$problem = TRUE;
		print '<p class="error">Please enter a username!</p>';
	}	

	if (empty($_POST['password1'])) {
		$problem = TRUE;
		print '<p class="error">Please enter a password!</p>';
	}

	if ($_POST['password1'] != $_POST['password2']) {
		$problem = TRUE;
		print '<p class="error">Your password did not match your confirmed password!</p>';
	} 
	
	if (!$problem) { // If there weren't any problems...
	
		if (is_writable($file)) { // Open the file.
			
			// Create the data to be written:
			$subdir = time() . rand(0, 4596);
			$data = $_POST['username'] . "\t" . sha1(trim($_POST['password1'])) . "\t" . $subdir . PHP_EOL;

/*FILE_APPEND -- If file filename already exists, append the data to the file instead of overwriting it.
LOCK_EX - Temporarily lockthe file while PHP is writing to it.
To use both the LOCK_EX and FILE_APPEND constants, separate them with the binary OR operator. (|):*/
			file_put_contents($file, $data, FILE_APPEND | LOCK_EX);
			
// Create the directory: The directory name is the name of the directory to be created.
//$dir = '../users/';
//$subdir = time() . rand(0, 4596);
			mkdir ($dir . $subdir);

			// Print a message:
			print '<p>You are now registered!</p>';
		
		} else { // Couldn't write to the file.
			print '<p class="error">You could not be registered due to a system error.</p>';
		}
		
	} else { // Forgot a field.
		print '<p class="error">Please go back and try again!</p>';	
	}

} else { // Display the form.

// Leave PHP and display the form:
?>

<form action="register.php" method="post" class="form--inline">
	<p>Username: <input type="text" name="username" size="20"></p>
	<p>Password: <input type="password" name="password1" size="20"></p>
	<p>Confirm Password: <input type="password" name="password2" size="20"></p>
	<input type="submit" name="submit" value="Register">
</form>

<?php } // End of submission IF. ?>

</body>
</html>