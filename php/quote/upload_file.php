<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Upload a File</title>
</head>

<body>
<?php
    /*Script 11.4 - upload_file.php
    Jeremiah Purba
    This script displays and handles an HTML form.
    This script takes a file upload and stores it on the server. */
    
    
    //Check whether the form has been submitted:
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        
        //Show me the information about the file I am uploading using the $_FILE array. See page 308
        $file = $_FILES['the_file'];//the_file comes from the form
        print_r($file);

        // Move the uploaded file from the temporary file location to our destination folder we defined:
        //File properties that we want to access from the $_FILE[array]. See page 308
        
        // check folder permission
        //print('<br>');
        //$perms=fileperms('../uploads');
        //print('<br>');
        //printf("%s\n", octdec($perms));
        //print('<br>');
        chmod("../uploads",01777);
        //$perms1=fileperms('./uploads');
        //print('<br>');
        //printf("%s\n", octdec($perms1));/
        
        print('<br>');
        //$perms2=fileperms('./users');
        //print('<br>');
        //printf("%s\n", octdec($perms2));
        //print('<br>');
        chmod("../users",01777);
        //$perms3=fileperms('./users');
        //print('<br>');
        //printf("%s\n", octdec($perms3));
        
        print('<br>');
        //$perms4=fileperms('./solutions');
        //print('<br>');
        //printf("%s\n", octdec($perms2));
        //print('<br>');
        chmod("../solutions",01777);
        //$perms5=fileperms('./solutions');
        //print('<br>');
        //printf("%s\n", octdec($perms5));

        if (move_uploaded_file ($_FILES['the_file']['tmp_name'],
            "../uploads/{$_FILES['the_file']['name']}")) {
                print '<p>Your file has been uploaded.</p>';
        } else { //Problem
                print '<p style="color: red;">Your file could not be uploaded because: ';

            //Print a message based upon the FILES error codes listed on page 308:
            switch ($_FILES['the_file']['error']) {
                case 1:
                    print 'The file exceeds the upload_max_filesize setting in php.ini';
                    break;
                case 2:
                    //This size was determined in our form below.
                    print 'The file exceeds the MAX_FILE_SIZE setting in the HTML form';
                    break;
                case 3:
                    print 'The file was only partially uploaded';
                    break;
                case 4:
                    print 'No file was uploaded';
                    break;
                case 6:
                    print 'The temporary folder does not exist.';
                    break;
                default:
                    print 'Something unforeseen happened.';
                    break;
            }
            print '.<p>'; //Complete the paragraph.

            } //End of move_uploaded_file() IF.
        
    } //End of submission IF
    
    //Leave PHP and display the form.
    
    ?>
    
    <form action="" enctype="multipart/form-data" method="post">
      <p>Upload a file using this form:</p>
      <!-- Only files smaller than 300KB should be allowed by setting the MAX_FILE_SIXE restriction.-->
      <input type="hidden" name="MAX_FILE_SIZE" value="3000000">
      <!-- The file input name value must exactly match the index in the $_FILES variable.-->
      <p>
        <input type="file" name="the_file">
      </p>
      <p><input type="submit" name="submit" value="Upload This File"></p>
    </form>    
</body>
</html>