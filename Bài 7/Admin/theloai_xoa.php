<?php
include("../connect.php");
if(isset($_GET["idTL"]))
{
	$key=$_GET["idTL"];

}
	$sl="delete from theloai where idTL=".$_GET["idTL"];
    echo $sl;
//if(mysql_query($sl))
if(mysqli_query($connect,$sl))
{
	echo "<script language='javascr                                                                                                                       ipt'>alert('Xoa thanh cong');";
		echo "location.href='theloai.php';</script>";
}


?>