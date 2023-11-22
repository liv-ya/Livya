<?php 
function cube($n)
{
return $n*$n*$n;
}
?>

<html>
    <head></head>
    <body>
                   <br><br><br>
        <form id='form1' method='get' action='function.php'>
            <center>  
            <label>Enter Side of Square</label>
            <input type="text" name="value1" ><br>
            <br><br> 
            <input type="submit" name="submit" value="Cube"  ><br> <br> <br> 
                       
                       <?php
                            if(isset($_GET["submit"]))
                            {
                                $side=$_GET["value1"];
                               
                                ?>
                                <label>Cube</label>
                                 <input type="text" name="value1" value="<?php echo cube($side); ?>" ><br>
                                
                       <?php
                                
                            }

                        ?>
            </center>
        </form>
        
        
    </body>
</html>