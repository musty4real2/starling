<?php
session_start();
class SubjectT_check{

public function __construct($auth){
	if ($auth != "Subject_T") {
		$_SESSION[] = array();
		session_destroy();
		header('location:../index.php');
	}

}
}
$SubjectT_check = new SubjectT_check();
echo $SubjectT_check;
?>