#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    int OOCP, AI, MF;
    int total;
    float percentage;

    void getDetails()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks for OOCP: ";
        cin >> OOCP;
        cout << "Enter marks for AI: ";
        cin >> AI;
        cout << "Enter marks for MF: ";
        cin >> MF;
        total = OOCP + AI + MF;
        percentage = (total / 3.0);
    }

    void displayDetails()
    {
        cout << "Roll No: " << rollno << ", Name: " << name
             << ", Total Marks: " << total << ", Percentage: " << percentage << "%" << endl;
    }
};

void sortStudents(Student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].percentage < students[j + 1].percentage)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getDetails();
    }

    sortStudents(students, n);

    cout << "\nStudent details in descending order of percentage:" << endl;
    for (int i = 0; i < n; i++)
    {
        students[i].displayDetails();
    }

    return 0;
}
