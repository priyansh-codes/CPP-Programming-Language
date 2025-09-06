#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0;

    cout << "Enter the limit:- ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << number << " natural numbers is:- " << sum;
}