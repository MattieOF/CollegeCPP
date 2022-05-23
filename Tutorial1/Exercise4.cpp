// Matthew Ware
// Tutorial 01 Exercise 04
// 09/09/2021

#include <iostream>

using namespace std;

int main()
{
    int num1 = 13, num2 = 493, num3 = 42, num4 = 1, num5 = 5246, num6 = -66;
    int average = (num1 + num2 + num3 + num4 + num5 + num6) / 6;

    // I used the addition and division operators to calculate the average and used brackets to ensure the correct
    // order of operations.
    // The average is not entirely correct as the true value is not a whole number, but the int data type
    // does not allow for decimal values and will round to the nearest whole number.
 
    cout << "Average is: " << average << endl;
    return 0;
}
