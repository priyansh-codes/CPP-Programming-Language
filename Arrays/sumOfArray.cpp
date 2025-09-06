#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {2, 4, 6, 8};
    int sum = 0;

    for (auto x : arr1)
    {
        sum += x;
    }

    cout << "Sum of the array is:- " << sum;
}