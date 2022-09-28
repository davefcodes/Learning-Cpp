// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12; 
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a'; 

    system ("pause>0"); 
}
