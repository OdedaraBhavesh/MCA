#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    float basicsalary;
    float grosssalary;

public:
    employee(int empid, string empname, float empbasicsalary)
    {
        id = empid;
        name = empname;
        basicsalary = empbasicsalary;
        Calculategrosssalary();
    }
    void Calculategrosssalary()
    {
        float HRA = 0.20 * basicsalary;
        float DA = 0.30 * basicsalary;
        float OA = 0.10 * basicsalary;
        grosssalary = basicsalary + HRA + DA + OA;
    }
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Gross Salary: " << grosssalary << endl;
    }
};

int main()
{
    int empid;
    string empname;
    float empbasicsalary;
    cout << "Enter the employee id :";
    cin >> empid;
    cout << "enter the employee name :";
    cin >> empname;
    cout << "Enter the Employee Basic Salary :";
    cin >> empbasicsalary;

    employee emp(empid, empname, empbasicsalary);
    emp.display();

    return 0;
}