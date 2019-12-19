<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>Directory Contents</title>
</head>

<body>

<?php 
    /*Script 11.5 - list_dir.php
    Jeremiah Purba
    This script lists the directories and files in a directory.*/

    //Set the time zone:
    date_default_timezone_set('America/Los_Angeles');

    //Set the directory name and scan it:
    $search_dir = '..'; //Set the starting directory to search. '.' is a special reference it means "the current directory".
    $contents = scandir($search_dir);//scandir() returns an array of every item or file found within the given directory and return its results into $contents 
    
    print_r($contents);
    //print('<br>');
    //print_r($contents[4]);
    //print('<br>');
    //print_r($contents[7]);
    //print('<br>');
    //print_r($contents[8]);

    //echo getcwd();
    print('<br>');
    $perms=fileperms('../uploads');
    print('<br>');
    echo $perms;
    print('<br>');
    chmod("../users",0777);
    $perms1=fileperms('../users');
    print('<br>');
    echo $perms1;
    
    //List the directories first.
    //Print a caption and start a list:
    print '<h2>Directories</h2>
        <ul>';
    foreach ($contents as $item) { //Iterate through the array and for each item...
        //If the item is a directory AND it doesn't start with a . (which means the cuurent directory).
        //The '/' is a directory separator. The substr removes the . .. infront of the paths
	    if ( (is_dir($search_dir . '/' . $item)) AND (substr($item, 0, 1) != '.')) {
		print "<li>$item</li>\n"; //Print it
        }
    }
    print '</ul>'; // Close the list.

    
    //Create a table header:
    print '<hr><h2>Files</h2>
    <table border="1" cellpadding="2" cellspacing="2" align="left">
    <tr>
        <th>Name</th>
        <th>Size</th>
        <th>Last Modified</th>
    </tr>';

    //List the files:
    foreach ($contents as $item) {
        if ( (is_file($search_dir . '/' . $item)) AND (substr($item, 0, 1) != '.') ) {

            //Get the file size:
            $fs = filesize($search_dir . '/' . $item);

            //Get the file's modification date:
            $lm = date('F j, Y', filemtime($search_dir . '/' . $item));

            //Print the information. Must be in double quotation marks or this will not output the file name information.
            print "<tr>
                <td>$item</td>
                <td>$fs bytes</td>
                <td>$lm</td>
            </tr>\n";
        }//Close the IF
    }//Close the foreach loop.

    print '</table>'; //Close the HTML table.

?>

</body>
</html>