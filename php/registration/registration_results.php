<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Registration</title>
	<link rel="stylesheet" type="text/css" href="css/styles.css">
	<style type="text/css" media="screen">
		.error { color: red; }
	</style>
</head>
<body>
    <h1>Registration Results</h1>
    <?php

        //  Script 6.3 - handlereg.php #2
        /*  This script receives seven values from register.html:
            email, password, confirm, year, term, color, submit */

        /*	A "flag" variable stores a simple value that indicates a status.
        	The variable is initialized with a Boolean value of TRUE, meaning that the assumption is that the form was completed properly. Page 126 */ 
            $okay       = true;
            $email      = trim($_POST['email']);
            $password   = trim($_POST['password']);
            $year       = $_POST['year'];
            $confirm    = trim($_POST['confirm']);
            $color      = $_POST['color'];            
        
            //Validate the email address
            if (empty($email)) {
                print '<p class="error">Please enter your email address.</p>';
                $okay = false;
            }

            //Validate the password
            if (empty($password)) {
                print '<p class="error">Please enter your password.</p>';
                $okay = false;
            }

            if ($password!= $confirm ) {
                print '<p class="error">Your confirmed password does not match the original password.</p>';
                $okay = false;
            }

            //Validate the color using a simplified switch statement:
            switch ($color) {
                case 'red':
                case 'yellow':
                case 'blue';
                    $color_type = 'primary';
                    break;
                case 'green':
                    $color_type = 'secondary';
                    break;
                default: 
                    print '<p class="error">Please select your favorite color.</p>';
                    $okay = false;
                    break;
            }// end of switch statement

            // Check TERMS have been agreed
            // A checkbox doesn't go into the $_POST array if it is not selected. Cannot make a shorthand variable.
            if ( !isset($_POST['terms']) ) {
                print '<p class="error">You must accept the terms.</p>';
                $okay = false;
            }            
    
            //Validate the birth year:
            if ( is_numeric($year) AND strlen($year) == 4 ) {
                //Check that they were born using a dynamic date
                //if ( $year <= date('Y')) {
                $age = date('Y') - $year;
                //Calculate age this year.
                //} else {
                //    print '<p class="error">Either you entered your birth year wrong or you come form the future!</p>';
                //    $okay = FALSE;
                //} // End of conditional
            } else {
                print '<p class="error">Please select the year you were born form the dropdown menu.</p>';
                    $okay = FALSE;
            }

            //Check that they weren't born before the current year:
            if ( $year >= date('Y') ) {
                print '<p class="error">Please select the year you were born form the dropdown menu. </p>';
                $okay = FALSE;
            }
            // If there were no errors, print a success message:
            if ($okay) {
                print '<p>You have been successfully registered. </p>';
        
                print '<p>You will turn ' . $age . ' this year.</p>';
                if ($color_type == 'primary'){
                    print '<p>Your color is ' . $color . ' is a primary color. </p>';
                } else {
                    print '<p>Your color is ' . $color . ' is a secondary color.</p>'; 
                }
            }            
    ?>
    
<p><a href="register2.php">Back to Form</a></p>
</body>
</html>