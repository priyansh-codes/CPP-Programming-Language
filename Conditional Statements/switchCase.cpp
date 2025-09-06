#include <iostream>
using namespace std;

enum Days
{
    Mon = 1,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{

    int day;

    cout << "Enter day:- ";
    cin >> day;

    switch (day)
    {

    case Mon:
        cout << "Mon";
        break;

    case Tue:
        cout << "Tue";
        break;

    case Wed:
        cout << "Wed";
        break;

    case Thur:
        cout << "Thur";
        break;

    case Fri:
        cout << "Fri";
        break;

    case Sat:
        cout << "Sat";
        break;

    case Sun:
        cout << "Sun";
        break;

    default:
        cout << "Invalid";
        break;
    }
}