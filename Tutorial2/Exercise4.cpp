// Tutorial 2 Exercise 4
// Matt Ware
// 15/09/2021

#include <iostream>

int main()
{
    int int1, int2;
    float float1, float2;

    std::cout << "Enter an integer: ";
    std::cin >> int1;
    std::cout << "Enter another integer: ";
    std::cin >> int2;
    std::cout << "Enter a float: ";
    std::cin >> float1;
    std::cout << "Enter another float: ";
    std::cin >> float2;
    std::cout << "\n";

    // I originally set the cout precision to be much higher, however it was making
    // the issues caused by floating point inaccuracies much more noticeable.
    // std::cout.precision(10);

    // When doing operations on integers, the returned value will always be an integer.
    // This means, even if the true value of the calculation is a decimal, the value displayed
    // will always be rounded. For example, if int1 was 30 and int2 was 42, even though the
    // true value is 0.71428571428571428571428571428571, the app is telling us the value
    // is simply 0, since it's been floored (NOT rounded to the nearest whole number).
    std::cout << int1 << " + " << int2 << " = " << int1 + int2 << "\n"; // + will add a to b
    std::cout << int1 << " - " << int2 << " = " << int1 - int2 << "\n"; // - will subtract a from b
    std::cout << int1 << " * " << int2 << " = " << int1 * int2 << "\n"; // * will multiply a by b
    std::cout << int1 << " / " << int2 << " = " << int1 / int2 << "\n"; // / will divide a by b
    std::cout << int1 << " % " << int2 << " = " << int1 % int2 << "\n"; // % will return the remainder when diving a by b

    std::cout << float1 << " + " << float2 << " = " << float1 + float2 << "\n";
    std::cout << float1 << " - " << float2 << " = " << float1 - float2 << "\n";
    std::cout << float1 << " * " << float2 << " = " << float1 * float2 << "\n";
    std::cout << float1 << " / " << float2 << " = " << float1 / float2 << "\n";
    // std::cout << float1 << " % " << float2 << " = " << float1 % float2 << "\n"; % cannot be used with floats

    std::cout << float1 << " + " << int2 << " = " << float1 + int2 << "\n";
    std::cout << float1 << " - " << int2 << " = " << float1 - int2 << "\n";
    std::cout << int1 << " * " << float2 << " = " << int1 * float2 << "\n";
    std::cout << int1 << " / " << float2 << " = " << int1 / float2 << "\n";

    std::cout << "Press enter to quit" << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
