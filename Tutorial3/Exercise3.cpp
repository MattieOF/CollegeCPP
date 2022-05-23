// Matt Ware
// Tutorial 3 Exercise 3
// 21/09/21

#include <iostream>

int testNumber = 100;

int main()
{
	int testNumber = 200;
	std::cout << "Test number is " << testNumber << "\n";

	// The number printed is 200.
	// This is because local variables overwrite global variables in priority.
	// However, you can access the global value instead using ::

	std::cout << "Global test number is " << ::testNumber << std::endl;

	std::cin.get();
	return 0;
}
