const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

/**
 * Basic JavaScript Examples - C++ to JS Conversion
 */

// 1. Variables and Data Types
console.log("=== Variables and Data Types ===");
let name = "C++ Learner";
let age = 25;
let height = 5.9;
let is_student = true;

console.log("Name:", name);
console.log("Age:", age);
console.log("Height:", height);
console.log("Is Student:", is_student);

// 2. Basic Operations
console.log("\n=== Basic Operations ===");
let a = 10, b = 3;
console.log(`Addition: ${a} + ${b} = ${a + b}`);
console.log(`Subtraction: ${a} - ${b} = ${a - b}`);
console.log(`Multiplication: ${a} * ${b} = ${a * b}`);
console.log(`Division: ${a} / ${b} = ${a / b}`);
console.log(`Floor Division: ${a} // ${b} = ${Math.floor(a / b)}`);
console.log(`Modulus: ${a} % ${b} = ${a % b}`);

// Power
let power = Math.pow(a, b);
console.log(`Power: ${a} ** ${b} = ${power}`);

// 3. String Operations
console.log("\n=== String Operations ===");
let first_name = "John";
let last_name = "Doe";
let full_name = first_name + " " + last_name;
console.log("Full name:", full_name);
console.log("Name length:", full_name.length);

// Uppercase
let upper = full_name.toUpperCase();
console.log("Uppercase:", upper);

// Lowercase
let lower = full_name.toLowerCase();
console.log("Lowercase:", lower);

// 4. Lists (Arrays)
console.log("\n=== Lists ===");
let fruits = ["apple", "banana", "orange", "grape"];
console.log("Fruits list:", fruits.join(", "));
console.log("First fruit:", fruits[0]);
console.log("Last fruit:", fruits[fruits.length - 1]);
fruits.push("mango");
console.log("After adding mango:", fruits.join(", "));

// 5. Conditional Statements
console.log("\n=== Conditional Statements ===");
let score = 85;
let grade;
if (score >= 90) grade = 'A';
else if (score >= 80) grade = 'B';
else if (score >= 70) grade = 'C';
else grade = 'F';
console.log(`Score: ${score}, Grade: ${grade}`);

// 6. Loops
console.log("\n=== Loops ===");
console.log("Counting from 1 to 5:");
for (let i = 1; i <= 5; i++) {
    console.log("  " + i);
}
console.log("Fruits in the list:");
for (const fruit of fruits) {
    console.log("  - " + fruit);
}

// 7. Functions
console.log("\n=== Functions ===");
function greet(name) {
    console.log(`Hello, ${name}! Welcome to JavaScript!`);
}
function calculate_area(length, width) {
    return length * width;
}
greet("Alice");
console.log("Area of rectangle (5 x 3):", calculate_area(5, 3));

// 8. Dictionary (Object)
console.log("\n=== Dictionary ===");
let person = {
    name: "Alice",
    age: 30,
    city: "New York",
    skills: ["C++", "JavaScript", "SQL"]
};
console.log(`Person info: {name: ${person.name}, age: ${person.age}, city: ${person.city}, skills: [${person.skills.join(", ")}]}`);
console.log("Name:", person.name);
console.log("Skills:", person.skills.join(", "));

// 9. User Input (prompt - works in browser, node: use readline)
console.log("\n=== User Input ===");
readline.question("Enter your name: ", user_name => {
    readline.question("Enter your age: ", user_age => {
        console.log(`Hello ${user_name}, you are ${user_age} years old!`);
        console.log("Basic JavaScript examples completed!");
        console.log("Try editing the user input section to practice interactive programming.");

        // 10. Tuples (Object)
        console.log("\n=== Tuples ===");
        let coordinates = { x: 10, y: 20 };
        console.log(`Coordinates: (${coordinates.x}, ${coordinates.y})`);
        console.log(`X: ${coordinates.x}, Y: ${coordinates.y}`);

        // 11. Sets
        console.log("\n=== Sets ===");
        let numbers = [1, 2, 3, 2, 1];
        let unique = new Set(numbers);
        console.log("Unique numbers:", Array.from(unique));

        // 12. Simple Loop with While
        console.log("\n=== While Loop ===");
        let count = 0;
        while (count < 3) {
            console.log("Count is", count);
            count++;
        }

        // 13. List Comprehension (map)
        console.log("\n=== List Comprehension ===");
        let squares = Array.from({length: 5}, (_, i) => i * i);
        console.log("Squares:", squares);

        // 14. Looping through a dictionary (object fields)
        console.log("\n=== Looping through a Dictionary ===");
        for (let key in person) {
            if (Array.isArray(person[key])) {
                console.log(`${key}: ${person[key].join(", ")}`);
            } else {
                console.log(`${key}: ${person[key]}`);
            }
        }

        readline.close();
    });
});
