<?php
@session_start();

foreach($_SESSION as $key => $value){
	${$key} = $value;
}
