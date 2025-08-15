fun main() {
    // Input
    print("Enter your name: ")
    val name = readLine() ?: ""
    print("Enter your age: ")
    val age = readLine()?.toIntOrNull() ?: 0

    // Output
    println("Hello, my name is $name and I am $age years old.")
    // Conditional logic
    if (age < 18) {
        println("You are a minor.")
    } else {
        println("You are an adult.")
    }
    // Loop example
    println("Counting down from 5:")    
    for (i in 5 downTo 1) {
        println(i)
    }
}
