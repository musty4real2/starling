<?php

class Subject{
    public $id;
    public $name;
    public $grade;
    
    function __construct($id){
        $query = mysql_query("SELECT * FROM `subjects` WHERE `id` = '$id'");
        if($row=mysql_fetch_array($query)){
            $this->id = $row['id'];
            $this->name = $row['name'];
            $this->grade = $row['class'];
        }
    }
}

?>