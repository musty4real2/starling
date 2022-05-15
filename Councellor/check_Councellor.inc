<?php
session_start();
class Councellor_check{

public function __construct($auth){
	if ($auth != "Councellor") {
		$_SESSION[] = array();
		session_destroy();
		header('location:../index.php');
	}

}
}
$Councellor_check = new Councellor_check();
echo $Councellor_check;
?>