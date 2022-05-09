#include <iostream>
#include "AngryCatException.h"

void feedKitty(int numTreats);

int main()
{
	int numTreats = 0;

	cout << "How many treats do you want to feed kitty?" << endl;
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
	{
		throw AngryCatException();
	}
	else if (numTreats < 6)
	{
		throw AngryCatException("Kitty is still unhappy with you.");
	}

	cout << "Kitty is happy with " << numTreats
		<< " treats." << endl;
}