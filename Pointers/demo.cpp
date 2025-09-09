#include <iostream>
using namespace std;

int main()
{
    int a = 10;  // normal data variable
    int *p = &a; // pointer variable, stores address of a

    cout << "Value of a:- " << a << endl;    // 10  (data inside a)
    cout << "Address of a:- " << &a << endl; // address of a (say 200)
    cout << "Value of *p:- " << *p << endl;  // 10  (value at address stored in p, i.e. a)
    cout << "Address of p:- " << &p << endl; // address of pointer p itself (say 300)
    cout << "Value at p:- " << p << endl;    // 200 (value stored in p = address of a)
}
