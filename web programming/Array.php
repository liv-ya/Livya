<?php
$fruits=array('Apple','Orange','Grapes');

$count=count($fruits);
echo 'Number of elements ',$count,'<br>';

for($i=0;$i<$count;++$i){
    
    echo $fruits[$i],' ';
}
echo '<br><br><br>Add one more element to fruits<br> ';
$fruits[3]='Kiwi';


echo '<br>Using ForEach <br>';
foreach ($fruits as $f){
          echo $f,'<br>';
}

 
?>