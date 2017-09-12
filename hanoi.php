<?php
function hanoi($plate, $from, $to) { 
while($plate > 0) 
{ 
    $u = 6 - ($from + $to); 
    hanoi(--$plate, $from, $u);    
    print "move from $from to $to \n"; 
    $from = $us; 
    } 
} 
hanoi(3, 1, 3); 
?>
