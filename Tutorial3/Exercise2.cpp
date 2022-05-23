// Matt Ware
// Tutorial 3 Exercise 2
// 21/09/21

#include <iostream>

#define PLAYER_COUNT 2

static int highscore = 500;
int scores[PLAYER_COUNT];

void CheckScores();

int main()
{
	// Get scores from user
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        std::cout << "Enter score for player " << i + 1 << ": ";
        std::cin >> scores[i];
    }

	CheckScores();

	std::cin.ignore();
	std::cin.get();
	return 0;
}

void CheckScores()
{
	int highestScore = 0, highestPlayer = 0;
	for (int i = 0; i < PLAYER_COUNT; i++)
	{
		if (scores[i] > highestScore)
		{
			highestScore = scores[i];
			highestPlayer = i;
		}
	}

    std::cout << "Player " << highestPlayer + 1 << " wins!\n";

	if (highestScore > highscore)
		std::cout << "A new highscore has been set by player " << highestPlayer + 1 << " (" << highestScore << ")\n";
}
