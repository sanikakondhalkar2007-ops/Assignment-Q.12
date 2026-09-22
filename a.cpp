#include <iostream>                                      // Includes the iostream library for input and output operations
#include <string>                                        // Includes the string library for storing student names

using namespace std;                                     // Allows us to use standard library names without writing std::

class Student                                           // Defines a class named Student
{
private:                                                 // Starts the private section of the Student class

    int rollNo;                                          // Stores the roll number of the student
    string name;                                         // Stores the name of the student
    float marks[3];                                      // Stores marks of the student in three subjects

public:                                                  // Starts the public section of the Student class

    // Constructor to initialize student data
    Student(int r, string n, float m1, float m2, float m3) // Defines a parameterized constructor
    {
        rollNo = r;                                      // Assigns the given roll number to rollNo
        name = n;                                        // Assigns the given name to name
        marks[0] = m1;                                   // Stores the first subject mark
        marks[1] = m2;                                   // Stores the second subject mark
        marks[2] = m3;                                   // Stores the third subject mark
    }

    // Member function to calculate average marks
    float calculateAverage()                             // Defines a function that returns the average marks
    {
        return (marks[0] + marks[1] + marks[2]) / 3;    // Adds three marks and divides the total by 3
    }

    // Member function to display complete result
    void displayResult()                                 // Defines a function to display the student's result
    {
        float average = calculateAverage();             // Calls calculateAverage() and stores the result in average

        cout << "\nRoll Number: " << rollNo;             // Displays the student's roll number
        cout << "\nName: " << name;                      // Displays the student's name

        cout << "\nMarks: "                              // Displays the label "Marks"
             << marks[0] << ", "                         // Displays the first subject mark
             << marks[1] << ", "                         // Displays the second subject mark
             << marks[2];                                // Displays the third subject mark

        cout << "\nAverage: " << average;                // Displays the calculated average marks

        // Selection statement for Pass/Fail
        if (average >= 40)                               // Checks whether the average is 40 or more
            cout << "\nResult: PASS";                    // Displays PASS if the condition is true
        else                                               // Executes when the if condition is false
            cout << "\nResult: FAIL";                    // Displays FAIL if the average is less than 40

        // Selection statement for Grade
        if (average >= 90)                               // Checks whether the average is 90 or more
            cout << "\nGrade: A+";                       // Displays grade A+ for average 90 or above
        else if (average >= 75)                          // Checks whether the average is 75 or more
            cout << "\nGrade: A";                        // Displays grade A for average 75 to 89.99
        else if (average >= 60)                          // Checks whether the average is 60 or more
            cout << "\nGrade: B";                        // Displays grade B for average 60 to 74.99
        else if (average >= 40)                          // Checks whether the average is 40 or more
            cout << "\nGrade: C";                        // Displays grade C for average 40 to 59.99
        else                                               // Executes when the average is below 40
            cout << "\nGrade: F";                        // Displays grade F for average below 40

        cout << "\n";                                    // Moves the cursor to the next line
    }
};

int main()                                              // Defines the main function where program execution begins
{
    // Creating three Student objects
    Student students[3] =                                // Creates an array containing three Student objects
    {
        Student(1, "Sneha", 85, 90, 80),                 // Creates first Student object with roll number 1
        Student(2, "Ankita", 70, 75, 80),                // Creates second Student object with roll number 2
        Student(3, "Sarthak", 35, 40, 60)                // Creates third Student object with roll number 3
    };

    cout << "===== Student Performance Management System =====\n"; // Displays the program heading

    // Iteration to process three students
    for (int i = 0; i < 3; i++)                          // Loop runs three times for three students
    {
        students[i].displayResult();                     // Calls displayResult() for the current student
    }

    return 0;                                             // Ends the main function and returns 0 to the operating system
}