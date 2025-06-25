#include <stdio.h>

#include <stdbool.h>  

// This program demonstrates the use of variables and data types in C.

int main() {

    printf("=== Variables and Data Types ===\n");

    char name[] = "C Learner"; // String (character array)
    int age = 25;                   // Integer
    float height = 5.9;
    double weight = 70.5;           // Double
    bool is_student = true;         // Boolean

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Weight: %.1f\n", weight);
    printf("Is Student: %s\n", is_student ? "true" : "false");
    return 0;
}