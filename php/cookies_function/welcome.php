<?php
ob_start();//turns on output buffering for the duration of this script
error_reporting(E_ALL);

session_start();

include('header.html');

//var_dump($_SESSION);
if ($_SESSION['authorized'] != 'yes'){
	header ("Location: login.php");
    exit;
}
echo '<br>';
echo 'Welcome, '.$_SESSION['username'].' to the Path of Light Yoga Studio';
echo '<br>';
?>



This is your account, <?php echo $_SESSION['username'];
echo ' !!!!';
echo '<br>';
echo '<br>';
?>

<a href="logout.php">Log Out</a>

<?php
    include('footer.html');
?>
