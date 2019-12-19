<html>
<body>
<?php
	//This calls a function dynamically
	function sayHello()
	{
		print "hello<br>";
	}
	$function_holder = "sayHello";
	$function_holder();
?>
</body>
</html>