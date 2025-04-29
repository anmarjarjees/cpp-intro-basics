/*
    Loops in Programming:
    *********************

    In programming, loops allow us to repeat a set of instructions multiple times.
    This helps automate repetitive tasks, making programs more efficient.

    Types of loops in C++:
    1. for loop - Executes a block of code a fixed number of times.
    2. while loop - Repeats while a condition is true.
    3. do-while loop - Executes at least once, then repeats while a condition is true.

    More details: https://cplusplus.com/doc/tutorial/control/#loops
*/

#include <iostream>  // Include the input-output stream library to use 'cout'
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

// Main function - Entry point of the program
int main()
{
    // 1) for loop: Used when the number of iterations is known
    // This loop prints numbers from 1 to 5
    cout << "for loop example:" << endl;

    /*
      A 'for' loop is ideal when you know the number of iterations in advance.
      It consists of three parts:
      1. Initialization: Set the starting value (example: i = 1)
      2. Condition: The loop will continue as long as this condition is true (i <= 5)
      3. Update: After each iteration, the loop variable is updated (i++).
    */
    for (int i = 1; i <= 5; i++) // Loop runs from 1 to 5
    {
        cout << "Iteration " << i << endl; // Print the current iteration number
    }
    cout << endl; // Print a blank line to separate examples

    // 2) while loop: Used when the number of iterations is not known in advance
    // This loop prints numbers from 1 to 5
    cout << "while loop example:" << endl;

    /*
      A 'while' loop runs as long as a specified condition is true.
      It is ideal when the number of iterations is not known beforehand.
      In this example, we initialize j to 1, and the loop runs while j <= 5.
    */
    int j = 1;     // Initialize variable before loop starts
    while (j <= 5) // Loop continues as long as this condition is true
    {
        cout << "Iteration " << j << endl; // Print the current iteration number
        j++;                               // Increment the variable to avoid an infinite loop
    }
    cout << endl; // Print a blank line to separate examples

    // 3) do-while loop: Similar to while loop, but executes at least once
    // This loop prints numbers from 1 to 5
    cout << "do-while loop example:" << endl;

    /*
      A 'do-while' loop guarantees that the loop will run at least once, even if the condition is false.
      It first executes the block of code, and only then checks the condition.
      This is useful when you want the loop to run at least once before checking the condition.
    */
    int k = 1; // Initialize variable before loop starts
    do
    {
        cout << "Iteration " << k << endl; // Print the current iteration number
        k++;                               // Increment the variable to avoid an infinite loop
    } while (k <= 5); // After the first iteration, check the condition and repeat if true
    cout << endl; // Print a blank line to separate examples

    return 0; // Return 0 to indicate the program ended successfully
}

/*
    How to run this program:
    1. Copy and paste this code into an online compiler or C++ IDE (example: VS Code, CodeBlocks).
    2. Compile and run the program.
    3. Observe how each loop executes and prints output.

    Key Takeaways:
    - Use 'for' loops when the number of iterations is known.
    - Use 'while' loops when the number of iterations is based on a condition.
    - Use 'do-while' loops when you need the code to run at least once.
*/