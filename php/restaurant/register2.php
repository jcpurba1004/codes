<?php include('functions.php'); ?>

<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <title>Registration Form</title>
    <link rel="stylesheet" type="text/css" href="css/styles.css">    
</head>

<body>

    <!--script 6.1 - register.php
        Jeremiah Christian Purba -->

    <?php
        //Create and initialize a Boolean variable called $okay which will determine if the web form was properly completed.
        $okay = TRUE;

        //Check for form submission:
        if (isset($_POST['submit']) && $_POST['submit'] == 'Register') {

            $email = trim($_POST['email']);
            if (empty($email) ) {
                echo '<p class="error">Please enter an email</p>';
                $okay = FALSE;
            }

            $password = trim($_POST['password']);
            $confirm = trim($_POST['confirm']);
            if (!empty($password)) {
                if ($password != $confirm) {
                echo '<p class="error">Your confirmed password does not match the original password.</p>';
                $okay = FALSE;
                }
            }

            //Validate the birth year:
            $year = $_POST['year'];
            if (empty($year)) {
                echo '<p class="error">Please select the year you were born from the dropdown menu.</p>';
                $okay = FALSE;
            //Calculate age this year:
            } else {
                $age = date('Y') - $year;
            }

            //Validate the terms:
            if (!isset($_POST['terms']) OR ($_POST['terms'] != 'yes')) {
                echo '<p class="error">You must accept the terms.</p>';
                $okay = FALSE;
            }

            // Validate the color:
            $color = $_POST['color'];
            switch ($color) {
                case 'red':
                case 'yellow':
                case 'blue':
                    $color_type = 'primary';
                    break;
                case 'green':
                    $color_type = 'secondary';
                    break;
                default;
                echo'<p class="error">Please select your favorite color</p>';
                $okay = FALSE;
                break;
            }

            //If there were no errors, print a success message:
            //The newline character affects the HTML source code of the web page, not what the end user sees rendered in the browser.
            if ($okay) {
                echo "<p> You have been successfully registered (but not really).</p>\n";
                echo '<p> You will turn ' .$age. ' this year.</p>'."\n";
                echo '<p>Your favorite color ' .$color.' is a ' .$color_type.' color.</p>';
                //$_POST = array(); //clear the values from the form
                // Another way to clear the posted values
                $_POST = [];
            }
        }
    ?>

    <main>
        <form action="register2.php" method="post">

            <fieldset>
                <legend>Please complete this form to register:</legend>

                <p>Email Address: <input type="email" name="email" size="30" 
                    value="<?php if (isset($_POST['email'])) { echo $_POST['email']; } ?>"></p>

                <p>Password: <input type="password" name="password" size="20" 
                    value="<?php if (isset($_POST['password'])) { echo $_POST['password']; } ?>"></p>

                <p>Confirm Password: <input type="password" name="confirm" size="20" 
                    value="<?php if (isset($_POST['confirm'])) { echo $_POST['confirm'];} ?>"></p>

                    <p>Date of Birth: <?php print make_date_menus(); ?> </p>

                <p>Favorite Color:
                    <select name="color">
                    <option value="">Pick One</option>
                    <option value="red"<?php 
                    if (isset($_POST['color']) && $_POST['color'] == 'red' ) { 
                    echo 'selected="selected"'; } ?>>Red</option>
                    <option value="yellow"<?php 
                    if (isset($_POST['color']) && $_POST['color'] == 'yellow' ) { 
                    echo 'selected="selected"'; } ?>>Yellow</option>
                    <option value="green"<?php 
                    if (isset($_POST['color']) && $_POST['color'] == 'green' ) { 
                    echo 'selected="selected"'; } ?>>Green</option>
                    <option value="blue"<?php 
                    if (isset($_POST['color']) && $_POST['color'] == 'blue' ) { 
                    echo 'selected="selected"'; } ?>>Blue</option>
                    </select>
                </p>

                <label>
                    <p><input type="checkbox" name="terms" value="yes"<?php 
                    if (isset($_POST['terms']) && $_POST['terms'] == 'yes' ) { 
                    echo 'checked="checked"'; } ?>> I agree to the terms (whatever they may be).</p>
                </label>

                <input type="submit" name="submit" value="Register">

            </fieldset>
        </form>
    </main>
</body>
</html>