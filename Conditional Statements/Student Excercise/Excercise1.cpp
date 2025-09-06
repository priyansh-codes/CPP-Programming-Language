// Write a Program to offer discounts on total bill Amount

// Program should take Total Amount as input and calculate discount

// If bill amount < 100 no discount
// If bill amount is >= 100 and less than 500 then 10% discount
// If bill amount is >=500 then 20% discount

#include <iostream>
using namespace std;

int main()
{

    float billAmount, discount = 0.0f;

    cout << "Enter the billing amount:- ";
    cin >> billAmount;

    if (billAmount >= 500)
    {
        discount = billAmount * 20 / 100;
    }
    else if (billAmount >= 100 && billAmount < 500)
    {
        discount = billAmount * 10 / 100;
    }

    cout << "Billing amount= " << billAmount<<endl;
    cout << "Discount = " << discount<<endl;
    cout << "Discounted amount= " << billAmount - discount;
}