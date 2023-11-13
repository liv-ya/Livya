<?php
echo (max(12,24,36));
echo'<br>',(min(12,24,36));
echo'<br>',(rand(12,24));

$arr=array(10,20,30,40,-50);
echo'<br>','<br>',"Maximum=",(max($arr));
echo'<br>',"Minimum= ",(min($arr));

$format='d-M-Y';
echo '<br>',"Date: ",date($format);

const b=49;
echo '<br>',b;
echo '<br>',constant("b");

date_default_timezone_set("Asia/Kolkata");
echo'<br>',date("h:i:s a");
?>