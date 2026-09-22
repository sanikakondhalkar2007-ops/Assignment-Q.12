
Name: Sanika Ramdas Kondhalkar
Class: Second Year AIDS
Division: A
Course: Object Oriented Programming Using C++
Course Code: ADPC303
Unit: II

============================================================
OBJECT-ORIENTED PROGRAMMING WITH C++

UNIT II: OBJECT-ORIENTED PROGRAMMING CONCEPTS

PRACTICAL CODE BOOK - README

Program: Student Performance Management System
Language Standard: C++17 or later

============================================================
CONTENTS

This program demonstrates the use of Object-Oriented
Programming concepts in C++ through a Student Performance
Management System.

The program:

1. Creates a Student class
2. Stores student details
3. Uses a constructor to initialize student data
4. Stores marks using an array
5. Calculates average marks
6. Displays student performance
7. Uses if-else statements for Pass/Fail
8. Uses if-else-if statements for Grade
9. Uses an array of Student objects
10. Uses a for loop to process multiple students

============================================================
PROGRAM: STUDENT PERFORMANCE MANAGEMENT SYSTEM

------------------------------------------------------------
CONCEPT
------------------------------------------------------------

The Student Performance Management System is a C++ program
that stores and displays the academic performance of students.

The program uses a Student class to represent each student.

Each student has:

- Roll Number
- Name
- Marks in three subjects

The program calculates the average marks and determines
whether the student has passed or failed.

It also assigns a grade according to the average marks.

============================================================
CLASS USED
============================================================

Class Name:

Student

The Student class contains data members and member functions
required to manage student performance.

============================================================
DATA MEMBERS
============================================================

The class contains the following private data members:

1. int rollNo

   Stores the roll number of the student.

2. string name

   Stores the name of the student.

3. float marks[3]

   Stores the marks of the student in three subjects.

These data members are declared private to provide
encapsulation and restrict direct access from outside
the class.

============================================================
CONSTRUCTOR
============================================================

Constructor Name:

Student()

The parameterized constructor is used to initialize the
student data when a Student object is created.

Constructor parameters:

- int r
- string n
- float m1
- float m2
- float m3

Example:

Student(1, "Sneha", 85, 90, 80);

The constructor stores:

Roll Number = 1
Name = Sneha
Marks = 85, 90, 80

============================================================
MEMBER FUNCTION 1: calculateAverage()
============================================================

Function:

float calculateAverage()

Purpose:

This function calculates the average marks of a student.

Formula:

Average = (Mark1 + Mark2 + Mark3) / 3

Example:

Marks = 85, 90, 80

Average:

(85 + 90 + 80) / 3
= 255 / 3
= 85

The function returns the calculated average.

============================================================
MEMBER FUNCTION 2: displayResult()
============================================================

Function:

void displayResult()

Purpose:

This function displays the complete result of the student.

It displays:

- Roll Number
- Name
- Marks
- Average
- Pass/Fail Result
- Grade

The function calls calculateAverage() to calculate the
student's average marks.

============================================================
PASS / FAIL LOGIC
============================================================

The program uses an if-else statement to determine the
student's result.

Condition:

average >= 40

If the condition is true:

Result = PASS

If the condition is false:

Result = FAIL

Example:

Average = 70

Result = PASS

============================================================
GRADE LOGIC
============================================================

The program assigns grades according to the average marks.

Grade criteria:

Average >= 90
Grade = A+

Average >= 75
Grade = A

Average >= 60
Grade = B

Average >= 40
Grade = C

Average < 40
Grade = F

The program uses an if-else-if ladder for grade selection.

============================================================
STUDENT OBJECT ARRAY
============================================================

The program creates an array containing three Student objects.

Example:

Student students[3]

The three objects are:

1. Sneha
2. Ankita
3. Sarthak

Each object contains its own:

- Roll Number
- Name
- Marks

============================================================
ITERATION USING FOR LOOP
============================================================

A for loop is used to process all three Student objects.

Example:

