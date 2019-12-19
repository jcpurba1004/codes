<?php
include('../pdo_connect.php');

$deleteid = $_GET['deleteid'];
if (isset($deleteif)){
    $delsql = $bdh->prepare("delete from users where id = '$deleteid'");
    $delsql->execute();
    echo "Record deleted!<br>";
}




$sql = $dbh->prepare("select id,fullname from users");
$sql->execute();
while ($row = $sql->fetch()){
 $id = $row[0];
 $fullname = $row[1];
 echo $fullname.' <a href="delete.php?deleteid='.id.'" onclick="return confirm(\' Are you sure you want to delete '.$fullname.'? \');">Delete</a><br>';
 //or it could equal $fullname = $row['fullname'];
 //or it could equal $id = $row['id'];
    
}
?>