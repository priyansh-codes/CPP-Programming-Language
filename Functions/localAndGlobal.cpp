#include <iostream>
using namespace std;

int x = 10;

int fun(int a)
{
    x++;
    {
        int x = 20;
        x++;
        cout << "Inside function x= " << x << endl;
        cout << "Interior scope resolution x= " << :: x << endl;
    }

    cout << "Outside interior function x= " << x << endl;
}

int main()
{

    cout << "Original x = " << x << endl;
    fun(x);
    cout << "At the end, x = " << x << endl;
}