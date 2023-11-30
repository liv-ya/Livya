<?php
$conn=new mysqli("localhost","root","");        //mysqli_connect("localhost","root","");
if($conn->connect_error)
{
    die("Connection failed".$conn->connect_error);
}
 else {
     echo"connected successfully";
}
$s="create database MCA";
if($conn->query($s)==TRUE){     //if(mysqli_query($conn,$sql)
    echo"Database created";
}
else {
    echo"connection failed";
}
?>