#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <set>

void greet(const std::string& name) {
    std::cout << "Hello, " << name << "! Welcome to C++!" << std::endl;
}

int calculate_area(int length, int width) {
    return length * width;
}

struct Person {
    std::string name;
    int age;
    std::string city;
    std::vector<std::string> skills;
};

int main() {
    // 1. Variables and Data Types
    std::cout << "=== Variables and Data Types ===" << std::endl;
    std::string name = "C++ Learner";
    int age = 25;
    float height = 5.9f;
    bool is_student = true;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Is Student: " << (is_student ? "true" : "false") << std::endl;

    // 2. Basic Operations
    std::cout << "\n=== Basic Operations ===" << std::endl;
    int a = 10, b = 3;
    std::cout << "Addition: " << a << " + " << b << " = " << a + b << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << a - b << std::endl;
    std::cout << "Multiplication: " << a << " * " << b << " = " << a * b << std::endl;
    std::cout << "Division: " << a << " / " << b << " = " << (float)a / b << std::endl;
    std::cout << "Floor Division: " << a << " // " << b << " = " << a / b << std::endl;
    std::cout << "Modulus: " << a << " % " << b << " = " << a % b << std::endl;

    // Power
    int power = 1;
    for (int i = 0; i < b; i++) power *= a;
    std::cout << "Power: " << a << " ** " << b << " = " << power << std::endl;

    // 3. String Operations
    std::cout << "\n=== String Operations ===" << std::endl;
    std::string first_name = "John";
    std::string last_name = "Doe";
    std::string full_name = first_name + " " + last_name;
    std::cout << "Full name: " << full_name << std::endl;
    std::cout << "Name length: " << full_name.length() << std::endl;

    // Uppercase
    std::string upper = full_name;
    std::transform(upper.begin(), upper.end(), upper.begin(), [](unsigned char c){ return std::toupper(c); });
    std::cout << "Uppercase: " << upper << std::endl;

    // Lowercase
    std::string lower = full_name;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c){ return std::tolower(c); });
    std::cout << "Lowercase: " << lower << std::endl;

    // 4. Lists (Vectors)
    std::cout << "\n=== Lists ===" << std::endl;
    std::vector<std::string> fruits = {"apple", "banana", "orange", "grape", "mango"};
    std::cout << "Fruits list: ";
    for (size_t i = 0; i < fruits.size(); ++i) {
        std::cout << fruits[i] << (i < fruits.size() - 1 ? ", " : "\n");
    }
    std::cout << "First fruit: " << fruits.front() << std::endl;
    std::cout << "Last fruit: " << fruits.back() << std::endl;
    std::cout << "After adding mango: ";
    for (size_t i = 0; i < fruits.size(); ++i) {
        std::cout << fruits[i] << (i < fruits.size() - 1 ? ", " : "\n");
    }

    // 5. Conditional Statements
    std::cout << "\n=== Conditional Statements ===" << std::endl;
    int score = 85;
    char grade;
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else grade = 'F';
    std::cout << "Score: " << score << ", Grade: " << grade << std::endl;

    // 6. Loops
    std::cout << "\n=== Loops ===" << std::endl;
    std::cout << "Counting from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << "  " << i << std::endl;
    }
    std::cout << "Fruits in the list:" << std::endl;
    for (const auto& fruit : fruits) {
        std::cout << "  - " << fruit << std::endl;
    }

    // 7. Functions
    std::cout << "\n=== Functions ===" << std::endl;
    greet("Alice");
    std::cout << "Area of rectangle (5 x 3): " << calculate_area(5, 3) << std::endl;

    // 8. Dictionary (struct)
    std::cout << "\n=== Dictionary ===" << std::endl;
    Person person = {"Alice", 30, "New York", {"C++", "JavaScript", "SQL"}};
    std::cout << "Person info: {name: " << person.name << ", age: " << person.age
              << ", city: " << person.city << ", skills: ["
              << person.skills[0] << ", " << person.skills[1] << ", " << person.skills[2] << "]}" << std::endl;
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Skills: " << person.skills[0] << ", " << person.skills[1] << ", " << person.skills[2] << std::endl;

    // 9. User Input
    std::cout << "\n=== User Input ===" << std::endl;
    std::string user_name;
    std::string user_age;
    std::cout << "Enter your name: ";
    std::getline(std::cin, user_name);
    std::cout << "Enter your age: ";
    std::getline(std::cin, user_age);
    std::cout << "Hello " << user_name << ", you are " << user_age << " years old!" << std::endl;

    std::cout << "Basic C++ examples completed!" << std::endl;
    std::cout << "Try editing the user input section to practice interactive programming." << std::endl;

    // 10. Tuples (struct)
    std::cout << "\n=== Tuples ===" << std::endl;
    struct {
        int x, y;
    } coordinates = {10, 20};
    std::cout << "Coordinates: (" << coordinates.x << ", " << coordinates.y << ")" << std::endl;
    std::cout << "X: " << coordinates.x << ", Y: " << coordinates.y << std::endl;

    // 11. Sets (std::set)
    std::cout << "\n=== Sets ===" << std::endl;
    std::vector<int> numbers = {1, 2, 3, 2, 1};
    std::set<int> unique(numbers.begin(), numbers.end());
    std::cout << "Unique numbers: {";
    for (auto it = unique.begin(); it != unique.end(); ++it) {
        std::cout << *it << (std::next(it) != unique.end() ? ", " : "}\n");
    }

    // 12. Simple Loop with While
    std::cout << "\n=== While Loop ===" << std::endl;
    int count = 0;
    while (count < 3) {
        std::cout << "Count is " << count << std::endl;
        count++;
    }

    // 13. List Comprehension (simulate)
    std::cout << "\n=== List Comprehension ===" << std::endl;
    std::vector<int> squares(5);
    for (int i = 0; i < 5; i++) {
        squares[i] = i * i;
    }
    std::cout << "Squares: [";
    for (size_t i = 0; i < squares.size(); i++) {
        std::cout << squares[i] << (i < squares.size() - 1 ? ", " : "]\n");
    }

    // 14. Looping through a dictionary (struct fields)
    std::cout << "\n=== Looping through a Dictionary ===" << std::endl;
    std::cout << "name: " << person.name << std::endl;
    std::cout << "age: " << person.age << std::endl;
    std::cout << "city: " << person.city << std::endl;
    std::cout << "skills: " << person.skills[0] << ", " << person.skills[1] << ", " << person.skills[2] << std::endl;

    return 0;
}