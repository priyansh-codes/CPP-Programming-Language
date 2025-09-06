#include <iostream>
using namespace std;

int main()
{

    int a[2][3] = {2, 5, 9, 6, 9, 8};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j]<<" ";
        }

        cout << endl;
    }
}