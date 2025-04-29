/*
  CONDITIONAL STATEMENTS IN C++
  *****************************

  - Conditional statements allow a program to make decisions based on conditions.
  - The most common conditional statements are:
    1. if statement
    2. if-else statement
    3. if-else if-else statement
    4. switch statement (covered later)

  LINK: https://www.w3schools.com/cpp/cpp_conditions.asp
*/

#include <iostream>  // Include the input-output stream library for cin and cout
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

int main()
{
    int num; // Declare a variable to store user input

    // Asking user for input
    cout << "Enter a number: ";
    cin >> num; // Read input from user and store it in the variable 'num'

    // Example 1: if statement (checks if a condition is true)
    /*
    The 'if' statement checks if the condition inside the parentheses is true.
    If the condition is true, the block of code within the braces is executed.
    */
    if (num > 0)
    {
        cout << "The number is positive.\n"; // This message will be printed if num is greater than 0
    }

    // Example 2: if-else statement (checks two conditions: true or false)
    /*
    The 'if-else' statement allows you to check if a condition is true.
    If the condition is true, the first block of code is executed; otherwise, the code in the 'else' block runs.
    */
    if (num % 2 == 0) // 'num % 2' checks if the number is divisible by 2 (even number)
    {
        cout << "The number is even.\n"; // This message will be printed if num is even
    }
    else
    {
        cout << "The number is odd.\n"; // This message will be printed if num is odd (if num % 2 != 0)
    }

    // Example 3: if-else if-else statement (checks multiple conditions)
    /*
    The 'if-else if-else' statement allows you to check multiple conditions in sequence.
    It evaluates the conditions one by one, and the first true condition executes its corresponding block.
    If none of the conditions are true, the 'else' block will run.
    */
    if (num > 0) // First condition: check if num is greater than 0 (positive number)
    {
        cout << "The number is positive.\n"; // Prints if num is positive
    }
    else if (num < 0) // Second condition: check if num is less than 0 (negative number)
    {
        cout << "The number is negative.\n"; // Prints if num is negative
    }
    else
    {
        cout << "The number is zero.\n"; // This runs if num is neither positive nor negative (i.e., zero)
    }

    return 0; // Return 0 to indicate successful program execution
}

/*
  NOTE:
  - The 'if' statement runs the block of code if the condition inside ( ) is true.
  - The 'else' block runs if the condition is false.
  - The 'else if' allows checking multiple conditions in sequence.
  - The modulus operator '%' returns the remainder of a division. For example, 5 % 2 gives 1, which means 5 is odd, while 6 % 2 gives 0, which means 6 is even.

  PRACTICE TASK:
  - Modify this program to also check if the number is a multiple of 5.
*/