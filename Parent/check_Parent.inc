<?php
session_start();
class Parent_check{

public function __construct($auth){
	if ($auth != "Parent") {
		$_SESSION[] = array();
		session_destroy();
		header('location:../index.php');
	}

}
}
$Parent_check = new Parent_check();
echo $Parent_check;
?>