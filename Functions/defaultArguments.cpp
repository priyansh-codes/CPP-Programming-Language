#include <iostream>
using namespace std;

int maxim(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}

int main()
{

    cout << maxim() << endl;
    cout << maxim(10) << endl;
    cout << maxim(10, 15) << endl;
    cout << maxim(10, 30, 15) << endl;
}