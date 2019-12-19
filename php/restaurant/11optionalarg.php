<html>
<body>
<?php
	function fontWrap( $txt, $size=3 )
	{
		print '<font size="'.$size.'">'.$txt.'</font>';
	}
	fontWrap("A heading<br>",5);
	fontWrap("some body text<br>","","");  
	fontWrap("some more body text<br>");
	fontWrap("yet more body text<br>");
?>
</body>
</html>