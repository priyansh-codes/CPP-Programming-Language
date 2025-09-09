#include <iostream>
using namespace std;

int main()
{
    int x = 10; // Declare variable x with value 10
    int &y = x; // y is a reference (alias) to x (not a new variable)

    cout << x << endl; // Prints 10 (current value of x)

    x++;               // Increment x → now x = 11
    cout << x << endl; // Prints 11

    y++;               // Increment y → since y is alias of x, x = 12
    cout << x << endl; // Prints 12 (x changed because y changed)

    cout << endl; // Just an empty line for clarity

    cout << y << endl;  // Prints 12 (y is alias of x, same value)
    cout << &y << endl; // Prints the address of y → actually address of x
    cout << &x << endl; // Prints the address of x (same as &y)
}
