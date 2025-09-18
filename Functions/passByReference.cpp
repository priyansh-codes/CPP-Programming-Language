#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout << "a is: " << a << " b is: " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping, "<< "a is: " << a << " b is: " << b << endl;
}

int main()
{

    int a = 10, b = 20;
    swap(a, b);
    cout << "After function call is over, " << "a is: " << a << " b is: " << b << endl;
}