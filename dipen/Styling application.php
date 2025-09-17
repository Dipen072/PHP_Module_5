<?php
// Handle form submission
$success = "";
$errors = [];

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = htmlspecialchars(trim($_POST["name"]));
    $email = htmlspecialchars(trim($_POST["email"]));
    $password = htmlspecialchars(trim($_POST["password"]));

    // Validation
    if (empty($name)) {
        $errors[] = "Name is required.";
    }
    if (empty($email)) {
        $errors[] = "Email is required.";
    } elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $errors[] = "Invalid email format.";
    }
    if (empty($password)) {
        $errors[] = "Password is required.";
    } elseif (strlen($password) < 6) {
        $errors[] = "Password must be at least 6 characters.";
    }

    // If no errors → success
    if (empty($errors)) {
        $success = "🎉 Registration successful! Welcome, <strong>$name</strong>";
    }
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>User Registration</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <div class="form-container">
    <h2>User Registration</h2>

    <?php if (!empty($errors)): ?>
      <div class="error-box">
        <ul>
          <?php foreach ($errors as $error): ?>
            <li><?= $error ?></li>
          <?php endforeach; ?>
        </ul>
      </div>
    <?php endif; ?>

    <?php if ($success): ?>
      <div class="success-box">
        <p><?= $success ?></p>
      </div>
    <?php endif; ?>

    <form method="POST" action="">
      <label for="name">Name</label>
      <input type="text" id="name" name="name" placeholder="Enter your name">

      <label for="email">Email</label>
      <input type="email" id="email" name="email" placeholder="Enter your email">

      <label for="password">Password</label>
      <input type="password" id="password" name="password" placeholder="Enter your password">

      <button type="submit">Register</button>
    </form>
  </div>
</body>
</html>
