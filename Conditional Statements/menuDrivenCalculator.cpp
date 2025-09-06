#include <iostream>
using namespace std;

int main()
{

    int a, b, c, operation;

    cout << "Please select the option:- " << endl;
    cout << "1. Add\n"
         << "2. Subtract\n"
         << "3. Multiply\n"
         << "4. Divide\n";
    cin >> operation;

    cout << "Enter two numbers:- ";
    cin >> a >> b;

    switch (operation)
    {

    case 1:
        c = a + b;
        cout << "The sum is:- " << c;
        break;

    case 2:
        c = a - b;
        cout << "Answer is:- " << c;
        break;

    case 3:
        c = a * b;
        cout << "Product is:- " << c;
        break;

    case 4:
        if (b == 0)
        {
            cout << "Division by zero";
        }
        else
        {
            c = a / b;
            cout << "Asnwer is:- " << c;
        }
        break;
    }
}
