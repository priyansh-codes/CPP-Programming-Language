#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter a number to find its factors:- ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " is a factor" << endl;
        }
    }
}