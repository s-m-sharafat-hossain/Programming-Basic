<?php

// 1. Basic Output
echo "<h2>Welcome to PHP Basics</h2>\n";

// 2. Variables and Data Types
$name = "Alice";
$age = 25;
$price = 49.99;
$isMember = true;

echo "Name: $name<br>\n";
echo "Age: $age<br>\n";
echo "Price: $price<br>\n";
echo "Member: " . ($isMember ? "Yes" : "No") . "<br><br>\n";

// 3. Conditional Statements
if ($age >= 18) {
    echo "You are an adult.<br>\n";
} else {
    echo "You are a minor.<br> \n";
}

// 4. Loops
echo "<br>Numbers from 1 to 5:<br>  \n";
for ($i = 1; $i <= 5; $i++) {
    echo $i . " ";
}
echo "<br><br>";

// 5. Arrays
$fruits = ["Apple", "Banana", "Cherry"];
echo "Fruits List:<br>";
foreach ($fruits as $fruit) {
    echo $fruit . "<br>";
}
echo "<br>";

// 6. Functions
function greet($person) {
    return "Hello, $person!";
}

echo greet("Alice") . "<br><br>";

// 7. Associative Array
$user = [
    "username" => "admin",
    "email" => "admin@example.com"
];

echo "Username: " . $user['username'] . "<br>";
echo "Email: " . $user['email'] . "<br><br>";

// 8. Simple Form Handling (GET)
if (isset($_GET['your_name'])) {
    $yourName = htmlspecialchars($_GET['your_name']);
    echo "You entered: $yourName<br><br>";
}

?>

<!-- 9. HTML Form -->
<form method="GET">
    Enter your name: <input type="text" name="your_name">
    <input type="submit" value="Submit">
</form>

<?php

// 10. Basic MySQLi Database Connection (change credentials!)
$host = "localhost";
$user = "root";
$pass = "";
$dbname = "test";

// Create connection
$conn = new mysqli($host, $user, $pass, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} else {
    echo "<br>Connected to database successfully!<br>";
    // Sample query
    $result = $conn->query("SELECT * FROM users LIMIT 5");
    if ($result->num_rows > 0) {
        echo "Usernames:<br>";
        while ($row = $result->fetch_assoc()) {
            echo $row['username'] . "<br>";
        }
    } else {
        echo "No users found.<br>";
    }
    $conn->close();
}

?>
