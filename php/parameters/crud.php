<?php
include('../pdo_connect.php');

$userid = $_GET['upid'];
//$deleted = $_GET['deleteid'];
//get variables

//write update statement


//write my delete statement


//THIS SHOWS THE CURRENT RECORDS!
$sql = $dbh->prepare("select id,fullname from users");
$sql->execute();
while ($row = $sql->fetch()){
 $id = $row[0];
 $fullname = $row[1];
 echo $fullname.' <a href="delete.php?deleteid='.id.'" onclick="return confirm(\' Are you sure you want to delete '.$fullname.'? \');">Delete</a><br>';
 //or it could equal $fullname = $row['fullname'];
 //or it could equal $id = $row['id'];
    
}

//THIS WILL SHOW A FORM IF THE USER SELECTED AN UPDATE LINK!
if (isset($userid)){
    $getsql = $dbh->prepare("select fullname from users where id = '$userid'");
    $getsql->execute();
    $row = $getsql->fetch();
    $fullname = $row[0];
?>
<form action = "crud.php" method="post">
<input type="hidden" name = "userid" value = "<?php echo $userid;?>">
<input type="text" name = "upfullname" value = "<?php echo $fullname;?>"><br>
<input type="submit" name = "submit" value = "Edit <?php echo $fullname;?>">
</form>
<?php
}
?>