// Program to to check if its a Leap Year

#include <iostream>
using namespace std;

int main()
{
    int input;

    cout << "Enter the year:- ";
    cin >> input;

    if (input % 4 == 0)
    {
        if (input % 100 == 0)
        {
            if (input % 400 == 0)
            {
                cout << "It's a leap year";
            }
            else
            {
                cout << "Not a leap year";
            }
        }
        else
        {
            cout << "It'a leap year";
        }
    }
    else
    {
        cout << "Not a leap year";
    }
}