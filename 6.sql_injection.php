<?php
// Connect to the database
$conn = new mysqli("localhost", "username", "password", "database");//replace username, password and database accordingly.

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Get user input from a GET request
$user_id = $_GET['user_id'];

// Vulnerable query: directly inserting user input into the SQL statement
$sql = "SELECT * FROM users WHERE id = $user_id";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        echo "ID: " . $row["id"] . " - Name: " . $row["name"] . "<br>";
    }
} else {
    echo "No results found.";
}

$conn->close();
?>