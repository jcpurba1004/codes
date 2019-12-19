<html>
  <head>
    <title>Variable Scope</title>
  </head>
  <body>
  <?php
      
	  $var = 1;
	  function test1() {
		$var = 2;
		echo "inside test 1: " . $var . "<br />";
	  }
	  
	  test1();
	  echo $var . "<br />";
		 
	  echo "<hr />";
		  
	  $var = 1;
	  function test2() {
		global $var;
		$var = 2;
		echo "inside test 2: " . $var . "<br />";
	  }
	  
	  test2(); 
	  echo $var . "<br />";
		
	  echo "<hr />";
		  
	  $var = 1;
	  function test3() {
		static $var = 2;
		echo "inside test 3: " . $var . "<br />";
		$var++;
	  }
	  test3();
	  test3();
	  
	  test3();
	  echo $var . "<br />";
  ?>
  </body>
</html>