#include <iostream>
using namespace std;

// --- Function definitions ---
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int divide(int a, int b)
{
    if (b == 0)
    {
        return 0; // division by zero
    }
    else
    {
        return a / b;
    }
}

int main()
{
    // Declare a function pointer that takes (int, int) and returns int
    int (*operationCoordinator)(int, int);

    int input, a, b;

    // Show menu
    cout << "Enter Operation to perform:- " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cin >> input;

    cout << "Enter a and b:- " << endl;
    cin >> a >> b; // read two numbers

    // Based on choice, assign function address to pointer
    switch (input)
    {
    case 1:
        operationCoordinator = add;         // pointer now points to add()
        cout << operationCoordinator(a, b); // call add through pointer
        break;

    case 2:
        operationCoordinator = subtract; // pointer now points to subtract()
        cout << operationCoordinator(a, b);
        break;

    case 3:
        operationCoordinator = multiply; // pointer now points to multiply()
        cout << operationCoordinator(a, b);
        break;

    case 4:
        operationCoordinator = divide; // pointer now points to divide()
        cout << operationCoordinator(a, b);
        break;

    default:
        cout << "Invalid choice!";
        break;
    }
}
