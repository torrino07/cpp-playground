
#include <iostream>
#include "math.hpp"
#include <vector>
#include <cmath>
#include <ctime>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
//pairlista_t ends with underscore 'a' to differentiate from typedef version

using pairlista_t = std::vector<std::pair<std::string, int>>;
using texta_t = std::string;
using numbera_t = int;

class Shape {
    public:
        double area;
        double volume;
}

class Cube : public Shape{
    public:
        double side;
    Cube(double s) {
        this->side = s;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape {
    public:
        double radius;
    Sphere(double r) {
        this->radius = r;
        this->area = 4 * 3.14159 * radius * radius;
        this->volume = (4/3) * 3.14159 * radius * radius * radius;
    }
}

class Animal {
    public:
        bool alive = true;

    void eat() {
        std::cout << "This animal is eating\n";
    }
}

class Dog : public Animal { // Dog class inherits from Animal class
    public:
        std::string breed;
        std::string color;

    void bark() {
        std::cout << "Woof Woof\n";
    }

}

class Cat : public Animal {
    public:
        std::string breed;
        std::string color;

    void meow() {
        std::cout << "Meow Meow\n";
    }

}

class Stove {
    public:
        int temperature = 0; // public attribute so people can change it directly

    bool getOn() {
        return on;
    }

    void setOn(bool status) {
        this->on = status;
    }
    
    private:
        bool on = false; // private attribute so people cannot change it directly

}

class Pizza {
    public:
        std::string topping1;
        std:: string topping2;

    Pizza() {
        // this will make error go away if no arguments are passed when you initialized an object with no parameters in this case no toppings
    }
    
    Pizza(std::string t1) {
        this->topping1 = t1;
    }

    Pizza(std::string t1, std::string t2) {
        this->topping1 = t1;
        this->topping2 = t2;
    }
};

class Student {
    public:
        std::string name;
        int age;
        double gpa;
        bool enrolled;
    
        Student(std::string n, int a, double g, bool e) {
            this->name = n;
            this->age = a;
            this->gpa = g;
            this->enrolled = e;
        }
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        double price;
        bool used;

        void start() {
            std::cout << "The car is starting\n";
        }

        void stop() {
            std::cout << "The car is stopping\n";
        }
};

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "This person is eating\n";
        }

        void drink() {
            std::cout << "This person is drinking\n";
        }

        void sleep() {
            std::cout << "This person is sleeping\n";
        }

}

enum Day {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};
struct Car {
    std::string make;
    std::string model;
    int year;
    double price;
    bool used;
}
struct student {
    std::string name;
    int age;
    double gpa;
    bool enrolled;
};

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}

void greet(std::string name);

double square(double length);

double getTotal(double prices[], int size)

