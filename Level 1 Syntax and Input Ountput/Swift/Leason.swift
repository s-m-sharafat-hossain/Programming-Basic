import Foundation

// Variables and Constants
var name: String = "Alice"
let age: Int = 25

// Data Types
let pi: Double = 3.14159
let isSwiftFun: Bool = true

// String Interpolation
print("Hello, \(name)! You are \(age) years old.")

// Arrays
var numbers: [Int] = [1, 2, 3, 4, 5]
numbers.append(6)

// Dictionaries
var capitals: [String: String] = ["France": "Paris", "Japan": "Tokyo"]
capitals["India"] = "New Delhi"

// Functions
func greet(person: String) -> String {
    return "Hello, \(person)!"
}
print(greet(person: name))

// Conditional Statements
if age >= 18 {
    print("You are an adult.")
} else {
    print("You are a minor.")
}

// Loops
for number in numbers {
    print("Number: \(number)")
}

var count = 0
while count < 3 {
    print("Count: \(count)")
    count += 1
}

// Optionals
var optionalName: String? = nil
optionalName = "Bob"
if let unwrappedName = optionalName {
    print("Optional name is \(unwrappedName)")
}

// Structs
struct Person {
    var name: String
    var age: Int
}
let person1 = Person(name: "Carol", age: 30)
print("Person: \(person1.name), Age: \(person1.age)")

// Classes
class Animal {
    var name: String
    init(name: String) {
        self.name = name
    }
    func speak() {
        print("\(name) makes a sound.")
    }
}
let dog = Animal(name: "Dog")
dog.speak()