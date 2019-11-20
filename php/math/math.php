<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Chapter 04 Assignment</title>
</head>
<body>
	<?php
		// Student name: Jeremiah Purba
		// Assignment: Chapter 4 
		// Script: Chapter 4 Script
		
		$w = 5;
		$x = 8.95;
		$y = 19.36;
		$z = 7.75;		
		echo "w = " . $w . "<br />";
		echo "x = " . $x . "<br />";
		echo "y = " . $y . "<br />";
		echo "z = " . $z . "<br /><br />";
		
		echo "w * x = ". number_format($w * $x,1) . "<br />";	
		echo "z + y = ". number_format($z + $y,1) . "<br />";
		echo "z - w = ". number_format($z - $w,1) . "<br />";
		echo "y / x = ". number_format($y / $x,1) . "<br /><br />";
		
		$a = $w * $x;
		echo "a = w * x = ". number_format($a,1) . "<br />";		
		$b = $z + $y;
		echo "b = z + y = ". number_format($b,1) . "<br />";
		$c = $z - $w;
		echo "c = z - w = ". number_format($c,1) . "<br />";
		$d = $y / $x;
		echo "d = y / x = ". number_format($d,1) . "<br /><br />";
		
		echo "++a = " . number_format(++$a,1) . "<br />";
		echo "++b = " . number_format(++$b,1) . "<br />";
		echo "--c = " . number_format(--$c,1) . "<br />";
		echo "--d = " . number_format(--$d,1) . "<br /><br />";
		
		$random = mt_rand($d, $a);
		echo "My Random Number is: ". $random . "<br />";
	?>
</body>
</html>