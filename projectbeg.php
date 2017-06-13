<html>
<head>
<title>calculator</title>
<style>
p
{
text-align:right;
}
table
{
width:75%;
}
td
{
height:30px;
}
table,td
{ border:2;}
</style>
</head>
<body bgcolor="skyblue">
<center>
<h1> CONVERTING CALCULATOR </h1><br>
<h3>Kilogram to Pound and Viceversa</h3>
<table border="2">
<tr><th>Kilo(kg)</th><th>Convert</th><th>Pounds(lb)</th><th>Pounds(lb)</th><th>Convert</th><th>Kilo(kg)</th></tr>
<tr><td><form action="#" method="POST">
<input type="text" name="kilo" placeholder="Enter the kilo" required/></td>
<td><input type="submit" name="convert1" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert1"]))
{
$k=$_POST["kilo"] *2.20462;
echo'<b>'.$k.'</b>';
}
?>
</td>
<td><form action="#" method="POST">
<input type="text" name="pound" placeholder="Enter the pound" required/></td>
<td><input type="submit" name="convert2" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert2"]))
{
$k=$_POST["pound"] /2.20462;
echo'<b>'.$k.'</b>';
}
?>
</td>
</tr>
</table>
<h3>Meter to Yards and Viceversa</h3>
<table border="2">
<tr><td>Meter(m)</td><td>Convert</td><td>Yard(yd)</td><td>Yard(yd)</td><td>Convert</td><td>Meter(m)</td></tr>
<tr><td><form action="#" method="POST">
<input type="text" name="meter" placeholder="Enter the meter" required/></td>
<td><input type="submit" name="convert3" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert3"]))
{
$k=$_POST["meter"] *1.09361;
echo'<b>'.$k.'</b>';
}
?>
</td>
<td><form action="#" method="POST">
<input type="text" name="yard" placeholder="Enter the yard" required/></td>
<td><input type="submit" name="convert4" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert4"]))
{
$k=$_POST["yard"] /1.09361;
echo'<b>'.$k.'</b>';
}
?>
</td>
</tr>
</table>
<h3>Celsius to Fahrenheit and Viceversa</h3>
<table border="2">
<tr><td>Celsius(*c)</td><td>Convert</td><td>Fahrenheit(*F)</td><td>Fahrenheit(*F)</td><td>Convert</td><td>Celsius(*C)</td></tr>
<tr><td><form action="#" method="POST">
<input type="text" name="cel" placeholder="Enter the celsius" required/></td>
<td><input type="submit" name="convert5" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert5"]))
{
$k=($_POST["cel"]*1.8)+32;
echo'<b>'.$k.'</b>';
}
?>
</td>
<td><form action="#" method="POST">
<input type="text" name="fah" placeholder="Enter the fahrenheit" required/></td>
<td><input type="submit" name="convert6" value="convert"/></td></form>
<td>
<?php
if(isset($_POST["convert6"]))
{
$k=round(($_POST["fah"]-32)/1.8,4);
echo'<b>'.$k.'</b>';
}
?>
</td>
</tr>
</table>


</center>
<p>Created by<br>MOHANRAJ R</p>
</body>
</html>

