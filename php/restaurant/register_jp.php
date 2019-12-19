<?php include('functions.php'); 
   
    //set default value of variables for initial page load
    if(!isset($email)) {$email ='';}
    if(!isset($password)) {$password ='';}
    if(!isset($confirm)) {$confirm ='';}
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
            if (isset($_POST['password'])){
                $password = $_POST['password'];
            }
            if (isset($_POST['confirm'])){
                $confirm = $_POST['confirm'];
            }                      
        }
    
?>

<!-- Script 6.1 - register.html -->
<div>

<fieldset>
	<legend>Please complete this form to register:</legend>
	
    <form action="register.php" method="post">
       
        <p>Email Address: <input type="email" name="email" size="30" value="<?php echo $email;?>"></p> 

        <p>Password: <input type="password" name="password" value="<?php echo $password;?>" size="20"></p>

        <p>Confirm Password: <input type="password" name="password" value="<?php echo $password;?>" size="20"></p>

        <p>Year You Were Born: <input type="text" name="year" value="YYYY" size="4"></p>
        
        <p>Date of Birth: <?php print make_date_menus(); ?> </p>
			
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