// Matt Ware
// Tutorial 3 Exercise 7 Part 1/2
// 23/09/21

#include <iostream>
#include <random>

// These are inclusive
constexpr uint32_t MIN   = 1;
constexpr uint32_t MAX   = 10;
constexpr bool     CHEAT = true;

int main()
{
	// Generate random number
	std::random_device                      rd;
	std::default_random_engine              engine(rd());
	std::uniform_int_distribution<uint32_t> distribution(MIN, MAX);
	uint32_t                                number                  = distribution(engine);
	
	// Get user input
	if (CHEAT)
		std::cout << "The number is " << number << "\n";
	std::cout << "Guess the random number (1-10): ";
	uint32_t answer;
	std::cin >> answer;

	// Check answer 
	if (answer == number)
	{
		std::cout << "Nice, you got it!\n";
	}
	else
	{
		std::cout << "You said " << answer << ", but the number was " << number << ". Unlucky :(\n";
	}

	// Handle exit
	std::cout << "Press enter to exit." << std::endl;
	std::cin.ignore();
	std::cin.get();
	return 0;
}