for (int i = 0; i < 3; i++)
{
    students[i].displayResult();
}

The loop calls displayResult() for each student.

Therefore, the result of all three students is displayed.

============================================================
OOP CONCEPTS COVERED
============================================================

1. CLASS

The Student class acts as a blueprint for creating Student
objects.

------------------------------------------------------------

2. OBJECT

Objects are created from the Student class.

Example:

Student students[3];

------------------------------------------------------------

3. ENCAPSULATION

Data members such as rollNo, name and marks are declared
private and are accessed through member functions.

------------------------------------------------------------

4. CONSTRUCTOR

The parameterized constructor initializes the Student object
with roll number, name and marks.

------------------------------------------------------------

5. MEMBER FUNCTION

Functions such as calculateAverage() and displayResult()
are member functions of the Student class.

------------------------------------------------------------

6. ARRAY OF OBJECTS

The program creates an array of Student objects to store
information about multiple students.

------------------------------------------------------------

7. ABSTRACTION

The calculation of average and display of results are
implemented inside member functions so that the user does
not need to know the internal calculation details.

============================================================
OTHER C++ CONCEPTS USED
============================================================

1. Data Types

int, float and string are used to store different types
of student information.

2. Array

The marks[3] array stores marks of three subjects.

3. if-else

Used to determine Pass or Fail.

4. if-else-if ladder

Used to determine the student's grade.

5. for loop

Used to process all Student objects.

6. String

The string data type is used to store the student's name.

7. cout

Used to display output on the screen.

============================================================
SAMPLE STUDENTS
============================================================

Student 1:

Roll Number: 1
Name: Sneha
Marks: 85, 90, 80
Average: 85
Result: PASS
Grade: A

------------------------------------------------------------

Student 2:

Roll Number: 2
Name: Ankita
Marks: 70, 75, 80
Average: 75
Result: PASS
Grade: A

------------------------------------------------------------

Student 3:

Roll Number: 3
Name: Sarthak
Marks: 35, 40, 60
Average: 45
Result: PASS
Grade: C

============================================================
IMPORTANT C++ KEYWORDS USED
============================================================

#include <iostream>

Includes the input/output stream library required for cout.

------------------------------------------------------------

#include <string>

Includes the string library required for storing names.

------------------------------------------------------------

using namespace std;

Allows standard library names such as cout and string to be
used without writing std::.

------------------------------------------------------------

class

Used to define the Student class.

------------------------------------------------------------

private

Restricts direct access to data members from outside the
class.

------------------------------------------------------------

public

Allows member functions and constructors to be accessed
according to the class access rules.

------------------------------------------------------------

if

Used for conditional decision making.

------------------------------------------------------------

else

Executes when the if condition is false.

------------------------------------------------------------

for

Used to repeat a block of statements.

------------------------------------------------------------

return

Returns a value from a function.

============================================================
HOW TO COMPILE
============================================================

Use a C++17-compatible compiler.

Example using g++:

g++ -std=c++17 Program_01.cpp -o Program_01

============================================================
HOW TO RUN
============================================================

On Windows:

Program_01.exe

On Linux/macOS:

./Program_01

============================================================
HOW TO RUN IN VS CODE
============================================================

1. Open the .cpp file in Visual Studio Code.

2. Open the Terminal.

3. Compile the program:

g++ -std=c++17 Program_01.cpp -o Program_01

4. Run the program:

.\Program_01.exe

============================================================
LEARNING OUTCOME
============================================================

After completing this program, students will understand:

- Class and object
- Encapsulation
- Constructor
- Member functions
- Array of objects
- Arrays
- Functions
- if-else statements
- if-else-if ladder
- for loop
- Data types
- Basic Object-Oriented Programming concepts

============================================================
CONCLUSION
============================================================

The Student Performance Management System demonstrates how
C++ Object-Oriented Programming concepts can be used to
organize and manage student information.

The program combines classes, objects, constructors,
encapsulation, arrays, member functions, loops and
conditional statements to calculate and display student
performance.

============================================================
END OF README
============================================================