#include <iostream>
using namespace std;

int main()
{

    int number, r;

    cout << "Enter number:- ";
    cin >> number;

    while (number != 0)
    {
        r= number % 10;
        number /= 10;
        cout << r;
    }
}