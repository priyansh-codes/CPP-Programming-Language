#include <iostream>
using namespace std;

int main()
{

    int n, digit, number, rev = 0;

    cout << "Enter Number:- ";
    cin >> number;

    n = number;

    while (number != 0)
    {
        digit = number % 10;
        rev = (rev * 10) + digit;
        number /= 10;
    }

    if (n == rev)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}