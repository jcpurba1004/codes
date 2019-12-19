<?php
session_start();

include('header.html');

if(isset($_POST['submit'])) 
{
    if ($_POST['submit'] == 'login'){

        $curruname = 'JeremiahPurba'; //this would be in a db encrypted!!!!!
        $currpassword = 'admin';

         if (trim($_POST['username']) == $curruname && trim($_POST['password']) == $currpassword){
             $_SESSION['authorized'] = 'yes';
             $_SESSION['username'] = $curruname;
             header ("Location: welcome.php");
         }
    }
}
else
{
    // print nothing at the  first time loading the code
}
?>
<main>
    <h3>Please login to Path of Light Yoga Studio: </h3>
</main>
<form action = "login.php" method="post">
Username: <input type = "text" name="username" ><br>
Password: <input type="password" name="password"><br>
	<input type="submit" name="submit" value="login">
</form>

<?php
    include('footer.html');
?>