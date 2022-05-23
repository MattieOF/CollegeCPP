// Tutorial 2 Exercise 5
// Matt Ware
// 15/09/2021

#include <iostream>

int main()
{
    int int1;
    float float1;

    std::cout << "Enter an integer: ";
    std::cin >> int1;
    std::cout << "Enter a float: ";
    std::cin >> float1;
    std::cout << "\n";

    int1 += 53;
    float1 += 53;
    std::cout << "After += 53:\n";
    std::cout << "Integer: " << int1 << "\n";
    std::cout << "Float: " << float1 << "\n";

    int1 -= 53;
    float1 -= 53;
    std::cout << "After -= 53:\n";
    std::cout << "Integer: " << int1 << "\n";
    std::cout << "Float: " << float1 << "\n";

    int1 *= 7;
    float1 *= 7;
    std::cout << "After *= 7:\n";
    std::cout << "Integer: " << int1 << "\n";
    std::cout << "Float: " << float1 << "\n";

    int1 /= 7;
    float1 /= 7;
    std::cout << "After /= 7:\n";
    std::cout << "Integer: " << int1 << "\n";
    std::cout << "Float: " << float1 << "\n";

    std::cout << "Prefix plus 1, ++num (current values: " << int1 << ", " << float1 << "):\n";
    std::cout << "Integer: " << ++int1 << "\n";
    std::cout << "Float: " << ++float1 << "\n";

    std::cout << "Postfix plus 1, num++ (current values: " << int1 << ", " << float1 << "):\n";
    std::cout << "Integer: " << int1++ << "\n";
    std::cout << "Float: " << float1++ << "\n";
    std::cout << "New values: " << int1 << ", " << float1 << std::endl;

    std::cin.ignore();
    std::cin.get();
    return 0;
}
