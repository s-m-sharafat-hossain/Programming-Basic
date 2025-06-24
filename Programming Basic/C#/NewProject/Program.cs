// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");
int number = 10;
double pi = 3.14;
char letter = 'A';
string name = "Alice";
bool isActive = true;
// User input example
Console.Write("Enter your favorite color: ");
string favoriteColor = Console.ReadLine();
Console.WriteLine("Your favorite color is " + favoriteColor + ".");

// Arithmetic operations
int sum = number + 5;
double product = pi * 2;

// Conditional statement
if (isActive)
{
    Console.WriteLine("Active user");
}
else
{
    Console.WriteLine("Inactive user");
}

// Loop example
for (int i = 0; i < 3; i++)
{
    Console.WriteLine("Loop iteration: " + i);
}

// Array example
int[] numbers = { 1, 2, 3, 4, 5 };
foreach (int n in numbers)
{
    Console.WriteLine("Number: " + n);
}

// Method example
PrintGreeting(name);

void PrintGreeting(string userName)
{
    Console.WriteLine("Hello, " + userName + "!");
}

// List example
List<string> fruits = new List<string> { "Apple", "Banana", "Cherry" };
foreach (string fruit in fruits)
{
    Console.WriteLine("Fruit: " + fruit);
}

// Switch statement example
switch (letter)
{
    case 'A':
        Console.WriteLine("First letter of the alphabet");
        break;
    case 'B':
        Console.WriteLine("Second letter of the alphabet");
        break;
    default:
        Console.WriteLine("Another letter");
        break;
}

// Try-catch example
try
{
    int result = number / 0;
}
catch (DivideByZeroException)
{
    Console.WriteLine("Cannot divide by zero!");
}

// Class example
Person person = new Person("Bob", 25);
person.Introduce();

class Person
{
    public string Name { get; set; }
    public int Age { get; set; }

    public Person(string name, int age)
    {
        Name = name;
        Age = age;
    }

    public void Introduce()
    {
        Console.WriteLine($"Hi, I'm {Name} and I'm {Age} years old.");
    }
}

