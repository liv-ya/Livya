<?php

//$password=""
$conn=new mysqli("localhost","root","","MCA");        //mysqli_connect("localhost","root","");
if($conn->connect_error)
{
    die("Connection failed".$conn->connect_error);
}
 else {
     echo"connected successfully";
}

$sel="select * from student";
$data=mysqli_query($conn,$sel);
while($row=mysqli_fetch_assoc($data))
{
        echo '<br>',"Id:".$row['Id'],'<br>',"Name".$row['Name'],"<br>";
}
