#include <iostream>
using namespace std;

int main()
{

    int arr[] = {32, 4, 16, 8};
    int key;

    cout << "Enter key:- ";
    cin >> key;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index: " << i;
        }
    }
}