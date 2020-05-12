<?php

$dsn      = "mysql:host=localhost;dbname=world";  //data source host and db name
$username = "root";
$password = "";


// Create connection
$conn = new PDO($dsn, $username, $password); // creates PDO object

// Check connection using try/catch statement

try  {
     $conn = new PDO($dsn, $username, $password);
     echo "Connection is successful<br><br>";
}

catch (PDOException $e) {
       $error_message = $e->getMessage();
       echo "An error occurred: $error_message" ;
}


// sql statement set up
$sql = "SELECT Name, CountryCode, Population FROM city LIMIT 100";
$statement = $conn->prepare($sql);

// execute (create) the result set
$statement->execute();

// row count
$rowcount = $statement->rowCount();

// just to test
echo "Row count is " . $rowcount;

?>



<!DOCTYPE html>

<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Displaying Data from the Database</title>
</head>

<style>
body {
    font-family: arial, sans-serif;
    font-size: 100%;
}   
    
 h1 {
    text-align: center;
    font-size: 1.5em;
}
    
 h2 {
    margin-bottom: 20px;
    text-align: center;
    font-size: 1.25em;
}    

.grid-container {
   display: grid;
   grid-gap: 1px; 
   background-color: #000;
   width: 300px;
}

.grid-item {
  background-color: #eee;
  padding: 10px;
  font-size: 0.8em;
}

.item1 {
  grid-column: 1 / span 2;
  grid-row: 1;
  font-weight: bold;
}


</style>

<body>
   
 <header>  
    <h1>Displaying Data from the Database using CSS Grid</h1>
    <h2>Using fetchAll() and a foreach loop</h2>
 </header>     
 
 
 <?php
     
 // check to make sure we have records returned
if ($rowcount != 0){
     
     // output data of each row as associative array in result set
     $rows = $statement->fetchAll();
  
    //  grid items
 foreach($rows as $row) {
    // opening <div>
   echo "<div class=grid-container>\n\r";       
   echo "<div class='grid-item item1'>City of " . $row["Name"]        . "</div>\n\r";
   echo "<div class='grid-item'>Country code: " . $row["CountryCode"] . "</div>\n\r";
   echo "<div class='grid-item'>Population: "    . $row["Population"]  . "</div>\n\r";
   // ending div
   echo "</div><br><br>\n\r\n\r";     
  
 } // end foreach
    

    
}  // end if 
     
else {
     echo "<p>Sorry, there were no results</p>";
} // end else


// close the connection
$conn = null;        

?>



</body>
</html>