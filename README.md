Student Performance Management System

Student Details

Field| Details
Student Name| Sanika Ramdas Kondhalkar 
Roll No.| AD2169
PRN| 125URA1102
Class/Division| SY B.Tech AI & DS – Div A
Course Name| Object-Oriented Programming with C++
Unit| Unit 1 – Fundamentals of Object-Oriented Programming

---

About the Program

This C++ program demonstrates a Student Performance Management System using fundamental Object-Oriented Programming concepts.

The program stores the roll number, name, and marks of three subjects for multiple students. It calculates the average marks of each student and determines their Pass/Fail result and Grade based on the average marks.

The program demonstrates the use of class, objects, constructor, private data members, member functions, arrays, conditional statements, and loops.

---

Program: Student Performance Management System

Description

The program creates a "Student" class that contains student information such as:

- Roll number
- Student name
- Marks of three subjects

A constructor is used to initialize the student data.

The "calculateAverage()" member function calculates the average of the three subject marks.

The "displayResult()" member function displays the student's complete result, including:

- Roll number
- Name
- Marks
- Average marks
- Pass/Fail status
- Grade

Three Student objects are created and stored in an array. A "for" loop is used to process and display the result of all three students.

---

Concepts Used

The following C++ concepts are demonstrated in this program:

- Class
- Objects
- Private data members
- Public member functions
- Constructor
- Member functions
- Array of objects
- Array
- Function
- Function call
- "if" statement
- "if-else" statement
- "else-if" ladder
- "for" loop
- Arithmetic operators
- Relational operators
- "cout"
- "string"
- Access specifiers
- Object initialization

---

Class: Student

The program contains a class named "Student".

Data Members

The following data members are declared as private:

int rollNo;
string name;
float marks[3];

Purpose:

- "rollNo" stores the student's roll number.
- "name" stores the student's name.
- "marks[3]" stores marks of three subjects.

---

Constructor

The constructor is:

Student(int r, string n, float m1, float m2, float m3)

It is used to initialize the student's roll number, name, and three subject marks when the object is created.

Example:

Student(1, "Sneha", 85, 90, 80)

This creates a student object with:

- Roll Number = 1
- Name = Sneha
- Marks = 85, 90, 80

---

Member Function: calculateAverage()

The function:

float calculateAverage()

calculates the average of three subject marks.

Formula:

Average = (Mark1 + Mark2 + Mark3) / 3

For example:

Marks = 85, 90, 80

Average = (85 + 90 + 80) / 3
        = 255 / 3
        = 85

---

Member Function: displayResult()

The function:

void displayResult()

displays the complete result of the student.

It displays:

- Roll Number
- Name
- Marks
- Average
- Result
- Grade

The function uses selection statements to determine whether the student has passed or failed and to assign the appropriate grade.

---

Pass/Fail Logic

The program uses the following condition:

if (average >= 40)
    cout << "\nResult: PASS";
else
    cout << "\nResult: FAIL";

Rule:

Average Marks| Result
40 or above| PASS
Below 40| FAIL

---

Grade Logic

The program uses an "if-else-if" ladder to determine the grade.

Average Marks| Grade
90 or above| A+
75 – 89.99| A
60 – 74.99| B
40 – 59.99| C
Below 40| F

---

Array of Objects

Three Student objects are created using an array:

Student students[3] =
{
    Student(1, "Sneha", 85, 90, 80),
    Student(2, "Ankita", 70, 75, 80),
    Student(3, "Sarthak", 35, 40, 60)
};

The array stores three Student objects.

---

For Loop

A "for" loop is used to process all three students:

for (int i = 0; i < 3; i++)
{
    students[i].displayResult();
}

The loop calls the "displayResult()" function for each Student object.

---

Sample Student Data

Roll No.| Name| Marks| Average
1| Sneha| 85, 90, 80| 85
2| Ankita| 70, 75, 80| 75
3| Sarthak| 35, 40, 60| 45

---

Expected Output

===== Student Performance Management System =====

Roll Number: 1
Name: Sneha
Marks: 85, 90, 80
Average: 85
Result: PASS
Grade: A

Roll Number: 2
Name: Ankita
Marks: 70, 75, 80
Average: 75
Result: PASS
Grade: A

Roll Number: 3
Name: Sarthak
Marks: 35, 40, 60
Average: 45
Result: PASS
Grade: C

---

Working of the Program

Student 1

Marks = 85, 90, 80
Average = (85 + 90 + 80) / 3
Average = 85

Since 85 is greater than or equal to 40:

Result = PASS

Since 85 is greater than or equal to 75:

Grade = A

Student 2

Marks = 70, 75, 80
Average = (70 + 75 + 80) / 3
Average = 75

Therefore:

Result = PASS
Grade = A

Student 3

Marks = 35, 40, 60
Average = (35 + 40 + 60) / 3
Average = 45

Therefore:

Result = PASS
Grade = C

---

Overall Concepts Covered

This program covers the following important C++ concepts:

- C++ input/output
- Variables
- Data types
- "string"
- Arrays
- Class
- Objects
- Private members
- Public members
- Constructor
- Member functions
- Array of objects
- Function calling
- Arithmetic operations
- Relational operators
- "if-else"
- "else-if" ladder
- "for" loop
- Object initialization
- Object-oriented programming basics

---

Conclusion

The Student Performance Management System provides a basic understanding of C++ and Object-Oriented Programming concepts.

The program demonstrates how a class can be used to store student information and perform operations such as calculating average marks, determining Pass/Fail status, and assigning grades.

It also demonstrates the practical use of constructors, objects, member functions, arrays, conditional statements, and loops in a C++ program.