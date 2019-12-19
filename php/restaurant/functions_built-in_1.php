<?php
	// Managing the code -- Functions: Using Built-in Functions
	// part of the core
	// use get_defined_functions() and function_exists() to check
	
	function = 'strstrstr';
		 echo 'hello';
	}
	
	$function = 'strstrstr';
	if (function_exists($function)) {
		echo $function . ' exists!';
	} else {
		echo $function . ' DOES NOT exist!';
	}
	
	echo '<br />', '<pre>', var_dump(get_defined_functions()), '</pre>';
	
	// use phpinfo() to see info on extensions available on your server
?>	