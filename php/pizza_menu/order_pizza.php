<?php

//Do me a favor and ouput the menu. Specifically, I need the products 
//displayed and a form to order each

if(isset($_POST['submit'])) 
{
	if($_POST['submit'] == 'Order Pizza'){  
		print '<p>You have selected the following topping(s): <br>';  
		foreach ($_POST as $key=>$value){
		  echo $key.' '.$value.'<br>';   
	   }    
	}
}
else
{
	// print nothing at the  first time loading the code
}
$pizzashop = array(
                array(
                    array("Supreme", 12.95, 10.95, 7.95),
                    array("Pepperoni", 10.50, 9.75, 7.50),
                    array("Sausage", 10.99,9.99,8.99),
                    array("Cheese", 9.99,7.99,6.99)),
                array(
                    array("Ham and Cheese",6.50,5.00),
                    array("Philly Steak", 7.00,6.00),
                    array("Turkey",5.99,4.99),
                    array("Tuna",5.99,4.99)),
                array(
                    array("Cheese Sticks",3.99),
                    array("1 Slice Cheese", 2.99),
                    array("6 Wings", 4.99),
                    array("12 Wings", 4.99)
                      )
    );
?>

<fieldset>
<form action="pizza.php" method="post">

<?php
foreach ($pizzashop as $pizza){
    foreach ($pizza as $category) {
        foreach ($category as $item){        
            echo $item . '<input type = "checkbox" name= "'.$item.'"><br>';    
        }
    }
}
?>
<input type="submit" name="submit" value="Order Pizza">
</form>
</fieldset>
