// Tutorial 2 Exercise 2
// Matt Ware
// 14/09/2021

#include <iostream>

int main()
{
    float num1, num2, num3;

    std::cout << "Input number 1: ";
    std::cin >> num1;
    std::cout << "Input number 2: ";
    std::cin >> num2;
    std::cout << "Input number 3: ";
    std::cin >> num3;

    std::cout << num1 << " + " << num2 << " + " << num3 << " = " << num1 + num2 + num3 << std::endl;
    std::cout << "The average is: " << (num1 + num2 + num3) / 3 << std::endl;

    std::cin.ignore();
    std::cin.get();
    return 0;
}
