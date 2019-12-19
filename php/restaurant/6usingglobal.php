<html>
<body>
<?php
	//accessing a variable with the global statement
	$life=42;
	function meaningOfLife()
	{
		global $life;
		print "The meaning of Life is ".$life."<br>";
	}
	meaningOfLife();
 ?>
</body>
</html>
