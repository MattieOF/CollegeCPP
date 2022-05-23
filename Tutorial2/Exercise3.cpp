// Tutorial 2 Exercise 3
// Matt Ware
// 14/09/2021 and 15/09/2021

#include <iostream>

// cmath include as I originally used the M_PI define in cmath instead of a constant
// #include <cmath>

int main()
{
    const float PI = 3.1415f;
    float radius;

    std::cout << "Input radius: ";
    std::cin >> radius;

    float circumference = 2 * PI * radius;
    float area = PI * (radius * radius);

    // 7 is the minimum precision for a area of a circle of radius 1000 to not display in scientific notation
    std::cout.precision(7);
    std::cout << "Circumference: " << circumference << "\n";
    std::cout << "Area: " << area << std::endl;

    std::cin.ignore();
    std::cin.get();
    return 0;
}
