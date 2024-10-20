#include <iostream>
#include <string>
using namespace std;

class STUDENT
{
public:
    int rollno;
    string name;
    int age;
    int marks[3];

    // Constructor to initialize marks with minimum passing marks
    STUDENT()
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 40; // Assuming 40 is the minimum passing mark
        }
    }

    // Function to get student details
    void getDetails()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> ws; // To consume any leading whitespace
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks for three subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "Roll Number: " << rollno << ", Name: " << name << ", Age: " << age << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    // Function to modify marks of a student with a specific roll number
    void modifyMarks(int roll, int newMarks[3])
    {
        if (rollno == roll)
        {
            for (int i = 0; i < 3; i++)
            {
                marks[i] = newMarks[i];
            }
        }
    }
};

int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    STUDENT students[10]; // Assuming a maximum of 10 students

    // Get details for each student
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getDetails();
    }

    // Display details of all students
    cout << "\nStudent details:" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        students[i].displayDetails();
    }

    // Modify marks for a specific student
    int roll;
    int newMarks[3];
    cout << "\nEnter roll number of student to modify marks: ";
    cin >> roll;
    cout << "Enter new marks for three subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> newMarks[i];
    }

    for (int i = 0; i < numStudents; i++)
    {
        students[i].modifyMarks(roll, newMarks);
    }

    // Display details of all students after modification
    cout << "\nStudent details after modification:" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        students[i].displayDetails();
    }

    return 0;
}