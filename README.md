Abstarct:

This program implements a simple Return/Refund Management System using C structures and basic input/output operations. It defines a Request structure to store details such as product name, reason for return or
refund, and the requested amount. The program allows the user to choose between initiating a product return or refund request, collects the necessary information, and then displays a formatted summary of the
submitted request. It demonstrates the use of structures, conditional statements, user input handling with scanf and fgets, and basic console-based interaction to process and present request data.


Features of the program:


1.	Menu-Driven Interface:

		Provides two options
   • Return Product
   • Refund Request
   
	2.	Use of Structure (struct):
  
   •	Utilizes a Request structure to store multiple related fields:
	•	Product Name
	•	Reason
	•	Amount

  
	4.	User Input Handling:
  
	•	Accepts strings using fgets() for product name and reason.
	•	Accepts numeric input (float) for refund amount.
	•	Clears input buffer to prevent input issues.

  
	5.	Request Classification:

  
	•	Identifies whether the request is a Product Return or Refund based on user choice.

  
	6.	Formatted Output Summary:
  
	•	Displays a clear and structured summary of the user’s request.
  
	7.	Basic Validation:
  
	•	Checks for invalid menu choices and exits gracefully if input is incorrect.
  
	8.	Improved User Experience:
  
	•	Shows confirmation message indicating successful submission of the request.

  Technical Requirements

1. Compiler Requirements
	•	A standard C compiler such as:
	•	GCC (GNU Compiler Collection)
	•	Clang
	•	MSVC (Microsoft Visual C++)
	•	Must support:
	•	Standard C (C89/C90 or later)
	•	Basic standard libraries (stdio.h, string.h)

2. Operating System Compatibility
	•	Works on:
	•	Windows
	•	Linux / Ubuntu
	•	macOS
	•	Any OS that supports a C compiler.

3. Hardware Requirements
	•	Very minimal:
	•	Any processor capable of running a compiler
	•	At least 1 MB of RAM (practically any modern system)

4. Software/Library Requirements
	•	Requires standard libraries:
	•	<stdio.h> for input/output functions (printf, scanf, fgets)
	•	<string.h> for string handling (struct string fields)
	•	No external or third-party libraries required.

5. Development Environment

You can use any IDE or text editor, such as:
	•	Code::Blocks
	•	Dev-C++
	•	Visual Studio
	•	VS Code (with C/C++ extension)
	•	Geany
	•	Terminal-based editors: Vim, Nano

6. Compilation Command (for GCC)

   bash
   gcc program.c -o program
 7. Runtime Requirements
	•	Console or terminal to:
	•	Input menu choice
	•	Enter product name and reason
	•	Display summary


Functional Requirements

1. Display Menu Options
	•	The system must display two options to the user:
	•	Return Product
	•	Refund Request
	•	The user must be able to select one option using a numeric input.

2. Accept User Input for Request Details

The system must allow the user to enter:
	•	Product Name
	•	Reason for Return/Refund
	•	Refund Amount

3. Store Request Information
	•	The system must store all input data (product name, reason, amount) in a Request structure.

4. Identify Request Type
	•	Based on user choice:
	•	If the user selects option 1, classify the request as a Product Return.
	•	If option 2 is selected, classify it as a Refund Request.
	•	If the user enters an invalid choice, the system must display an error and terminate.

5. Display Request Summary
	•	The system must present the following information clearly:
	•	Request Type (Return or Refund)
	•	Product Name
	•	Reason
	•	Amount

6. Confirm Submission
	•	After displaying the summary, the system must show a confirmation message indicating successful submission

7. input handling
   string inputs
   numeric input

   How to Run a C Program

1. Write the Program

Save your code in a file with a .c extension

2. Open a Terminal or Command Prompt

3. Compile the Program

Use a C compiler like GCC program.c -o program

4. Run the Program

On Windows: program.exe


