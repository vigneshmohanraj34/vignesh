<html>
<head>
<title>Library application</title></head>
<body bgcolor="skyblue"><center><br><br>
<h1>LIBRARY MANAGEMENT</h1><br><br><br><br><h2>
<a href="addbook.html">ADD BOOK</a><br><br><br>
<a href="viewbook.html">VIEW BOOK</a><br><br><br></h2>

</center>
</body>
</html>



addbook.html
<html>
<head>
<title>AddBook</title></head>
<body bgcolor="skyblue"><center><br><br>
<h1>ADD BOOK</h1><br><br><br><br>
<form action="success.php" method="POST">
<h2>
<table border="0">
<tr>
<td>ISBN NUMBER:</td><td><input type="number" name="isbn" required><br></td></tr>
<tr>
<td>BOOK NAME:</td><td><input type="text" name="name" required></td></tr>
<tr>
<td>AUTHOR NAME:</td><td><input type="text" name="aname" required></td></tr>
<tr>
<td>RACK NUMBER:</td><td><input type="number" name="rnumber" required></td></tr>
</table><br>
<input type="submit" value="ADD"><input type="reset" value="RESET"></h2><br>
</body>
</html>                                                                                                                             



success.php
<?php
$con=mysql_connect("localhost","root","");
if(!con)
{
die('could not connect'.mysql_error());
}
mysql_select_db("librarydb",$con);
$sql=mysql_query("SELECT * FROM library where isbn='$_POST[isbn]'");
if(mysql_num_rows($sql)<=0)
{
$sql="INSERT INTO library(isbn,name,aname,rnumber)VALUES('$_POST[isbn]','$_POST[name]','$_POST[aname]','$_POST[rnumber]')";
if(!mysql_query($sql,$con))
{
die('error:'.mysql_error());
}
echo"<script>alert('REGISTER SUCCESSFULLY')</script>";
echo '<meta http-equiv="refresh" content="0; URL=menu.html" />';
}
else
{
echo"<script>alert('ISBN NUMBER IS ALREADY PRESENTED')</script>";
echo '<meta http-equiv="refresh" content="0; URL=addbook.html" />';
}
?>





viewbook.html

<html>
<head>
<title>view Book</title></head>
<body bgcolor="skyblue"><center><br><br>
<h1>View BOOK</h1><br><br><br><br><center>
<form action="viewbook.php" method="POST">
<h2>
ISBN NUMBER:<input type="number" name="isbn" required><br><br><br><br>
<input type="submit" value="VIEW"><input type="reset" value="RESET"></h2><br></center>
</form>
</body>
</html>                                                                  


viewbook.php

<html>
<head><title>view book details</title></head>
<body bgcolor="skyblue"><center>
<?php
echo "<h2>VIEW BOOK DETAILS</h2><br><br><br><br><br>";
$con=mysql_connect("localhost","root","");
if(!$con)
{
die('could not connect'.mysql_error());
}
mysql_select_db("librarydb",$con);//10
$sql=mysql_query("SELECT * FROM library where isbn='$_POST[isbn]'");
if(mysql_num_rows($sql)>0)
{
echo '<table border="5" color="voilet">';
WHILE($row=mysql_fetch_array($sql)):
echo '<tr><td>ISBN NUMBER</td>';
echo '<td>';
echo "$row[0]";
echo'</td></tr><tr><td>NAME</td>';
echo '<td>';
echo "$row[1]";
echo'</td></tr><tr><td>AUTHOR NAME</td>';
echo '<td>';
echo "$row[2]";
echo'</td></tr><tr><td>RACK NUMBER</td>';
echo '<td>';
echo "$row[3]";
echo'</td>';
echo '</tr>';
endwhile;
echo'</table>';

}
else
{
echo"<h1> ISBN NUMBER IS NOT PRESENT</h1>";
}
echo'<font size="20"><br><br><a href="menu.html">close</a><font>';
mysql_close($con);
?>
</b>
</center>
</body>
</html>
