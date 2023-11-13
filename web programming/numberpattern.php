<html>
    <head>
    <h2><center>Number Loop</center></h2>
    </head>
    <body><center>
        <?php
        for($i=0;$i<10;$i++)
        echo"<br>",$i;
        ?>
        <br><br>
        <h2><center>Number Pattern</center></h2>
        <?php
        for($i=1;$i<=10;$i++)
        {
           for($j=1;$j<=$i;$j++)
           {
               echo" ",$j;
           }
           echo"<br>";
        }
        ?>
    </center>
    </body> 
</html>

