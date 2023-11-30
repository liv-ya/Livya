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

//table insertion
$ins_table="insert into Student(Id,Name)values(35,'Sharon')";
if(mysqli_query($conn,$ins_table))
    echo"value inserted";
else {
    echo"connection failed";
}



