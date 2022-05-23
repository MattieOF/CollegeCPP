// Matt Ware
// Tutorial 3 Exercise 4
// 21/09/21

#include <iostream>
#include <string>

void PrintBool(bool& b, const bool& newLine);

int main()
{
	int i = 16, j = 32, k = 8;
	bool r;

	r = (i == 16);
	std::cout << "r = (i == 16) is ";
	PrintBool(r, true);

	r = (k != 16);
	std::cout << "r = (k != 16) is ";
	PrintBool(r, true);

	r = (k < 10);
	std::cout << "r = (k < 10) is ";
	PrintBool(r, true);

	r = (j > 33);
	std::cout << "r = (j > 33) is ";
	PrintBool(r, true);

	r = (j == (k * 2));
	std::cout << "r = (j == (k * 2)) is ";
	PrintBool(r, true);

	r = (j == (i * 2));
	std::cout << "r = (j == (i * 2)) is ";
	PrintBool(r, true);

	r = (k + i) <= (j - i);
	std::cout << "r = (k + i) <= (j - i)) is ";
	PrintBool(r, true);

	r = ((i / k) == 2);
	std::cout << "r = ((i / k) == 2) is ";
	PrintBool(r, true);

	r = (((i + j + k) / k) >= 7);
	std::cout << "r = ((( i + j + k ) / k ) >= 7 ) is ";
	PrintBool(r, true);
}

void PrintBool(bool& b, const bool& newLine)
{
	std::cout << (b ? "true" : "false") << (newLine ? "\n" : "");
}
