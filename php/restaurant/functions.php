<?php 
// Jeremiah Christian Purba
// 11-3-2019
// Chapter 10 Assignment

// This script will incorporate all of my custom defined functionfor my register2.php file
// The file will replace the menu.php file for this lesson.

// This function makes three drop down menus that we are going to use in our register.php file
function make_date_menus() {
    $months = [
            1 =>'January',
                'February',
                'March',
                'April',
                'May',
                'June',
                'July',
                'August',
                'September',
                'October',
                'November',
                'December'
                ];

    // Make the month pull-down menu:
    print '<select name="month">';
        foreach ($months as $key => $value) {
            print "\n<option value=\"$key\">$value</option>";
        }
    print '</select>';
         
    // Make the day pull-down menu:    
    // Print out 31 days:   
    
    print '<select name="day">';
    for ($i = 1; $i <= 31; $i++) {
        echo "<option value=\"$i\"";
        if (isset($_POST['day']) && $_POST['day'] == $i) {
  		    echo 'selected="selected"';
      	    } 
  	    echo ">$i</option>\n";
    }
    print '</select>';

    //Make the year pull-down menu:
    print '<select name="year">';
    $current_year = date('Y');
    for ($j = $current_year; $j >= ($current_year -100); $j--) {
        echo "<option value=\"$j\">$j</option>\n";
    }
    print '</select>';
} //End of make_date_menus() function