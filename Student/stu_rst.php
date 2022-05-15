<?php
include '../inc/Config.php';
?>
<!DOCTYPE HTML>
<html>
<head>
	<title>Staff</title>
	<link rel="stylesheet" type="text/css" href="../css/admin.css">
</head>
<body>
<?php

$id = $_POST['id'];
$query = mysql_query("SELECT * FROM st_apply WHERE id = '$id'" )or die(mysql_error());
$row = mysql_fetch_array($query);
?>
	<div id="overlay">
				<div id="blanket"></div>
			</div>
			<div id="eula" class="dialog">
<div id="wrapper">
		<div id="user_details">
			<div id="user_cont">
				<h3>Student Details</h3>
			</div>
		</div>
		
		</div>
	</div>
</div>
</body>