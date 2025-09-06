#include <iostream>
using namespace std;

int main()
{

    int tableNumber, limit;

    cout << "Enter the number for multiplication table:- ";
    cin >> tableNumber;
    cout << "Enter how many multiples you want:- ";
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        cout << tableNumber << " x " << i << " = " << tableNumber * i << endl;
    }
}