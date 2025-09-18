#include <iostream>
using namespace std;

template <class t>
t maxim(t a, t b)
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

    cout << maxim(10, 20) << endl;
    cout << maxim(-20.2f, 12.8f);
}
