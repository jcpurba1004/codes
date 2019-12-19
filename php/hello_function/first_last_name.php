<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <link rel="stylesheet" type="text/css" href="css/styles.css">
    <title>Forum Posting</title>
</head>
<body>
<!-- Script 5.1 - posting.php
    Jeremiah Purba
    This file is going to post the data to handle_post.php using the post method.
-->

<div>
<!--<fieldset> used to group related elements in a form.
The <fieldset> tag draws a box around the related element.
The <legend> tag defines a caption for the <fieldset> element.
The number type if used for input fields that should contain a numeric value.
-->
<fieldset>
  <legend>Please complete this form to submit your posting: </legend>
    <form action="handle_post.php" method="post">
        <p>First Name:
            <input type="text" name="first_name" placeholder="First name" autofocus required size="20" >
        </p>
        <p>Last Name:
            <input type="text" name="last_name" placeholder="Last name" required>
        </p>
        <p>Email Address:
          <input type="email" name="email" size="30" placeholder="Email  Address" required>
        </p>
        <p>Posting:
            <textarea name="posting" rows="9" cols="30" required></textarea>
        </p>
        <input type="submit" name="submit" value="Send My Posting">
    </form>
</fieldset>
</div>   
</body>
</html>