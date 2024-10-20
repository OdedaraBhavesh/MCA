#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void AddTime(int time)
    {
        minutes += time;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
    }
    void display()
    {
        cout << "Updated Time :" << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << endl;
    }
};

int main()
{
    int h, m, ExtraTimeadd;
    cout << "Enter the initial time (hours and minutes): " << endl;
    cout << "Hours :";
    cin >> h;
    cout << "Minutes :";
    cin >> m;

    Time t(h, m);

    cout << "Enter the extra time to add :";
    cin >> ExtraTimeadd;

    t.AddTime(ExtraTimeadd);
    t.display();

    return 0;
}