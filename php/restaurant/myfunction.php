<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>My Function</title>
</head>

<body>
<h1>My Function</h1>
<?php
    function addem( $a, $b, $c=0) {
        return $a + $b + $c;
    }
    
    echo adden(1,2);
    echo adden("banana 7","2 cherries","16 apples");
?>
</body>
</html>