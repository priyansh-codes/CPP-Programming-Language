#include <iostream>
using namespace std;

int main()
{

    float marks1, marks2, marks3, avg;

    cout << "Enter the marks of all three subjects:-";
    cin >> marks1 >> marks2 >> marks3;

    avg = (marks1 + marks2 + marks3) / 3;

    if (avg >= 60)
    {
        cout << "A";
    }
    else if (avg >= 35 && avg < 60)
    {
        cout << "B";
    }
    else
        cout << "C";
}