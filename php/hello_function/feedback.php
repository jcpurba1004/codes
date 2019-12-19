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
		// Assignment: Chapter 5
		// Script 5.3 - handle_post.php #2
		
		ini_set('display_errprs' ,1);
		error_reporting(E_ALL); // For debugging purpose as required.
		
		if(isset($_POST['submit']))
		{
			//var_dump($_POST);	
			if($_POST['submit'] == 'Send My Feedback')
			{	
				
				//#3 from the requirement
				$vowels=array('a','e','i','o','u');
				
				//#4 from the requirement
				$lengthUntrimmed = strlen($_POST['name']);
				
				$trimmedString   = trim($_POST['name']);
				$lengthTrimmed = strlen($trimmedString);
				
				echo '<strong>LengthUntrimmed = </strong> ' . $lengthUntrimmed . '<br><strong>LengthTrimmed = </strong>' . $lengthTrimmed;
				echo '<br>';
				echo '<strong>Before trimm --> </strong> |' . $_POST['name'] . '|<--' ;
				echo '<br>';
				echo '<strong>After trimm  --> </strong> |' . $trimmedString . '|<--' . '<br>' . '<br>';
				echo '<strong>Name:</strong> '.$_POST['title'].$_POST['name'];
				echo '<br>';
				echo '<strong>Email:</strong> '.$_POST['email'];
				echo '<br>';
				echo '<br>';
				
				//#5 from the requirement
				echo '<strong>Original response:</strong> ' . $_POST['response'];
				echo '<br>';
				echo '<strong>Response with ucfirst:</strong> ' . ucfirst($_POST['response']) . '<br>' . '<br>';			
				
				//#6 and #7 from the requirement
				echo '<strong>Original comments:</strong> ' . $_POST['comments'] . ' , <strong>string length: </strong>' . strlen($_POST['comments']) . '<br>';				
				$html_post = htmlentities($_POST['comments']);
				$strip_post = strip_tags($_POST['comments']);
				echo '<strong>Comments with tag:</strong> ' . $html_post . ' , <strong>string length: </strong>' . strlen($_POST['comments']) . '<br>';
				echo '<strong>Comments after strip the tag:</strong> ' . $strip_post . ' , <strong>string length: </strong>' . strlen($strip_post) . '<br>' . '<br>';
				
				//#8 from the requirement
				$names = explode(" ",$_POST['name']);
				echo '<strong>explode names</strong>: <br>';
				print_r($names);
				
				//#9 and #10 from the requirement
				echo '<br><strong>names[0]:</strong> ' . ucwords($names[0]).'<br>';//first name
				echo '<strong>names[1]:</strong> ' . ucwords($names[1]).'<br>' . '<br>';//last name
				
				
				//#11 and #12 from the requirement
				$new_comment = str_replace($vowels, "X",$_POST['comments']) . '<br>';
				echo '<strong>original string</strong>: ' . $_POST['comments'] . '<br>';
				echo '<strong>string replacement</strong>: ' . $new_comment . '<br>' ;
				
				//#13 from the requirement
				$comments = substr($_POST['comments'],0,10);
				echo '<strong>original string</strong>: ' . $_POST['comments'] . '<br>';
				echo '<strong>substring</strong>: ' . $comments . '<br>';
			}
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
</html>