/*This was a data type assignment. I had to go and research what an enum was, but now I know and understand.  I will 
still struggle to when I will use it, but I am excited to learn.  The code outputs a lot of player data letting the player where
they stand in the game.  */

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	enum colorCode {
		Green = 1,
		Yellow = 5,
		Red = 10
	} gameLevelColor;
	//enum stands for enumerated type.  I create a datatype that stores a list of values.  If gameLevelColor = Green that is 1
	double gameScoreAverage = 430.63; //Decimal Number 64 bits is a double
	char letterLevel = 'A'; //Single letter.  One ASCII Value
	int gameTestScore = 600; //Whole number value
	float gameScore = 555.4f; //Decimal number. f means floating point value

	gameLevelColor = Green; //This line does not need a declaration, it was declared in the line above
	bool isPlayerWinning = true; //Could be true or false bool is o for false and 1 for true

	cout << "The game score average is currently "
		<< gameScoreAverage
		<< endl;
	cout << "The game score test score was "
		<< gameTestScore
		<< endl;
	cout << "Your game score was "
		<< gameScore
		<< endl;
	cout << "Your current letter score is "
		<< letterLevel
		<< endl;
	cout << "The color of your game level is "
		<< gameLevelColor
		<< endl;
	cout << "Are you winning? "
		<< boolalpha		//This line allows the word 'true' or 'false' to be printed instead of '0' or '1'
		<< isPlayerWinning
		<< endl;
	return 0;
}
