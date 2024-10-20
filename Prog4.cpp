#include <iostream>
using namespace std;

class Date
{
private:
    int isLeapYear(int y)
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    int daysInMonth(int m, int y)
    {
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return isLeapYear(y) ? 29 : 28;
        default:
            return 0;
        }
    }
    int day, month, year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void addDays(int days)
    {
        day += days;
        while (day > daysInMonth(month, year))
        {
            day -= daysInMonth(month, year);
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
    }
    void display()
    {
        cout << "Updated Date: " << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/" << year << endl;
    }
};
int main()
{
    int d, m, y, extraday;
    cout << "Enter the initial date (day,month and year) :" << endl;
    cout << " Enter Days :";
    cin >> d;
    cout << " Enter Months :";
    cin >> m;
    cout << " Enter Years :";
    cin >> y;

    Date date(d, m, y);

    cout << "Enter the number of days to add :";
    cin >> extraday;

    date.addDays(extraday);
    date.display();

    return 0;
}