<?php


$arr=array("livya","naaz","malavika","keerthy");
$count=count($arr);
echo"Number of elements ",$count,'<br>';

for($i=0;$i<$count;$i++)
{
    echo $arr[$i],' ','<br>';
}

$a=array("s1mca"=>60,"s3mca"=>30);
echo '<br>', $a["s1mca"],'<br>';


foreach($a as $v=>$u)
    echo '<br>',$v,"=",$u;
?>
