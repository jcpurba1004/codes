<html>
<body>
<?php
	$life = 42;
	//variables defined outside of functions are inaccessible from within the function
	function meaningOfLife()
	{
		global $life;
		print "The meaning of Life is ".$life."<br>";
	}
	meaningOfLife();
?>
</body>
</html>
