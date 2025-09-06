#include <iostream>
using namespace std;

int main()
{

    int number, counter = 0;

    cout << "Enter a number to check if it is prime or not:- ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            counter++;
        }
    }

    if (counter == 2)
    {
        cout << "Yes, it's a prime number";
    }
    else
    {
        cout << "Not prime";
    }
}