int numberV = 54; // global variable
int main() {
    std::cout << "add(2, 3) = " << add(2, 3) << "\n";
    std::cout << "sum([1,2,3]) = " << sum({1,2,3}) << "\n";


    //1. variables

    int x = 5; //declaration and assignment
    int y = 6; //declaration and assignment
    int z = x + y; //declaration and assignment

    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; // This will be truncated to 7

    //double (floating point number)
    double pi = 3.14127;
    double gpa = 2.5;
    double temperature = 98.6;

    //single character
    char grade = 'A';
    char letter = 'B';
    char symbol = '#i'; //overlong character literal, will take only the first character

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (text) (we can store more than one character)
    std::string name = "Alice";
    std::string city = "Wonderland";

    std::cout << "Name: " << name << ", City: " << city << "\n";

    //2. constants (if you do not want changeable variables add const keyword)
    // data security error if you try to change a constant variable. read only

    const double pi = 3.14;
    const double radius = 10;
    const double circumference = 2*pi*radius;

    //3. namespace: provides solution to avoid name conflicts in large projects
    // std is the standard namespace that contains all standard C++ library functions and objects

    int x = 0;
    // int x = 1; // Error: redefinition of 'x'

    std::cout << first::x; // Accessing x from the first namespace
    std::cout << second::x; // Accessing x from the second namespace
    std::cout << x; // Accessing the local x

    using namespace first;
    std::cout << x; // Accessing x from the first namespace directly
    //so for using second namespace we have to use second::x
    std::cout << second::x; // Accessing x from the second namespace directly


    //4.a typedef: used to create new names (aliases) for existing types reduces types, improves readability

    pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << " is " << age << " years old.\n";

    //4.b type alias: another way to create type aliases using the 'using' keyword


    //5 arithmetic operations    int a = 10;
    int students = 30;

    //students+=1;
    //students-=1;
    //students++1;
    //students--;
    //students*=2;
    //students/=2;
    //students/=3;

    // remainder operator %
    int remainder = 10 % 3; // remainder is 1

    std::cout << remainder << "\n";

    // 6 type inversion explicit and implicit: automatic type conversion by compiler is implicit type conversion
    

    double x = (int) 3.14; // explicit type conversion (casting)

    char x = 100; // implicit type conversion from int to char
    int y = 'A'; // implicit type conversion from char to int

    std::cout << "x = " << x << ", y = " << y << "\n";

    //example 
    int correct = 8;
    int questions = 10;
    double score = correct / questions * 100; // explicit type conversion

    // this will give wrong result because both correct and questions are integers
    std::cout << "Score: " << score << "%\n";

    // 7 user input cout << (insertion operator), cin >> (extraction operator)

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << "\n";

    // std::getline(std::cin, name); // to take input with spaces


    // 8 useful math functions

    double x = 3;
    double y = 5;
    double z;

    // z = std::min(x, y); // z is 3
    // z = std::max(x, y); // z is 5
    // z = std::abs(-x); // z is 3
    z = pow(x, y); // z is 243 (3^5)

    // 9 program hypothenusa

    // double a;
    // double b;
    // double c;

    // std::cout << "Enter side a: ";
    // std::cin >> a;
    // std::cout << "Enter side b: ";
    // std::cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);

    // std::cout << "side C: " << c << "\n";

    //10 if statements

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a minor.\n";
    }

    //11 switch statements: more efficinet and easier to read when dealing with multiple conditions based on a single variable

    int month;

    std::cout << "Enter month number (1-12): ";

    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "January\n";
            break;
        case 2:
            std::cout << "February\n";
            break;
        case 3:
            std::cout << "March\n";
            break;
        case 4:
            std::cout << "April\n";
            break;
        case 5:
            std::cout << "May\n";
            break;
        case 6:
            std::cout << "June\n";
            break;
        case 7:
            std::cout << "July\n";
            break;
        case 8:
            std::cout << "August\n";
            break;
        case 9:
            std::cout << "September\n";
            break;
        case 10:
            std::cout << "October\n";
            break;
        case 11:
            std::cout << "November\n";
            break;
        case 12:
            std::cout << "December\n";
            break;
        default:
            std::cout << "Invalid month number.\n";
    }


    //12 console calculation op switch

    //14 ?: ternary operator as a replacement for simple if-else statements
    // condition ? expression_if_true : expression_if_false

    int grade = 75;
    grade >= 60 ? std::cout << "Pass\n" : std::cout << "Fail\n";

    int number = 8;
    number % 2 ? std::cout << "Odd\n" : std::cout << "Even\n";
    
    bool hungry = true;
    std::cout << (hungry ? "Eat something\n" : "Keep working\n");

    //15 logical operators: used to combine multiple conditions
    //&& (logical AND), || (logical OR), ! (logical NOT)

    int temp;
    std::cout << "Enter the temperature: "
    std::cin >> temp;

    if (temp <= 0 || temp >= 30) {
        std::cout << "The weather is nice.\n";
    } else {
        std::cout << "The weather is not nice.\n";
    }

    // if (!sunny){}

    // 16 useful string methods in c++

    std::string name;
    std::cout << "Enter your name: ";
    std::geline(std::cin, name);

    if(name.length() > 10){
        std::cout << "Your name is too long.\n";
    } else {
        std::cout << "Your name is acceptable.\n";
    }

    //name.empty() name.clear() name.find() name.substr() name.replace() name.insert() name.erase(0,3) name.append() name.at(0) name.compare()

    // 18 while loops

    while(name.empty()){
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
    }

    //19 do while loops

    do {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
    } while (name.empty());

    return 0;

    //20 for loops

    for (int i = 1; i <= 3; i+=2) {
        std::cout << "Loop iteration: " << i << "\n";
    }

    for (int i = 10; i <= 10; i-=2) {
        std::cout << "Loop iteration: " << i << "\n";
    }

    //21 break and continue statements
    // break: exit the loop immediately
    // continue: skip the current iteration


    //22 nested loop


    //23 generate pseudo-random number

    srand(time(NULL)); // seed the random number generator

    int num = (rand() % 6) + 1;

    std::cout << num;

    //25 why in guessing game we need do while loop instead of while loop
    // because we want to execute the loop at least once to get user input before checking the condition
    // in while loop, the condition is checked before executing the loop body, so if the condition is false initially, the loop body will not execute at all
    // in do while loop, the loop body is executed first, and then the condition is checked, ensuring that the loop body runs at least once regardless of the condition

    // 26 function = a block of reusable code

    std::string name = "Bro";
    greet(name);

    // 27 return keyword

    double length = 5.0;
    double area = square(length);
    std::cout << "Area of square with length " << length << " is " << area << "\n";

    // 28 overload functions
    // function can share same name but you need different set of parameters
    // a function signature is made up of the function's name and parameter list (type, number, and order of parameters) and must be unique
    // function signature example: void bakePizza() and void bakePizza(std::string topping)
    // Function signature example
    // int add(int a, int b);
    // Function signature (declaration)
    //int add(int a, int b);
    // Function definition
    // int add(int a, int b) {
    //     return a + b;
    // }


    bakePizza();
    bakePizza("pepperoni");
    bakePizza("mushrooms", 12);

    // 29 variables scope

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside all functions

    int numberV = 10

    std::cout << ::numberV << "\n"; // Accessing global variable
    // what is ::numberV
    // ::numberV refers to the global variable named numberV, which is declared outside all functions
    // global vars are less safe so still better to use local vars when possible

    //30 array = a data structure that can hold multiple values of the same type
    // values are accessed by an index number

    std::string car[] = {"Corvette", "Ford", "BMW"}; // array of strings

    // or std::string cars[];
    // cars[0] = "Corvette";
    // cars[1] = "Ford";
    // cars[2] = "BMW";

    std::cout << car; // prints memory address of the first element
    std::cout << car[0] << "\n"; 

    double prices[] = {5.00, 7.58, 9.89};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";

    //31 Sizeof() operator: returns the size in bytes of a data type or variable

    std::string name = "Bro"; // string is reference type because it stores a reference to the actual data
    double age = 2.1;

    // char takes 1 byte
    // bool takes 1 byte
    // int takes 4 bytes
    // float takes 4 bytes
    // double takes 8 bytes more precise than float

    // std::string implementation-defined and dependes on the standard library and architecture
    // string takes 32 24 bytes (on 64-bit systems)
    // string takes 24 12 16 bytes on a 32-bit system

    // pointers take 8 bytes on 64-bit systems
    // pointers take 4 bytes on 32-bit systems

    // array size depends on the number of elements and the size of each element

    //dynamic allocation: new allocates memory on the heap, but sizeof() only gives the size of the type, not the allocated block.
    //int* p = new int[10];
    //std::cout << sizeof(p); // 8 bytes (pointer), NOT 40 bytes

    std::cout << sizeof(double) << " bytes\n"; // size of double data type

    // what does sizeof(car)/size(std::string) do 
    // sizeof(car) gives the total size of the array in bytes
    // sizeof(std::string) gives the size of a single std::string element
    // dividing them gives the number of elements in the array

    //32 iterate on arrays with loops

    for (int i = 0; i < sizeof(car)/sizeof(std::string); i++) {
        std::cout << car[i] << "\n";
    }

    for (int i = 0; i < sizeof(prices)/sizeof(double); i++) {
        std::cout << prices[i] << "\n";
    }

    //33 for each loop: simplified syntax for iterating over arrays and collections
    // syntax: for (data_type variable : collection) { // code to be executed }
    // less sytax but less flexible
    for (std::string c : car) {
        std::cout << c << "\n";
    }

    //34 pass array to a function

    double prices[] = {5.00, 7.58, 9.89};

    double total = getTotal(prices, sizeof(prices)/sizeof(double));
    // why do we pass the size of the array as a separate parameter
    // because when we pass an array to a function, it decays to a pointer to its first element
    // so the function does not have information about the size of the array
    // therefore, we need to pass the size of the array as a separate parameter to know how many elements to process
    // why pointers do not carry size information
    // pointers are simply memory addresses that point to a location in memory
    // they do not have any metadata about the size of the memory block they point to
    // what is meant by decay to a pointer
    // when an array is passed to a function, it is treated as a pointer to its first element
    // this means that the function receives a pointer, not the entire array
    // so we first calculate the prices size and then pass it to the function



    std::cout << "Total price: " << total << "\n";


    //notes: scope and global variables

    // 37 search an array for an element

    int numbers[] = {4, 8, 15, 16, 23, 42};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == myNum) {
            index = i;
            break;
        }
    }

    std::cout << "Element found at index: " << index << "\n";


    //notes: what does getline(std::cin, myName) do
    // getline(std::cin, myName) reads an entire line of input from the standard
    // input (std::cin) and stores it in the string variable myName
    // it allows the user to input strings with spaces, unlike std::cin >> myName
    // what does this means that alllows the user to input strings with spaces
    // it means that the user can enter a full name or sentence with spaces
    // and getline will capture the entire input until the newline character is encountered
    // why until newline character is encountered
    // because getline reads input until it finds a newline character ('\n')
    // which indicates the end of the line
    // how to indicate spaces in input
    // spaces are simply typed as part of the input
    // for example, if the user types "John Doe" and presses Enter,
    // getline will capture the entire string "John Doe" including the space
    // what is the difference between std::cin >> myName and getline(std::cin, myName)
    // std::cin >> myName reads input until the first whitespace character (space, tab, newline)
    // while getline(std::cin, myName) reads the entire line including spaces
    // can std::cin >> myName read "John Doe"
    // yes, it can, but it will only read "John" and ignore "Doe"

    //38 sort an array

    //39 fill() = fills a range of elements with a specified value fill(begin, end, value)

    const SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "Pizza");

    for(std::string food : foods){
        std::cout << food << "\n";
    }

    //41 multidim arrays = arrays with more than one dimension (2D, 3D, etc.)

    std::string cars[][4] = {{"Mustang", "F-150", "F-150"},
                             {"Corvette", "Camaro", "Silverado"},
                             {"BMW", "Audi", "Mercedes"}};

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << " ";

    //43 memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;
    std::cout << "Name: " << &name << "\n"; // prints memory address of name variable in hexadecimal

    //44 pass by VALUE vs pass by REFERENCE (TO DO)

    // to swap two variables we need a temp variable
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "x: " << x << ", y: " << y << "\n";

    // now use a functionn to swap two variables

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "x: " << x << ", y: " << y << "\n";
    // what happens if we do not use reference parameters
    // if we do not use reference parameters, the swap function will only swap copies of the variables
    // and the original variables in main() will remain unchanged
    // so the output will be:
    // x: Kool-Aid, y: Water
    // instead of:
    // x: Water, y: Kool-Aid
    // sorry why it does not swap if we do copy
    // because in C++, function parameters are passed by value by default
    // this means that when we pass variables to a function, copies of the variables are created
    // and any changes made to the parameters inside the function do not affect the original variables
    // to modify the original variables, we need to pass them by reference using the & operator

    //45 const parameter = parameter that is effectively read-only code is more secure & conveys intent useful for references and pointers

    // 47 pointers = variable that stores a memory address of another variable sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    std::string *pName = &name; // pointer to string variable name

    std::cout << pName; // prints memory address of name variable
    std::cout << *pName; // dereferencing pointer to get value at that address


    std::string freePizzas[5] = {"Pepperoni", "Mushroom", "Cheese", "Sausage", "Veggie"};
    std::string *pFood = freePizzas; // pointer to the first element . no need for & because array name is already a memory address
    std::cout << pFood << "\n"; // prints memory address of first element
    std::cout << *pFood << "\n"; // dereferencing pointer to get value

    // 48 Null pointers
    // Null value = a special value that means something has no value
    // when a pointer is holding a null value,
    // that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was assigned to a pointer or not


    // extra notes
    // when using pointers, be careful that your code isn't
    // dereferencing a null or pointing to free memory
    // this will cause undefined behavior and likely crash your program

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "Pointer is null.\n";
        //
    } else {
        std::cout << "Pointer is not null.\n";
        std::cout << "Value at pointer: " << *pointer << "\n";
    }

    //50 dynamic memory: memory that is allocated after the program
    // is already compiled & running.
    // use the 'new' operator to allocate memory in the heap rather than the stack

    // Useful when we don't know how much memory
    // we will need. Makes our programs more flexible
    // specially when accepting user input

    int *pNum = NULL;
    pNum = new int;

    *pNum = 42;

    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum; // free the memory allocated with new
    // why do we delete pNum
    // we delete pNum to free the memory that was allocated on the heap using new
    // if we do not delete it, we will have a memory leak
    // what is a memory leak
    // a memory leak occurs when dynamically allocated memory is not freed
    // leading to wasted memory resources and potential program crashes

    char *pGrades = NULL;

    pGrades = new char[5]; // when we do not know how much memory we need


    //51 recursion:  a programming technique where a function invokes itself from within break a complex concept into a repeatable single step
    //iterative vs recursive
    //advantages = less code and is cleaner. useful for sorting and searching algorithms

    //disadvantages = uses more memory so -> slower

    // stackoverflow when the program uses more stack memory than available

    // 52 function templates
    // describes what a function looks like. it can be used to generate as many overloaded functions as needed
    // each using different data types

    std::cout <<max(1,2) << "\n"; // calls max<int>
    // if i want to use with doubles
    // i nwould normally use overloaded function with different parameters (types in this case)

    // so what if we could write one fucntion that accepts any data type
    // 2 and 2.1 matching? you are passing two different data types so add another typename parameter!
    // it's like cookie cutter function so you don't need different versions of the same fucntion

    // 53 structs = a user-defined data type that allows grouping related variables of different types under a single name
    // a struct is a structure that groups related variables under one name for easier handling
    // variables in a struct are known as "members"
    //members can be access with "Class member access operation"

    student student1;
    student1.name = "Bro";
    student1.age = 21;
    student1.gpa = 2.5;
    student.enrolled = true;

    std::cout << "Name: " << student1.name << "\n";
    std::cout << "Age: " << student1.age << "\n";
    std::cout << "GPA: " << student1.gpa << "\n";
    std::cout << "Enrolled: " << (student1.enrolled ? "Yes" : "No") << "\n";

    //54 pass structs to functions by value vs by reference

    Car car1;
    car1.make = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.price = 25000.0;
    car1.used = false;

    printCar(car1);

    //55 enums = a user-friendly data type that consists of paired named-integer constants.
    // GREAT if you have a set of potential options

    Day today = sunday;

    switch (today) {
        case SUNDAY:
            std::cout << "It's Sunday!\n";
            break;
        case MONDAY:
            std::cout << "It's Monday!\n";
            break;
        case TUESDAY:
            std::cout << "It's Tuesday!\n";
            break;
        case WEDNESDAY:
            std::cout << "It's Wednesday!\n";
            break;
        case THURSDAY:
            std::cout << "It's Thursday!\n";
            break;
        case FRIDAY:
            std::cout << "It's Friday!\n";
            break;
        case SATURDAY:
            std::cout << "It's Saturday!\n";
            break;
        default:
            std::cout << "Invalid day.\n";
    }

    //56 object oriented programming (OOP) = programming paradigm that uses "objects" to represent data and methods to manipulate that data.
    // a collection of attributes and methods
    // they can have characteristics and can perform actions
    // can be used to mimic real world items (ex. Phone, Book, Dog)
    //Created from a class which acts as 'blue-print

    // attributes are characteristics of objects (ex. color, size, shape)
    // methods are actions that objects can perform (ex. bark, run, jump)

    Human human1;
    human1.name = "Alice";
    human1.occupation = "Engineer";
    human1.age = 30;

    std::cout << human1.name << " is a " << human1.occupation << " and is " << human1.age << " years old.\n";

    // you can also add values to objects
    human1.eat();
    human1.drink();
    human1.sleep();

    Car car1;
    car1.make = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.price = 25000.0;
    car1.used = false;

    car1.start();
    car1.stop();

    // this is similar to structs but with added features like encapsulation, inheritance, and polymorphism
    
    //57 constructors: special method that is automatically called when an object is instantiated
    // useful for assigning values to attributes as arguments

    car1.make = "Honda";

    Student student1("Bro", 21, 2.5, true);

    std::cout << "Name: " << student1.name << "\n";
    std::cout << "Age: " << student1.age << "\n";
    std::cout << "GPA: " << student1.gpa << "\n";

    // why do we use this->name = n;
    // we use this->name = n; to differentiate between the class member variable 'name' and the constructor parameter 'n'
    // 'this' is a pointer that refers to the current object instance
    // by using this->name, we explicitly indicate that we are assigning the value of the parameter 'n' to the member variable 'name' of the current object

    //58 overload constructors: multiple constructors w/same name but different parameters
    // allow for varying arguments when instantiating objects

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushroom", "peppers");
    Pizza pizza3("sausage", "onions");

    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n";

    //59 getters and setters
    // Abstraction = hiding unnecessary data from outside a class (it's about attributes!)
    // Getters = function that makes a private attribute READABLE
    // Setters = function that makes a private attribute WRITABLE

    Stove stove1;
    stove1.setOn(true);

    std::cout << "Stove is on: " << stove1.getOn() << "\n";

    //60. Inheritance a class can receive attributes and methods from another class
    // children classes inherit from a Parent class (base class)
    // promotes code reusability and establishes a hierarchical relationship between classes

    Dog dog1;
    Cat cat1;

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    //Vectors, Polymorphism, STL, Smart Pointers, and modern C++23 features.


    //also treat these topics
    // encapsulation = bundling data and methods that operate on that data within a single unit
    // inheritance = mechanism where a new class can inherit properties and methods from an existing class
    // polymorphism = ability of different classes to be treated as instances of the same class through a common interface



    /// notes 
    // int * pX = &x; // x by reference instead of by value
    // int y = *pX; // dereferencing pointer to get value at that address
    return 0;
}
//const Car car if this then you create copy of car1
void printCar(Car& car) {
    std::cout << "Make: " << car.make << "\n";
    std::cout << "Model: " << car.model << "\n";
    std::cout << "Year: " << car.year << "\n";
    std::cout << "Price: $" << car.price << "\n";
    std::cout << "Used: " << (car.used ? "Yes" : "No") << "\n";
}

template<typename T, typename U>
T max(T x, T y) {
    return (x > y) ? x : y;
}

template<typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}
int max(int x, int y) {
    return (x > y) ? x : y;
}


int max(double x, double y) {
    return (x > y) ? x : y;
}

int max(char x, char y) {
    return (x > y) ? x : y;
}

void greet(std::string name) {
    std::cout << "Hello, " << name << "\n";
}

double square(double length) {
    return length * length;
}

void bakePizza() {
    std::cout << "Baking pizza...\n";
}

void bakePizza(std::string topping) {
    std::cout << "Baking pizza with " << topping << "...\n";
}

void bakePizza(std::string topping, int size) {
    std::cout << "Baking a " << size << " inch pizza with " << topping << "...\n";
}

double getTotal(double prices[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

void swap(std::string& x, std::string& y) {
    std::string temp = x;
    x = y;
    y = temp;
}

void printInfo(const)