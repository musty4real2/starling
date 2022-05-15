<?php
session_start();
class Student_check{

public function __construct($auth){
	if ($auth != "Student") {
		$_SESSION[] = array();
		session_destroy();
		header('location:../index.php');
	}

}
}
$Student_check = new Student_check();
echo $Student_check;
?>