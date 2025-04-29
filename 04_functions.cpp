/*
  FUNCTIONS IN C++:
  *****************

  - A function is a block of code designed to perform a specific task.
  - Functions help organize and reuse code efficiently.
  - Every C++ program has at least one function: main().
  - Functions can take inputs (parameters) and return outputs.

  LINK: https://www.cplusplus.com/doc/tutorial/functions/
*/

#include <iostream>  // Include the input-output stream library for cin and cout
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

/*
  Function Declaration
  ---------------------
  Function Name: greetUser
  Description: This function prints a greeting message to the user.
  Parameters: None
  Return Type: void (this function does not return a value)
*/
void greetUser()
{
  // This function outputs a greeting message
  cout << "Hello! Welcome to learning functions in C++." << endl;
}

/*
  Function with Parameters
  -------------------------
  Function Name: addNumbers
  Description: This function takes two integer inputs and returns their sum.
  Parameters:
    - int a: The first number to be added
    - int b: The second number to be added
  Return Type: int (returns the sum of the two numbers)
*/
int addNumbers(int a, int b)
{
  // The function adds the two numbers 'a' and 'b' and returns the sum
  return a + b; // The sum of a and b is returned to the caller
}

// MAIN FUNCTION
int main()
{
  // Calling a function that doesn't take parameters (greetUser)
  greetUser(); // This function call simply prints the greeting message

  // Calling a function that takes parameters (addNumbers)
  int result = addNumbers(5, 7);                       // We call the function with arguments 5 and 7
  cout << "The sum of 5 and 7 is: " << result << endl; // Output the result of the function

  return 0; // Return 0 to indicate successful execution of the program
}

/*
  NOTE:
  - A function must be declared before it is used (or defined above main()).
    - A function declaration (or prototype) specifies the function's name, return type, and parameters.
  - The main() function is where execution starts in a C++ program.
  - Functions allow code reuse, help avoid duplication, and make the program modular.
    - For example, the greetUser() function can be reused in multiple places without rewriting the same code.
    - The addNumbers() function helps us to calculate the sum of two numbers anywhere in the program, simply by passing new arguments.
  - Functions are a key part of writing clean, efficient, and maintainable code in C++.
*/