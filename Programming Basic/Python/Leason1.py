# Basic Python Code Examples
# This file contains fundamental Python concepts for learning

# 1. Variables and Data Types
print("=== Variables and Data Types ===")
name = "Python Learner"  # String
age = 25                 # Integer
height = 5.9            # Float
is_student = True       # Boolean

print(f"Name: {name}")
print(f"Age: {age}")
print(f"Height: {height}")
print(f"Is Student: {is_student}")

# 2. Basic Operations
print("\n=== Basic Operations ===")
a = 10
b = 3

print(f"Addition: {a} + {b} = {a + b}")
print(f"Subtraction: {a} - {b} = {a - b}")
print(f"Multiplication: {a} * {b} = {a * b}")
print(f"Division: {a} / {b} = {a / b}")
print(f"Floor Division: {a} // {b} = {a // b}")
print(f"Modulus: {a} % {b} = {a % b}")
print(f"Power: {a} ** {b} = {a ** b}")

# 3. String Operations
print("\n=== String Operations ===")
first_name = "John"
last_name = "Doe"
full_name = first_name + " " + last_name
print(f"Full name: {full_name}")
print(f"Name length: {len(full_name)}")
print(f"Uppercase: {full_name.upper()}")
print(f"Lowercase: {full_name.lower()}")

# 4. Lists (Arrays)
print("\n=== Lists ===")
fruits = ["apple", "banana", "orange", "grape"]
print(f"Fruits list: {fruits}")
print(f"First fruit: {fruits[0]}")
print(f"Last fruit: {fruits[-1]}")
fruits.append("mango")
print(f"After adding mango: {fruits}")

# 5. Conditional Statements
print("\n=== Conditional Statements ===")
score = 85

if score >= 90:
    grade = "A"
elif score >= 80:
    grade = "B"
elif score >= 70:
    grade = "C"
else:
    grade = "F"

print(f"Score: {score}, Grade: {grade}")

# 6. Loops
print("\n=== Loops ===")
print("Counting from 1 to 5:")
for i in range(1, 6):
    print(f"  {i}")

print("Fruits in the list:")
for fruit in fruits:
    print(f"  - {fruit}")

# 7. Functions
print("\n=== Functions ===")
def greet(name):
    """Simple function to greet someone"""
    return f"Hello, {name}! Welcome to Python!"

def calculate_area(length, width):
    """Calculate area of a rectangle"""
    return length * width

# Using the functions
print(greet("Alice"))
print(f"Area of rectangle (5 x 3): {calculate_area(5, 3)}")

# 8. Dictionary
print("\n=== Dictionary ===")
person = {
    "name": "Alice",
    "age": 30,
    "city": "New York",
    "skills": ["Python", "JavaScript", "SQL"]
}

print(f"Person info: {person}")
print(f"Name: {person['name']}")
print(f"Skills: {person['skills']}")

# 9. User Input
print("\n=== User Input ===")
# Uncomment the lines below to try user input
user_name = input("Enter your name: ")
user_age = input("Enter your age: ")
print(f"Hello {user_name}, you are {user_age} years old!")

print("Basic Python examples completed!")
print("Try uncommenting the user input section to practice interactive programming.")
# 10. Tuples
print("\n=== Tuples ===")
coordinates = (10, 20)
print(f"Coordinates: {coordinates}")
print(f"X: {coordinates[0]}, Y: {coordinates[1]}")

# 11. Sets
print("\n=== Sets ===")
unique_numbers = {1, 2, 3, 2, 1}
print(f"Unique numbers: {unique_numbers}")

# 12. Simple Loop with While
print("\n=== While Loop ===")
count = 0
while count < 3:
    print(f"Count is {count}")
    count += 1

# 13. List Comprehension
print("\n=== List Comprehension ===")
squares = [x**2 for x in range(5)]
print(f"Squares: {squares}")

# 14. Looping through a dictionary
print("\n=== Looping through a Dictionary ===")
for key, value in person.items():
    print(f"{key}: {value}")