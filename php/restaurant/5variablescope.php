<html>
<body>
<?php
	//A Variable Declared Within a Function Is Unavailable Outside the Function
	function test()
	{
		$testvariable = "this is a test variable";
	 }
	print 'test variable: '.$testvariable.'<br>';
 ?>
</body>
</html>
