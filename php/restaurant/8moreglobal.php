<?php
	$kevin = 0;
	function addAnotherThing($txt)
	{
		global $kevin;
		$kevin++;
		echo $kevin.$txt."<br/>";
	}
	addAnotherThing("Cars");
	echo "We build cars<br/>";
	addAnotherThing("Motorcycles");
	echo "We build motorcycles<br/>";
?>