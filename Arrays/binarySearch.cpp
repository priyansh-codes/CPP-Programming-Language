#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 14, 18, 22};
    int key;
    int low = 0, high = 7, mid;

    cout << "Enter the key:- ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << "Key is at:- " << mid;
            return 0;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }

    cout << "Not found";
}