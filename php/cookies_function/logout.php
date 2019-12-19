<?php
    ob_start();
    session_start();
    $_SESSION = [];
    session_destroy();

    include('header.html');

    //if you do not want destroy all sessions, you could unset the authorized :

    echo '<br>';
    echo 'Thank you for visiting the Path of Light Yoga Studio. We hope that you enjoyed your experience with us and will return again soon.';
    echo '<br>';
         
    unset($_SESSION['authorized']);
    
    

    //sleep(10);
    
    
?>

<?php
    include('footer.html');
?>
<?php
    //header ("Location:  login.php");
?>