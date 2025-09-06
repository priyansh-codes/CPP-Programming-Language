#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of time loop should run:- ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Iteration " << i << " gives value:- " << i << endl;
    }

    cout << "For loop has ended";
}