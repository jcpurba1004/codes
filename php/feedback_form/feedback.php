<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Feedback Form</title>	
</head>

<body>
	<p>
	<?php
		// Student name: Jeremiah Purba
		// Assignment: Chapter 3
		// Script: 3.1 and 3.5
		
		ini_set('display_errprs' ,1);
		error_reporting(E_ALL); // For debugging purpose as required.
		
		if(isset($_POST['submit']))
		{
			//var_dump($_POST);	
			if($_POST['submit'] == 'Send My Feedback')
			{			
				echo 'Name: '.$_POST['title'].$_POST['name'];
				echo '<br>';
				echo 'Email: '.$_POST['email'];
				echo '<br>';
				echo 'Response: '.$_POST['response'];
				echo '<br>';
				echo 'Comments: '.$_POST['comments'];
				echo '<br>';
			}
		}
		else
		{
			
		}
		
	?>
	</p>

	<!-- Modify Script 3.1 - feedback.php -->
	<div><p>Please complete this form to submit your feedback:</div></p>

	<form action="feedback.php" method="post">
		<p>Name: <select name="title" required>
		<option value="Mr.">Mr.</option>
		<option value="Mrs.">Mrs.</option>
		<option value="Ms.">Ms.</option>
		</select> <input type="text" name="name" size="20" required /></p>

		<p>Email Address: <input type="text" name="email" size="20" required/></p>

		<p>Response: This is...	
		<input type="radio" name="response" value="excellent" required/> excellent
		<input type="radio" name="response" value="okay" />  okay
		<input type="radio" name="response" value="boring" /> boring</p>

		<p>Comments: <textarea name="comments" rows="3" cols="30" required></textarea></p>

		<input type="submit" name="submit" value="Send My Feedback" />

	</form>
</body>
</html?