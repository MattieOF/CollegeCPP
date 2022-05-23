// Tutorial 2 Exercise 6
// Matt Ware
// 15/09/2021

#include <iostream>

int main()
{
    int int1, int2, int3;

    std::cout << "Enter an integer: ";
    std::cin >> int1;
    std::cout << "Enter another integer: ";
    std::cin >> int2;
    std::cout << "Enter another integer: ";
    std::cin >> int3;
    std::cout << "\n";

    // Using brackets, you can decide the order of operations.
    // Like in normal maths, expressions in brackets are always
    // evaluated first and as separate to the bigger expression.
    // I cast int3 to a float here so that the result will be
    // a float too, and the value printed will be more accurate.
    float result = (int1 + int2) / (float) int3;
    std::cout << "(" << int1 << " + " << int2 << ") / " << int3 << " = " << result << std::endl;

    std::cin.ignore();
    std::cin.get();
    return 0;
}
