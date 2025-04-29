/*
 Introduction to Programming:
 ****************************

 What is Programming?
 ---------------------
 Programming is the process of writing instructions that a computer can execute.
 These instructions tell the computer what to do step by step using a programming language.

 Why do we need Programming?
 ----------------------------
 Computers are powerful but can only follow clear, step-by-step instructions.
 Programming allows us to:
   - Automate tasks (like calculations or sending emails)
   - Solve real-world problems (like analyzing data)
   - Build applications (like games, websites, or control robots)

 In this file, we will look at a simple instruction in C++.

 NOTE => Running the code:
 > Visualize this C++ code step-by-step at:
 > https://pythontutor.com/cpp.html
*/

// Include the Input/Output library from the C++ standard library
#include <iostream> // Include the input-output stream library for cin and cout

// Use the standard namespace to simplify code
// (So we can write 'cout' instead of 'std::cout')
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

// The main() function is the entry point of any C++ program.
// Execution starts from here.
int main()
{
   // cout: stands for "character output"
   // It is used to display text on the screen (usually the terminal or console).
   // The '<<' operator is used to send data to cout.
   // endl: ends the line and moves the cursor to the next line (like pressing 'Enter').
   cout << "Hello, welcome to programming!" << endl;

   // return 0: Sends the value 0 back to the operating system,
   // which means "program completed successfully".
   // If we wanted to indicate an error, we might return 1 or another number.
   return 0;
}

/*
======================
Detailed Explanation:
======================

1. #include <iostream>
   - This is called a "preprocessor directive".
   - It tells the compiler to include the Input/Output library,
     which gives us access to 'cout' and 'cin'.

2. using namespace std;
   - The C++ Standard Library groups its functions in a namespace called 'std'.
   - Without this line, we would have to write 'std::cout' and 'std::endl'.

3. int main()
   - Every C++ program must have a main function.
   - This is where the program begins execution.
   - It returns an integer to indicate success (0) or error (non-zero).

4. cout << "Hello, welcome to programming!" << endl;
   - This line prints the message to the console.
   - '<<' is the stream insertion operator (sends output to the stream).
   - 'endl' adds a newline and flushes the output buffer.

5. return 0;
   - 'return' sends a value back to the system after the program ends.
   - A return value of 0 typically means "no error".
   - You can test error returns by using `return 1;` to simulate failure.

=============
Practice Tip:
=============
- Try changing the text inside the quotes.
- Try adding another 'cout' line below the first one.
- Try removing 'endl' and see what happens.
- Try using 'return 1;' and observe how your IDE responds.

=================
Online Resources:
=================
- C++ Program Structure: https://www.cplusplus.com/doc/tutorial/program_structure/
- Basic I/O in C++: https://www.cplusplus.com/doc/tutorial/basic_io/
*/