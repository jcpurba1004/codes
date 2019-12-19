<html>
<body>
<?php
	//Using the static Statement to Remember the Value of a Variable Between Function Calls
	function addAnotherThing( $txt )
	{
		static $num_of_calls = 0;
		$num_of_calls++;
		print "<h1>$num_of_calls. $txt</h1>";
	}
	addAnotherThing("Widgets");
	print("We build a fine range of widgets<p>");
	addAnotherThing("Doodads");
	print("Finest in the world<p>");
	addAnotherThing("Kris");
	print("Finest in the world<p>");
    
?>
</body>
</html>