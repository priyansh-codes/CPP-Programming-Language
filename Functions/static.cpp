#include <iostream>
using namespace std;

void fun()
{
    static int y = 10;
    int x = 10;
    x++;
    y++;
    cout << x << endl;
    cout << y << endl;
    cout << endl;
}

int main()
{

    fun();
    fun();
    fun();
}