#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a + b;
}

int main()
{

    float a, b, c;
    cout << "Enter Number:- " << endl;
    cin >> a >> b;

    c = add(a, b);
    cout << "Sum is:- " << c;
}