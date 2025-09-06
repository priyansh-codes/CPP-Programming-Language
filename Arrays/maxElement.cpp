#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 94, 36, 48};
    int max = 0;

    for (auto x : arr)
    {
        if (x > max)
        {
            max = x;
        }
    }

    cout << "Max element is:- " << max;
}