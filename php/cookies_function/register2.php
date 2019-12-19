<?php
    //set default value of variables for initial page load
    if(!isset($email)) {$email ='';}
    if(!isset($password)) {$password ='';}
    if(!isset($confirm)) {$confirm ='';}
    if(!isset($year)) {$year ='';}
    if(!isset($month)) {$month ='';}
?>
<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Registration Form</title>
	<link rel="stylesheet" type="text/css" href="css/styles.css">	
</head>
<body>

<?php
    error_reporting(E_ALL);
    ini_set('display_errors',1);    

    if (isset($_POST['submit']) && $_POST['submit'] == 'Register'){    
        
            $email = $_POST['email'];
            if(filter_var($email, FILTER_VALIDATE_EMAIL)){
                echo("$email is a valid email address");
            }
            else{
                echo("$email is not a valid email address");
            }
            if (isset($_POST['password'])){
                $password = $_POST['password'];
            }
            if (isset($_POST['confirm'])){
                $confirm = $_POST['confirm'];
            }
            if (isset($_POST['year'])){
                $year = $_POST['year'];
            }
            if (isset($_POST['month'])){
                $month = $_POST['month'];
            }
        }
    
?>

<!-- Script 6.1 - register.html -->
<div>

<fieldset>
	<legend>Please complete this form to register:</legend>
	
    <form action="register2.php" method="post">
       
        <p>Email Address: <input type="email" name="email" size="30" value="<?php echo $email;?>"></p> 

        <p>Password: <input type="password" name="password" value="<?php echo $password;?>" size="20"></p>

        <p>Confirm Password: <input type="password" name="password" value="<?php echo $password;?>" size="20"></p>

        <p>Year You Were Born: <input type="text" name="year" value="YYYY" size="4"></p>
        
		<p>Date of Birth:
		    <select name="month">
				<option value="">Month</option>
				<option value="1">January</option>
				<option value="2">February</option>
				<option value="3">March</option>
				<option value="4">April</option>
				<option value="5">May</option>
				<option value="6">June</option>
				<option value="7">July</option>
				<option value="8">August</option>
				<option value="9">September</option>
				<option value="10">October</option>
				<option value="11">November</option>
				<option value="12">December</option>
			</select>
			
			<select name="day">
				<option value="">Day</option>
				<?php // Print out 31 days:
					for ($i = 1; $i <= 31; $i++) {
					print "<option value=\"$i\">$i</option>\n";
				    }
				?>
			</select>
			
			<select name="year">
				<option value="">Year</option>
				<?php
					$current_year = date('Y');
					for  ($j = $current_year; $j >= ($current_year -100); $j--) {
					print "<option value=\"$j\">$j</option>\n";
				    }
				?>
			</select>
        </p>
			
        <p>Favorite Color:
            <select name="color">
                <option value="">Pick One</option>
                <option value="red">Red</option>
                <option value="yellow">Yellow</option>
                <option value="green">Green</option>
                <option value="blue">Blue</option>
            </select>
        </p>

        <label>
            <p><input type="checkbox" name="terms" value="Yes"> I agree to the terms (whatever they may be).
            </p>
        </label>

        <input type="submit" name="submit" value="Register">
	
    </form>
</fieldset>

</div>
</body>
</html>