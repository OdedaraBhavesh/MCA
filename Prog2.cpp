#include <iostream>
using namespace std;

class Num
{
    int n1, n2, n3, n4;

public:
    Num(int num1, int num2, int num3, int num4)
    {
        n1 = num1;
        n2 = num2;
        n3 = num3;
        n4 = num4;
    }

    int total()
    {
        return n1 + n2 + n3 + n4;
    }

    float average()
    {
        return total() / 4.0;
    }

    void display()
    {
        cout << "Total: " << total() << endl;
        cout << "Average: " << average() << endl;
    }
};

int main()
{
    int n1, n2, n3, n4;

    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    Num obj(n1, n2, n3, n4);
    obj.display();

    return 0;
}
