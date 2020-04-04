<?php





	session_start();
	
	if(isset($_POST['Submit'])) {
		
		$_SESSION["HeightInFeet"] = $_POST["HeightInFeet"];
		$_SESSION["RemInches"] = $_POST["RemInches"];
		$_SESSION["Weight"] = $_POST["Weight"];
		
		if(isset($_SESSION['Weight'])) {
			header("Location: BMI_results.php");
			exit();
		}
		else {
			// error
		}	
	}
?>


<!DOCTYPE html>
<html lang="en">







<head>
  <meta charset="UTF-8">
  <title>Calculate BMI</title>

  <style>
    input {
      margin-bottom: 0.5em;
    }
  </style>
</head>





<body>
	
	<h1>This Is A <span style="font-style:italic; font-Weight:bold; color: maroon">
		BMI Calcurator</span>!</h1>

	<p style="color: red">
		<!--Placeholder for error messages-->
	</p>

	<form method="post" action="BMI_page.php">

		<label>Please fill in the following information: </label><br>
		Height in Feet: <input type="text" name="HeightInFeet" <?php echo $HeightInFeet;?>><br>
		
		Remaining inches: <input type="text" name="RemInches" <?php echo $RemInches;?>><br>
		
		Weight in pounds : <input type="text" name="Weight" <?php echo $Weight;?>><br>
		
		<input type="Submit" name="Submit" value="Submit"><br>
		<?php echo "<p styple = 'color: red'>" . $error . "</p>";?>
	</form>









	<h2><a href="exit_page.php">Reset</a></h2>
</body>

</html>
