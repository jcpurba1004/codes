
<?php
	include('header.html');
//get the values, mail said response, output a response
    $wasItSent = mail("Jeremiah.Purba@yahoo.com","Subject","Contents");
    if($wasItSent){
        echo "Mail sent";
    }
?>

<p>Please Contact Me:</p>
<form action="contactme.php" method="post">
	<p>First Name: <input type="text" name="first_name" size="15" maxlength="20"></p>
	<p>Last Name: <input type="text" name="last_name" size="15" maxlength="40"></p>
	<p>Email Address: <input type="email" name="email" size="20" maxlength="60"> </p>
	<p>Comments: <textarea name="comments" rows="9" cols="30"></textarea></p>
	<p><input type="submit" name="submit" value="Contact Me"></p>
</form>	


<?php
    include('footer.html');
?>

