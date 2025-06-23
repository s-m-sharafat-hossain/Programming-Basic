#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void greet(const char *name) {
    printf("Hello, %s! Welcome to C!\n", name);
}


int calculate_area(int length, int width) {
    return length * width;
}

int main() {
    // 1. Variables and Data Types
    printf("=== Variables and Data Types ===\n");
    char name[] = "C Learner";
    int age = 25;
    float height = 5.9f;
    bool is_student = true;

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Is Student: %s\n", is_student ? "true" : "false");

    // 2. Basic Operations
    printf("\n=== Basic Operations ===\n");
    int a = 10, b = 3;
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
    printf("Floor Division: %d // %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Power
    int power = 1;
    for (int i = 0; i < b; i++) power *= a;
    printf("Power: %d ** %d = %d\n", a, b, power);

    // 3. String Operations
    printf("\n=== String Operations ===\n");
    char first_name[] = "John";
    char last_name[] = "Doe";
    char full_name[100];
    snprintf(full_name, sizeof(full_name), "%s %s", first_name, last_name);
    printf("Full name: %s\n", full_name);
    printf("Name length: %zu\n", strlen(full_name));

    // Uppercase
    char upper[100];
    strcpy(upper, full_name);
    for (int i = 0; upper[i]; i++) {
        if (upper[i] >= 'a' && upper[i] <= 'z') upper[i] -= 32;
    }
    printf("Uppercase: %s\n", upper);

    // Lowercase
    char lower[100];
    strcpy(lower, full_name);
    for (int i = 0; lower[i]; i++) {
        if (lower[i] >= 'A' && lower[i] <= 'Z') lower[i] += 32;
    }
    printf("Lowercase: %s\n", lower);

    // 4. Lists (Arrays)
    printf("\n=== Lists ===\n");
    const char *fruits[5] = {"apple", "banana", "orange", "grape", "mango"};
    int fruits_count = 5;
    printf("Fruits list: ");
    for (int i = 0; i < fruits_count; i++) {
        printf("%s%s", fruits[i], (i < fruits_count - 1) ? ", " : "\n");
    }
    printf("First fruit: %s\n", fruits[0]);
    printf("Last fruit: %s\n", fruits[fruits_count - 1]);
    printf("After adding mango: ");
    for (int i = 0; i < fruits_count; i++) {
        printf("%s%s", fruits[i], (i < fruits_count - 1) ? ", " : "\n");
    }

    // 5. Conditional Statements
    printf("\n=== Conditional Statements ===\n");
    int score = 85;
    char grade;
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else grade = 'F';
    printf("Score: %d, Grade: %c\n", score, grade);

    // 6. Loops
    printf("\n=== Loops ===\n");
    printf("Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("  %d\n", i);
    }
    printf("Fruits in the list:\n");
    for (int i = 0; i < fruits_count; i++) {
        printf("  - %s\n", fruits[i]);
    }

    // 7. Functions
    printf("\n=== Functions ===\n");
    greet("Alice");
    printf("Area of rectangle (5 x 3): %d\n", calculate_area(5, 3));

    // 8. Dictionary (struct)
    printf("\n=== Dictionary ===\n");
    struct Person {
        char name[20];
        int age;
        char city[20];
        const char *skills[3];
    } person = {"Alice", 30, "New York", {"C", "JavaScript", "SQL"}};

    printf("Person info: {name: %s, age: %d, city: %s, skills: [%s, %s, %s]}\n",
           person.name, person.age, person.city,
           person.skills[0], person.skills[1], person.skills[2]);
    printf("Name: %s\n", person.name);
    printf("Skills: %s, %s, %s\n", person.skills[0], person.skills[1], person.skills[2]);

    // 9. User Input
    printf("\n=== User Input ===\n");
    char user_name[50];
    char user_age[10];
    printf("Enter your name: ");
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strcspn(user_name, "\n")] = 0; // Remove newline
    printf("Enter your age: ");
    fgets(user_age, sizeof(user_age), stdin);
    user_age[strcspn(user_age, "\n")] = 0;
    printf("Hello %s, you are %s years old!\n", user_name, user_age);

    printf("Basic C examples completed!\n");
    printf("Try editing the user input section to practice interactive programming.\n");

    // 10. Tuples (struct)
    printf("\n=== Tuples ===\n");
    struct {
        int x, y;
    } coordinates = {10, 20};
    printf("Coordinates: (%d, %d)\n", coordinates.x, coordinates.y);
    printf("X: %d, Y: %d\n", coordinates.x, coordinates.y);

    // 11. Sets (simulate with array and unique check)
    printf("\n=== Sets ===\n");
    int numbers[] = {1, 2, 3, 2, 1};
    int unique[5], unique_count = 0;
    for (int i = 0; i < 5; i++) {
        int found = 0;
        for (int j = 0; j < unique_count; j++) {
            if (numbers[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found) unique[unique_count++] = numbers[i];
    }
    printf("Unique numbers: {");
    for (int i = 0; i < unique_count; i++) {
        printf("%d%s", unique[i], (i < unique_count - 1) ? ", " : "}\n");
    }

    // 12. Simple Loop with While
    printf("\n=== While Loop ===\n");
    int count = 0;
    while (count < 3) {
        printf("Count is %d\n", count);
        count++;
    }

    // 13. List Comprehension (simulate)
    printf("\n=== List Comprehension ===\n");
    int squares[5];
    for (int i = 0; i < 5; i++) {
        squares[i] = i * i;
    }
    printf("Squares: [");
    for (int i = 0; i < 5; i++) {
        printf("%d%s", squares[i], (i < 4) ? ", " : "]\n");
    }

    // 14. Looping through a dictionary (struct fields)
    printf("\n=== Looping through a Dictionary ===\n");
    printf("name: %s\n", person.name);
    printf("age: %d\n", person.age);
    printf("city: %s\n", person.city);
    printf("skills: %s, %s, %s\n", person.skills[0], person.skills[1], person.skills[2]);

    return 0;
}