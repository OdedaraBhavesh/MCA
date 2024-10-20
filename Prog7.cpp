#include <iostream>
using namespace std;

class Counter
{
private:
    int value;
    static int count;

public:
    Counter(int v)
    {
        value = v;
        count++;
    }

    void display() const
    {
        cout << "Value: " << value << endl;
    }

    static void displayCount()
    {
        cout << "Number of inputs: " << count << endl;
    }
};

int Counter::count = 0;

int main()
{
    Counter c1(10);
    Counter c2(20);
    Counter c3(30);

    c1.display();
    c2.display();
    c3.display();

    Counter::displayCount();

    return 0;
}
