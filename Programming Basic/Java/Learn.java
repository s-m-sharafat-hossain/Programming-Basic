import java.util.*;

public class Learn {
    static void greet(String name) {
        System.out.println("Hello, " + name + "! Welcome to Java!");
    }

    static int calculateArea(int length, int width) {
        return length * width;
    }

    static class Person {
        String name;
        int age;
        String city;
        List<String> skills;

        Person(String name, int age, String city, List<String> skills) {
            this.name = name;
            this.age = age;
            this.city = city;
            this.skills = skills;
        }
    }

    public static void main(String[] args) {
        // 1. Variables and Data Types
        System.out.println("=== Variables and Data Types ===");
        String name = "Java Learner";
        int age = 25;
        float height = 5.9f;
        boolean isStudent = true;

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height);
        System.out.println("Is Student: " + (isStudent ? "true" : "false"));

        // 2. Basic Operations
        System.out.println("\n=== Basic Operations ===");
        int a = 10, b = 3;
        System.out.println("Addition: " + a + " + " + b + " = " + (a + b));
        System.out.println("Subtraction: " + a + " - " + b + " = " + (a - b));
        System.out.println("Multiplication: " + a + " * " + b + " = " + (a * b));
        System.out.println("Division: " + a + " / " + b + " = " + ((float)a / b));
        System.out.println("Floor Division: " + a + " // " + b + " = " + (a / b));
        System.out.println("Modulus: " + a + " % " + b + " = " + (a % b));

        // Power
        int power = 1;
        for (int i = 0; i < b; i++) power *= a;
        System.out.println("Power: " + a + " ** " + b + " = " + power);

        // 3. String Operations
        System.out.println("\n=== String Operations ===");
        String firstName = "John";
        String lastName = "Doe";
        String fullName = firstName + " " + lastName;
        System.out.println("Full name: " + fullName);
        System.out.println("Name length: " + fullName.length());

        // Uppercase
        String upper = fullName.toUpperCase();
        System.out.println("Uppercase: " + upper);

        // Lowercase
        String lower = fullName.toLowerCase();
        System.out.println("Lowercase: " + lower);

        // 4. Lists (ArrayList)
        System.out.println("\n=== Lists ===");
        List<String> fruits = new ArrayList<>(Arrays.asList("apple", "banana", "orange", "grape", "mango"));
        System.out.print("Fruits list: ");
        for (int i = 0; i < fruits.size(); ++i) {
            System.out.print(fruits.get(i) + (i < fruits.size() - 1 ? ", " : "\n"));
        }
        System.out.println("First fruit: " + fruits.get(0));
        System.out.println("Last fruit: " + fruits.get(fruits.size() - 1));
        System.out.print("After adding mango: ");
        for (int i = 0; i < fruits.size(); ++i) {
            System.out.print(fruits.get(i) + (i < fruits.size() - 1 ? ", " : "\n"));
        }

        // 5. Conditional Statements
        System.out.println("\n=== Conditional Statements ===");
        int score = 85;
        char grade;
        if (score >= 90) grade = 'A';
        else if (score >= 80) grade = 'B';
        else if (score >= 70) grade = 'C';
        else grade = 'F';
        System.out.println("Score: " + score + ", Grade: " + grade);

        // 6. Loops
        System.out.println("\n=== Loops ===");
        System.out.println("Counting from 1 to 5:");
        for (int i = 1; i <= 5; i++) {
            System.out.println("  " + i);
        }
        System.out.println("Fruits in the list:");
        for (String fruit : fruits) {
            System.out.println("  - " + fruit);
        }

        // 7. Functions
        System.out.println("\n=== Functions ===");
        greet("Alice");
        System.out.println("Area of rectangle (5 x 3): " + calculateArea(5, 3));

        // 8. Dictionary (class)
        System.out.println("\n=== Dictionary ===");
        Person person = new Person("Alice", 30, "New York", Arrays.asList("Java", "JavaScript", "SQL"));
        System.out.println("Person info: {name: " + person.name + ", age: " + person.age
                + ", city: " + person.city + ", skills: ["
                + person.skills.get(0) + ", " + person.skills.get(1) + ", " + person.skills.get(2) + "]}");
        System.out.println("Name: " + person.name);
        System.out.println("Skills: " + person.skills.get(0) + ", " + person.skills.get(1) + ", " + person.skills.get(2));

        // 9. User Input
        System.out.println("\n=== User Input ===");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String userName = scanner.nextLine();
        System.out.print("Enter your age: ");
        String userAge = scanner.nextLine();
        System.out.println("Hello " + userName + ", you are " + userAge + " years old!");

        System.out.println("Basic Java examples completed!");
        System.out.println("Try editing the user input section to practice interactive programming.");

        // 10. Tuples (anonymous class)
        System.out.println("\n=== Tuples ===");
        class Coordinates {
            int x, y;
            Coordinates(int x, int y) { this.x = x; this.y = y; }
        }
        Coordinates coordinates = new Coordinates(10, 20);
        System.out.println("Coordinates: (" + coordinates.x + ", " + coordinates.y + ")");
        System.out.println("X: " + coordinates.x + ", Y: " + coordinates.y);

        // 11. Sets (HashSet)
        System.out.println("\n=== Sets ===");
        List<Integer> numbers = Arrays.asList(1, 2, 3, 2, 1);
        Set<Integer> unique = new HashSet<>(numbers);
        System.out.print("Unique numbers: {");
        int idx = 0;
        for (int num : unique) {
            System.out.print(num + (idx < unique.size() - 1 ? ", " : "}\n"));
            idx++;
        }

        // 12. Simple Loop with While
        System.out.println("\n=== While Loop ===");
        int count = 0;
        while (count < 3) {
            System.out.println("Count is " + count);
            count++;
        }

        // 13. List Comprehension (simulate)
        System.out.println("\n=== List Comprehension ===");
        List<Integer> squares = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            squares.add(i * i);
        }
        System.out.print("Squares: [");
        for (int i = 0; i < squares.size(); i++) {
            System.out.print(squares.get(i) + (i < squares.size() - 1 ? ", " : "]\n"));
        }

        // 14. Looping through a dictionary (class fields)
        System.out.println("\n=== Looping through a Dictionary ===");
        System.out.println("name: " + person.name);
        System.out.println("age: " + person.age);
        System.out.println("city: " + person.city);
        System.out.println("skills: " + person.skills.get(0) + ", " + person.skills.get(1) + ", " + person.skills.get(2));
    }
}
