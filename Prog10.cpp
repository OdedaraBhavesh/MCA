#include <iostream>
using namespace std;

class Search
{
private:
    int a[10]; // Array to store 10 integers
    int x;     // Variable to store a value

public:
    // Function to input values into the array
    void input()
    {
        cout << "Enter 10 integers:\n";
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
    }

    // Function to output values from the array
    void output() const
    {
        cout << "Array elements are:\n";
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    // Function to search for a value at a specific position
    void search(int position) const
    {
        if (position >= 0 && position < 10)
        {
            cout << "Element at position " << position << " is: " << a[position] << endl;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }

    // Function to add a value to the array at a specific position
    void add(int value)
    {
        cout << "Enter position to add the value (0-9): ";
        int position;
        cin >> position;
        if (position >= 0 && position < 10)
        {
            a[position] = value;
            cout << "Value added at position " << position << endl;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }
};

int main()
{
    Search s;
    s.input();
    s.output();

    cout << "Enter position to search: ";
    int pos;
    cin >> pos;
    s.search(pos);

    cout << "Enter value to add: ";
    int val;
    cin >> val;
    s.add(val);

    s.output();

    return 0;
}
