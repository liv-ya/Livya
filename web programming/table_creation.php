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

//table creation

$table="create table Student(Id INT(2) PRIMARY KEY,Name VARCHAR(25) NOT NULL)";
if($conn->query($table)==TRUE){     //if(mysqli_query($conn,$table)
    echo"Table created";
}
else {
    echo"connection failed";
}
?>