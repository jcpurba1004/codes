<?php
	// Managing the code -- Functions: Defining Mandatory and Optional Parameters
	
	// parameters are defined inside parentheses after the name of the function_exists
	function addressTable($name='Joe', $addressLine1='123 Pier Street', $addressLine2='San Diego', $addressLine3='&nbsp;')
	{
				$table = '<table border=1>' . PHP_EOL;
				$table .= sprintf('<tr><th>Name</th><td>%s</td></tr>', $name);
				$table .= sprintf('<tr><th rowspan=3>Address</th><td>%s</td></tr>', $addressLine1);
				$table .= sprintf('<tr><td>%s</td></tr>', $addressLine2);
				$table .= sprintf('<tr><td>%s</td></tr>', $addressLine3);
				$table .= '</table>' . PHP_EOL;
				return $table;
	}

// works OK
echo addressTable('Doug Bierer', '123 Main Street', 'Flat A', 'New York, NY 10001 USA');

// fails
echo addressTable('Shopsy\'s Deli', '96 Richmond West', 'Toronto, M5H 2A3, Canada');

// fails
echo addressTable('Joe\'s Crab Shack', '123 Pier Road');

// fails
echo addressTable('Joe');