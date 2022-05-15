<?php

	class Session{

		public function __construct($auth){
				foreach ($auth as $key => $value) {
					$_SESSION[$key] = $value;
				}
		}
	}
?>
