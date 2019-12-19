<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Forum Posting</title>
</head>
<body>
<?php
    /* Script 5.3 - handle_post.php #2
    Jeremiah Purba
    This script receives five values from posting.html:
    first_name, last_name, email, posting, submit
    */

    /* Use the $_POST[] PHP array associative variable to assign the values from each
    *  HTML name attribute to PHP local variables
    */
    $first_name = $_POST['first_name'];
    $last_name  = $_POST['last_name'];
    $posting    = nl2br($_POST['posting'], false ); //New lines entered into the posting textarea are honored and displayed in the browser

    // The act of concatenation takes two variables plus a space and joins them all together to create a full name variable
    $name = $first_name . ' ' . $last_name;

    // Adjust for HTML tags:
    $html_post = htmlentities($_POST['posting']);
    $strip_post = strip_tags($_POST['posting']);    

    // Print a message:
    print "<div>Thank you, $name, for your posting:
    <p><strong>Original:</strong> $posting</p>
    <p><strong>Entity:</strong> $html_post</p>
    <p><strong>Stripped:</strong> $strip_post</p></div>";

    // Get a word count:
    $words = str_word_count($posting);

    // Get a snippet of the posting:
    //$posting = substr($posting, 0, 50);

    // Eliminate "bad words" in submitted textarea field
    $posting = str_ireplace('badword', 'XXXXX', $posting);

    // Print a message:
    print "<div>Thank you, $name, for your posting:
    <p>$posting...</p>
    <p>($words words)</p></div>";

    // The urlencode() changes the format of a string and encodes it so that it can properly be passed as part of a URL.
    $name = urlencode($name);
    $email = urlencode($_POST['email']);

    /* Start the string with single quotation marks and use the concatenation operator. This method makes the variables more obvious and improves readability. See TIP #3 on page 111. */
    print '<p>Click <a href="thanks.php?name=' . $name. '&email=' . $email . '">here</a> to continue.</p>';
?>


<pre>
    <?php 
        print_r($_POST); 
    ?>
</pre>

</body>
</html>