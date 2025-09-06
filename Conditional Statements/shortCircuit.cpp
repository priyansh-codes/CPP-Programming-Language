#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 5, i = 5;

    // if (a > 5 && ++i > b)   // first condition true → second (++i) is checked → i becomes 6
    // {
    // }

    // cout << i << endl;

    if (a < 5 && ++i > b) // first condition false → second not checked → i stays 5
    {
    }

    cout << i << endl;
}
