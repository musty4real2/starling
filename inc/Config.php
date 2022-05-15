<?php

@define('DBINFO', 'mysql:host=localhost;dbname=starling1');
@define('DBUSER', 'root');
@define('DBPASS', '');

try{
$db = new PDO(DBINFO, DBUSER, DBPASS);
}catch(PDOException $e){
	die("connection failed:". $db->error());
}

?>