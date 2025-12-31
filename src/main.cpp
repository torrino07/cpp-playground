
#include <iostream>
#include "math.hpp"
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
//pairlista_t ends with underscore 'a' to differentiate from typedef version

using pairlista_t = std::vector<std::pair<std::string, int>>;
using texta_t = std::string;
using numbera_t = int;

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}

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


    // 5 arithmetic operations    int a = 10;
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

    
    return 0;
}