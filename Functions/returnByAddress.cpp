#include <iostream>
using namespace std;

int *fun(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 4 * i;  
    }
    return arr;
}

int main()
{
    int *ptr = fun(5);
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
}