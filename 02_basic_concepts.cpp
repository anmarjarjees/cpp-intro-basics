/*

 Basic Programming Concepts:
 ***************************

 This file introduces fundamental programming concepts in C++:
 - Variables: Storing values
 - Data Types: Integer, Boolean, Float
 - Basic Input and Output (cin, cout)

 Links for reference:
 - Variables: https://www.w3schools.com/cpp/cpp_variables.asp
 - Data Types: https://www.w3schools.com/cpp/cpp_data_types.asp
 - Input/Output: https://www.w3schools.com/cpp/cpp_user_input.asp
*/

#include <iostream>  // Required for input and output operations (cin and cout)
using namespace std; // Allows us to use standard C++ functions without std:: prefix

int main()
{
    // 1. Variables and Data Types
    /*
    A variable is like a labeled box where we can store data.
    Each variable has:
    - a name (like 'age')
    - a type (like 'int' for integers)
    - a value (like 25)

    Data types tell the compiler what kind of data the variable will store:
    - int    : stores whole numbers (example: 10, -5)
    - float  : stores decimal numbers (example: 3.14)
    - bool   : stores true or false
    */

    int age = 25;          // Integer variable (whole number)
    float height = 5.9;    // Floating-point number (decimal values)
    bool isStudent = true; // Boolean (true or false)

    // 2. Output (Printing values to the console)
    /*
    The "cout" object is used to print output to the screen.
    The "<<" operator sends (streams) information to cout.
    The "endl" (end line) moves to a new line after printing.
    */
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Is Student: " << isStudent << endl; // Note: true prints as 1, false as 0

    // 3. Input (Getting user input)
    /*
    The "cin" object is used to receive user input from the keyboard.
    The ">>" operator stores what the user types into a variable.
    */
    int userAge; // Declaration of an integer variable without assigning a value yet
    cout << "Enter your age: ";
    cin >> userAge; // Takes input from the user and assigns it to the variable userAge
    cout << "You entered: " << userAge << " years old." << endl;

    /*
    return 0 means the program ended successfully.
    We use this as a standard practice in C++ to indicate that the main function ran without errors.
    */
    return 0;
}