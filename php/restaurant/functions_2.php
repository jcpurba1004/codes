<?php
function someBlock($who='Kris' ,$position='Custodian'){
  echo 'hi Class, form '.$who' your '.$position;
}


//imagine the values of TOM and HEAD HONCHO are dynamic from a database call 
someBlock('Tom','Head Honcho');
?>