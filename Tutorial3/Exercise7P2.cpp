// Matt Ware
// Tutorial 3 Exercise 7 Part 2/2
// 23/09/21

#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

struct ChoiceArgs
{
	std::vector<std::string> words;
	std::function<void()> next;
};

void Choice(const std::vector<ChoiceArgs>& choices, const std::string& error);

// Choice 1
void C1Left();
void C1Right();
void C1Middle();
void C1Backwards();

// ChrisDOP
void DOPMiddle();
void DOPFight();
void DOPRun();

// DOPFight
void DOPFightPancake();

// Dad
void DadHug();
void DadPunch();

// T-level
void TLevelSwitch();
void TLevelDoNotSwitch();

int main()
{
	std::cout << "Death was abound; you must escape the dungeon before you end up like the rest!\n";
	std::cout << "You're confronted by a fork in the path. Do you go left or right?\n";
	ChoiceArgs choice1{ {"left"}, C1Left};
	ChoiceArgs choice2{ {"right"}, C1Right };
	ChoiceArgs choice3{ {"middle"}, C1Middle };
	ChoiceArgs choice4{ {"back", "backwards", "no"}, C1Backwards};
	Choice({ choice1, choice2, choice3, choice4 }, "You were destined to fail...");
}

void C1Left()
{
	std::cout << "You go left.\nThat was a mistake.\n";
	std::cout << "I curse you with a thousand murderous MIDGETS! (chris said that)\n";
	std::cout << "They strangle you by jumping into your mouth. So yeah, you're dead now.\n";
	std::cin.get();
}

void C1Right()
{
	std::cout << "You go right.\n";
	std::cout << "There's an old man. He looks a bit like your dad.\n";
	std::cout << "Your dad beckons you to come closer.\n";
	std::cout << "Do you go in for a hug, or a punch?\n";

	ChoiceArgs choiceHugDad{ {"hug", "go in for a hug", "go in for hug"}, DadHug };
	ChoiceArgs choicePunchDad{ {"punch", "go in for a punch", "go in for punch", "punch him", "mess him up"}, DadPunch};
	Choice({ choiceHugDad, choicePunchDad }, "Man, if I saw my Dad in a fantasy dungeon, I'd probably spontaneously die too. It's ok.\n");
}

void DadHug()
{
	std::cout << "\"I love you too, child. But I wish you did the T-Level.\"\n";
	std::cout << "Do you switch to the T-Level?\n";
	std::cout << "> ";
	std::cin.get();
	std::cout << "You can't even utter your answer before spontaneously dying on the spot to peer pressure.\n";
	std::cout << "oof\n";
	std::cin.get();
}

void DadPunch()
{
	std::cout << "...why?\n";
	std::cout << "Anyways, he fights better than you, and before you even finished reading this, you're nothing but a thin red paste.\n";
	std::cout << "Moral of the game: don't punch your Dad. But also, don't make your son into thin red paste. That's bad too. Two wrongs don't make a right. It's a bit convoluted.\nI think I'll just stay away from morals next time.\n";
	std::cin.get();
}

void TLevelSwitch()
{
	std::cout << "You switch to the T-Level.\n";
	std::cout << "Your first project is producing an app called 'Track my Baby'.\n";
	std::cout << "Look, to get meta for a sec, I'd rather make games. But I guess it's subjective.\n";
}

void TLevelDoNotSwitch()
{
	std::cout << "You stay on the games dev course.\n";
	std::cout << "Good choice.\n";
}

void C1Middle()
{
	std::cout << "You ran headfirst into the wall, Chris.\n";
	std::cout << "You bleed out on the floor. (deserved lmao)\n";
	std::cin.get();
	std::cout << "But it's not the end yet.. you suddenly get transported into the lair of CHRIS, THE DEVOURER OF PANCAKES!\n";
	std::cout << "Do you fight the foul beast?\n";

	ChoiceArgs choiceMiddle{ {"middle"}, DOPMiddle };
	ChoiceArgs choiceFight{ {"fight", "yes"}, DOPFight};
	ChoiceArgs choiceRun{ {"run", "no"}, DOPRun};
	Choice({ choiceMiddle, choiceFight, choiceRun }, "That's right Chris. Scared now, huh? You don't even know what to do...\nYou were devoured. Like a pancake. Tasted like an ASDA Smart Price one; no taste.");
}

void C1Backwards()
{
	std::cout << "nah that's not how you play this game\n";
	std::cout << "you backed into some spikes or something. either way you loose\n";
	std::cout << "bye\n";
	std::cin.get();
}

void DOPMiddle()
{
	std::cout << "ffs chris, that's not gonna work this time.\n";
	std::cout << "no more alternate dimensions. this is it.\n";
	std::cout << "you're bleeding out on the floor.\n";
	std::cout << "and you deserve it.\n";
	std::cout << "press enter to quit.\n";
	std::cout << "and go left or right next time.\n";
	std::cin.get();
}

void DOPFight()
{
	std::cout << "You decide to fight CHRIS, THE DEVOURER OF PANCAKES!\n";
	std::cout << "You demonstrate your war scream. You don't scare him. (Work on it.)\n"; // full metal jacket reference lol
	std::cout << "It eats a pancake.\n";
	std::cout << "You demonstrate your fear scream. You still don't scare him.\n";
	std::cout << "\nHow do you fight him?\n";

	ChoiceArgs choicePancake{ {"throw a pancake", "pancake", "throw pancake"}, DOPFightPancake };
	Choice({ choicePancake }, "Whatever you tried, it wasn't effective. CHRIS, THE DEVOURER OF PANCAKES, was simply too powerful!\nLike a pancake, you were first cooked, then flipped, cooked some more, coated with some sauce, and devoured.");
}

void DOPFightPancake()
{
	std::cout << "You take out the pancake you had prepared for lunch before leaving.\nIt was soggy, since you pissed yourself when you saw CHRIS, THE DEVOURER OF PANCAKES.\n";
	std::cout << "It's amazed by it's unique flavour, colour, and texture.\n";
	std::cout << "Out of gratitude, it lets you go. Now. Make your choice.\n";
	std::cout << "Left or right?\n";

	ChoiceArgs left{ {"left"}, C1Left };
	ChoiceArgs right{ {"right"}, C1Right };
	ChoiceArgs middle{ {"middle"}, C1Middle };
	ChoiceArgs back{ {"back", "backwards"}, C1Backwards };
	Choice({ left, right, middle, back }, "You were destined to fail...");
}

void DOPRun()
{
	std::cout << "You try to run from CHRIS, THE DEVOURER OF PANCAKES.\n";
	std::cout << "It doesn't work. You are devoured like an omelette. Which is just an egg pancake.\n";
	std::cout << "Could use some syrup.\n";
	std::cin.get();
}

void Choice(const std::vector<ChoiceArgs>& choices, const std::string& error)
{
	static std::string answer;
	std::cout << "--------------\n";
	std::cout << "> ";
	std::getline(std::cin, answer);

	// Set answer to itself in lowercase
	std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

	static bool found = false;
	for (ChoiceArgs choiceArg : choices)
	{
		if (std::find(choiceArg.words.begin(), choiceArg.words.end(), answer) != choiceArg.words.end())
		{
			choiceArg.next();
			found = true;
		}
	}

	if (!found)
	{
		std::cout << error << std::endl;
		std::cin.ignore();
		std::cin.get();

		// I feel like this would cause some errors
		// Choice(choices, error);
	}
}
