// Matthew Ware
// Tutorial 01 Exercise 02
// 09/09/2021

#include <iostream>

// All programs start in main()
int main()
{
    // DECLARE variables
    int number1, number2, result; // Declare three integer variables

    // DEFINE variables
    number1 = 10; // Assign variable called number1 to the integer value 10
    number2 = 7;

    // DEFINE result as ADDITION of number1 and number2
    result = number1 + number2;

    // PAUSES program and waits for user input
    std::cout << "Press Enter to continue";
    std::cin.get();

    // EXIT program
    return 0;
}
