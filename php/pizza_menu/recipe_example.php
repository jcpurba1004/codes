<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Pizza Toppings</title>
	<style>
		div {
			width: 60%;
			margin: 1% 10% 0 0;
		}
		label.title {
			color: #24478F; /* medium dark blue shade; */
			font-weight: bold;
		}
		legend {
			font-size: 1.48em;
		}
		p.submit {
			float: left;
			margin-right: 5%;
		}
</style>
</head>
<body>
<?php 
/* This script handle the toppings form. */
/* Name: Jeremiah Purba */
/* 07ch Assignment */
/* Date: 10-13-2019 */
    ini_set('display_errprs' ,1);
	error_reporting(E_ALL); // For debugging purpose as required.
	
    // to handle error on the first time code run before submit anything
	if(isset($_POST['submit'])) 
	{
		//print 'click submit';
		if($_POST['submit'] == 'Order pizza')
		{    
			//in the beginning, no selection made 
			$okay = TRUE;//Chapter 6 set a flag variable
            if(isset($_POST['topping']))
            {             
                // Add a conditional check to make sure that topping value was entered. Chapter 6

                //NOTE: This is a 2-part check. Check: 1) if array has been set 2) if it an array
                if (!isset($_POST['topping']) && !is_array($_POST['topping'])) {
                    print '<p class="error">Please select at least one topping for your order';
                    $okay = FALSE;
                }
                else  // This part when user check any topping
                {
                    // This part has $okay = TRUE;
                    $countTopping=count($_POST['topping']);
                    // Print each topping
                    if (isset($_POST['topping']) AND is_array($_POST['topping'])) {
                        print '<p>You have selected the following <b>' . $countTopping . '</b> topping(s) <br>';

                        foreach ($_POST['topping'] as $topping) {
                            print "$topping<br>\n"; 
                        }

                    } else {
                        print 'Please select at least one topping for this pizza';
                    }
                } //for->if (!isset($_POST['topping']) && is_array($_POST['topping']))
            }
            else
            {
                print '<p class="error">Please select at least one topping for your order';
            }
		} // for -> if($_POST['submit'] == 'Order pizza')
	} // for -> if(isset($_POST['submit']))
	else
	{
	    // print nothing at the  first time	
	}
	
?>
<div>
<legend> Use This Form to add toppings</legend>
<br>
<fieldset>
<form action="toppings.php" method="post">

    
    <p>Pizza Toppings: 
    <label class="title">    
        <input type="checkbox" name="topping[]" value="Extra Tomato"onmouseover="style.color='#00B800'" onmouseout="style.color='#000'"> Extra tomato 
        <input type="checkbox" name="topping[]" value="Ham"> Ham
        <input type="checkbox" name="topping[]" value="Sausage"> Sausage
        <input type="checkbox" name="topping[]" value="Pepperoni"> Pepperoni 
        <input type="checkbox" name="topping[]" value="Black olive"> Black olive 
        </p>
    </label>

    <p class="submit"><input type="submit" name="submit" value="Order pizza" onmouseover="style.color='#00B800'" onmouseout="style.color='#000'">
    </p>
</form>
</fieldset>
</div>
</body>
</html>