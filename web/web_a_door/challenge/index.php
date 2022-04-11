<?php
	$door = $_GET['door'];
	function relax() {
		;
	}
	function redirect($url, $statusCode = 303){
	   header('Location: ' . $url, true, $statusCode);
	   die();
	}
	if(isset($door)){
    	redirect('/flag/'.$door.'.html');
	} else {
		relax();
	}
?>
<html>
	<head>
	</head>
	<style>
		body {
			background: linear-gradient(-45deg, #ee7752, #e73c7e, #23a6d5, #23d5ab);
			background-size: 400% 400%;
			animation: gradient 15s ease infinite;
			height: 100vh;
		}
		@keyframes gradient {
			0% {
				background-position: 0% 50%;
			}
			50% {
				background-position: 100% 50%;
			}
			100% {
				background-position: 0% 50%;
			}
		}
		.content {
		max-width: 600px;
		margin: auto;
		}
		.center {
		display: block;
		margin-left: auto;
		margin-right: auto;
		}
		html, body { 
		height: 100%; 
		margin: 0; 
		overflow: hidden;
		overflow: clip; 
		contain: content;
		}
	</style>
	
	<body>
	<div class="content">
		<h1 class="center" style="color:white;">What lies behind the door?</h1>
		<img src="./images/door.png" class="center"><br>
		<label for="DoorNumber" class="center" style="color:white;">Pick a door, any door...</label>
		<form>
			<input type="number" id="door" name="door" min="1" max="10" class="center"> 
			<input onclick="findFlag()" type="submit" value="Enter..." class="center">
		</form>
	</div>
	</body>
	<script>
		function findFlag(){
    		document.location = '?door='+document.getElementById('door').value();
		}
	</script>
</html>