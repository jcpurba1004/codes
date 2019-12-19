<?php
    include('header.html');
?>

<main>
<h2>Contact Path of Light Yoga Studio</h2>
<p>Required fields are marked with an asterisk * </p>
<form method="post" action="https://webdevbasics.net/scripts/yoga.php">
<label for="myName">* Name: </label><input type="text" id="myName" name="myName" required="required">
<label for="myEmail">* E-mail: </label><input type="email" id="myEmail" name="myEmail" required="required">
<label for="myReferral">How did you hear about us?</label>
<input type="text" name="myReferral" id="myReferral" list="referral">
<datalist id="referral">
<option>Google</option>
<option>Bing</option>
<option>Facebook</option>
<option>Friend</option>
<option>Radio Ad</option>
</datalist>
<label for="myComments">* Comments: </label><textarea id="myComments" name="myComments" rows="2" cols="20" required="required"></textarea>
<input type="submit" value="Send Now" id="mySubmit">
</form>
</main>

<?php
    include('footer.html');
?>