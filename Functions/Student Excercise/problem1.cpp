#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
}

int main()
{
    int key;
    int A[] = {2, 8, 3, 6, 10, 5, 15};
    cout << "Enter key:- " << endl;
    cin >> key;
    cout << linearSearch(A, 7, key);
}