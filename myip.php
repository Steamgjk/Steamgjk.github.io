
<?php

//INSERT INTO `INFO` (`ID`, `IP`, `CName`, `CID`, `VisTime`) VALUES (NULL, '127.0.0.1', 'MyIP', 'M', '2018/10/9 10:21:21');
 $conn=mysqli_connect('localhost','root','');//连接数据库服务器
 mysqli_select_db($conn,'IPInfo');//选中要操作的数据库
 mysqli_query($conn,'set names utf8');//执行一个SQL语句
 $ip = $_POST['ip'];
 $cname = $_POST['cname'];
 $cid = $_POST['cid'];
 $btm = $_POST['beijingtime'];
 $sql = "INSERT INTO `INFO` (`ID`, `IP`, `CName`, `CID`, `VisTime`) VALUES (NULL, '$ip', '$cname', '$cid', '$btm')";
 $result=mysqli_query($conn,$sql);//设置指定编码格式
 //if($cid!='110000')
 {
 	$to = "steam1994@163.com";
	$subject = "Visit from".$ip." ".$cname." ".$cid." ".$btm;;
	$message = $ip." ".$cname." ".$cid." ".$btm;
	$headers = "From: $from";
	mail($to,$subject,$message,$headers);
	echo "Mail Sent.";
 }
?>

