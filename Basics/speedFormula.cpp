#include <iostream>
using namespace std;

int main()
{
    int a, v, u;
    float speed;

    cout<<"Enter the 3 values:- "<<endl;
    cin>>u>>v>>a;

    speed = (v*v - u*u ) / (2*a);

    cout<<"Speed is:- "<<speed;
}