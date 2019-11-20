<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Variables</title>
	<style type="text/css">
	.bold {
		font-weight: bolder;
	}
	</style>
</head>

<body>
    <?php print date("Y-m-d"); ?> <!-- Example of data function -->
    <p>The following was created by PHP: <br>
        <?php
        
            /*
             *	Filename: ch02.php
             *	Book reference: Script 2.3
             *	Created by: Jeremiah Purba 
             */

            // Use single quote as recommended:
            $name   = 'Jeremiah Purba';
            $hobby1 = 'swimming';
            $hobby2 = 'exercise at gym';
            $hobby3 = 'singing';


            // Print the name and hobbies:
            echo '<p>My name is ' . $name . '.<br> My hobbies are ' . $hobby1 . ', ' . $hobby2 . ', and ' .  $hobby3 . '.</p>';
        ?>    
    </p>
</body>

</html>