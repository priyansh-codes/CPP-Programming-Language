// Write a program to calculate Net Salary
// Program should take following as input
// 1. Basic Salary
// 2. Percentage of Allowances
// 3. Percentage of Deductions

#include <iostream>
using namespace std;

int main()
{
    float basicSalary, prcntAllowance, prcntDeductions, netSalary;

    cout << "Enter Basic Salary:- ";
    cin >> basicSalary;

    cout << "Enter percent of allowance:- ";
    cin >> prcntAllowance;

    cout << "Enter percent of deduction:- ";
    cin >> prcntDeductions;

    netSalary = basicSalary + basicSalary * prcntAllowance / 100 - basicSalary * prcntDeductions / 100;

    cout << "Net Salary is:- " << netSalary;
}