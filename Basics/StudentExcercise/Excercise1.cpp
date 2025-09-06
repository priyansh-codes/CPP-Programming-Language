// Write a program to calculate area of circle, take radius as input

#include <iostream>
using namespace std;

int main()
{
    float radius, area;

    cout << "Enter the radius:- " << endl;
    cin >> radius;

    area = 3.1425 * radius * radius;

    cout << "Area of the circle is:- " << area;
}