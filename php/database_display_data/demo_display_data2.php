<?php

$dsn      = "mysql:host=localhost;dbname=college_purba";  //data source host and db name
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
//$sql = "SELECT Name, CountryCode, Population FROM city LIMIT 100";
$sql = "SELECT lname, fname, address, postal_code, phone, email FROM members WHERE city LIKE 'San Diego' ORDER BY postal_code, lname";
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

    
  td {
    border: 1px solid #000; 
    padding: 10px; 
    vertical-align: top;
    width: 33%;  
}

th {
    background: #000;
    color: #fff;
    height: 20px;
    padding: 10px;
    font-size: 1.2em;
    width: 33%;
}


table {
    border-collapse: collapse;
    border: 2px solid #000;
    width: 600px;
    margin-left: auto;
    margin-right: auto;
}

tbody tr:nth-of-type(odd) {
    background: #eee;
}
</style>

<body>
   
 <header>  
    <h1>Displaying Data from the Database</h1>
    <h2>Using fetch() and a while loop</h2>
 </header>     
 
 
 <?php
     
 // check to make sure we have records returned
if ($rowcount != 0){
    
    // header row of table
  echo "<table>\n\r";  
  echo "<tr>\n\r"; 
  echo "<th>lname</th>\n\r"; 
  echo "<th>fname</th>\n\r"; 
  echo "<th>address</th>\n\r";
  echo "<th>postal_code</th>\n\r";
  echo "<th>phone</th>\n\r";
  echo "<th>email</th>\n\r";
  echo "</tr>\n\r\n\r"; 
     
     // output data of each row as associative array in result set   
     $rows = $statement->fetchAll();
    
     // body of table
 foreach($rows as $row)  {
   echo "<tr>\n\r";
   echo "<td>" . $row["lname"] . "</td>\n\r";
   echo "<td>" . $row["fname"] . "</td>\n\r";
   echo "<td>" . $row["address"] . "</td>\n\r";
   echo "<td>" . $row["postal_code"] . "</td>\n\r";
   echo "<td>" . $row["phone"] . "</td>\n\r";
   echo "<td>" . $row["email"] . "</td>\n\r";
   echo "</tr>\n\r\n\r";         
 } // end foreach
    
    // end table
   
   echo "</table>\n\r";
    
}  // end if 
     
else {
     echo "Sorry, there were no results";
} // end else


// close the connection
$conn = null;        

?>



</body>
</html>