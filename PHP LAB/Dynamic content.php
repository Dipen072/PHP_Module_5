<?php
// Array of items (could be products, blog posts, etc.)
$items = [
    ["title" => "Laptop", "description" => "High performance laptop with 16GB RAM."],
    ["title" => "Smartphone", "description" => "Latest model with great camera features."],
    ["title" => "Headphones", "description" => "Noise-cancelling over-ear headphones."],
    ["title" => "Smartwatch", "description" => "Tracks fitness and syncs with your phone."],
    ["title" => "Tablet", "description" => "Lightweight and portable for everyday use."]
];
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic Content with PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h2>Our Products</h2>
    <ul class="product-list">
        <?php foreach ($items as $item): ?>
            <li class="product-item">
                <h3><?php echo $item['title']; ?></h3>
                <p><?php echo $item['description']; ?></p>
            </li>
        <?php endforeach; ?>
    </ul>
</body>
</html>
