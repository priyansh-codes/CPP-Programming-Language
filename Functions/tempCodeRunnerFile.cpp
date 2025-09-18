#include <iostream>
using namespace std;

template <class t>
t max(t a, t b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    cout << max(10, 20);
}
