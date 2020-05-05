<?php

// variable to hold message
$msg = ''; // Initialize the variable to empty string

// if form is submitted process the data
if ($_SERVER["REQUEST_METHOD"] == "POST") {

	 //print_r($_POST); // For debugging
	 // Declare variables for form input data
	 $name     = $_POST['name'];
	 $email    = $_POST['email'];
	 $phone    = $_POST['phone'];
	 $heard    = $_POST['heard'];
	 $comments = $_POST['comments'];
	
	 // Concatenate the message with form input data
	 // Add new line "\n" and carriage return "\r" at the end each var
	 $msg = "You entered the following information:<br>\n\r";
	 $msg.= "\t\t\t Name : $name<br>\n\r";
	 $msg.= "\t\t\t Email : $email<br>\n\r";
	 $msg.= "\t\t\t Phone : $phone<br>\n\r";
	 $msg.= "\t\t\t How you heard about us : $heard<br>\n\r";
	 $msg.= "\t\t\t Comments : $comments<br>\n\r";
		
	 //echo $msg; // For debugging
	
} // end if request method

?>

<!DOCTYPE html>
<!-- Jeremiah Purba -->
<!-- 5-5-2020 -->
<html lang="en">

<head>
    <meta charset="utf-8">
    <title>Account Sign Up</title>
    <link rel="stylesheet" href="form.css">
    <!-- Style for posting user input form data -->
    <style>
		.red {
			color: red; /* Red color for user input form data */
		}
	</style>
</head>

<body>
    
    <main>
       <h1>Account Sign Up</h1>
            <form action="<?php echo htmlspecialchars($_SERVER[ "PHP_SELF" ]);?>" method="post">
       
            <!-- Placeholder to show user input data form -->
            <p class="red"><?php echo $msg ?>
            </p>
            <br>

            <fieldset>
                <legend>Account Information</legend>

                <label for="name">Name:</label>
                <input type="text" name="name" id="name" class="textbox" maxlength="25" required>
                <br>

                <label for="email">E-Mail:</label>
                <input type="email" name="email" id="email" class="textbox" maxlength="25" required>
                <br>

                <label for="phone">Phone Number:</label>
                <input type="tel" pattern="[0-9]{3}-[0-9]{3}-[0-9]{4}" placeholder="012-345-6789" name="phone" id="phone" class="textbox" required>
            </fieldset>

            <fieldset>
                <legend>Other</legend>

                <p>How did you hear about us?</p>
                <label for="search">Search engine</label>
                <input type="radio" name="heard" id="search" value="Search Engine" required>
                <br>

                <label for="friend">Word of mouth</label>
                <input type="radio" name="heard" value="Friend" id="friend" required>
                <br>

                <label for="other">Other</label>
                <input type=radio name="heard" value="Other" id="other" required>
                <br>

                <p><label for="comments">Comments:</label></p>
                <textarea name="comments" id="comments" rows="4" cols="50" required></textarea>
            </fieldset>

            <input type="submit" value="Submit">
            <br>

            <input type="reset" value="Reset">
            <br>

        </form>
    </main>
</body>

</html>
