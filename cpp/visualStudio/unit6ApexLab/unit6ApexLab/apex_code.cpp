//
//  Jeremiah Purba
#include <iostream>
#include <cmath>
#include "apex_code.h"

using namespace std;

// This function calculates how many tiles are needed to cover a floor.
// The inputs to the function are height in feet, width in feet, width in feet and tile
// size in inches. The output of the function is the number of tiles.
// Think about how tiles are laid out, you have whole tiles until you get 
// the last tile where mostly like the last tile won't fit, so you need a 
// partial tile. Once a tile is cut to fit a space it can't be reused.
int getNumberTiles(double heightInFt, double widthInFt, int tileSizeInInches) {

	const double foot2Inch = 12.00; // conversion factor from foot to inch
	double heightInInches, widthInInches;
	int heightDiv, widthDiv, fullTile;
	int totalTile;

	// convert from foot to inch
	heightInInches = heightInFt * foot2Inch;
	widthInInches = widthInFt * foot2Inch;

	// calculate the full part
	widthDiv = (int)widthInInches / tileSizeInInches; // full part
	heightDiv = (int)heightInInches / tileSizeInInches; // full part

	fullTile = widthDiv * heightDiv; // full tile part

	// fraction part: check it width is divisible by tile size or not
	if (fmod(widthInInches, tileSizeInInches)) {

		widthDiv += 1;   // if not, need one more tile
	}

	// fraction part: check if height is divisible by tile size or not
	if (fmod(heightInInches, tileSizeInInches)) {

		heightDiv += 1;   // if not, need one more tile
	}

	totalTile = widthDiv * heightDiv;

	// return total tile with fraction part
	return totalTile;

}

// This function takes two characters, checks if they are both upper case.
// The function returns true only if both characters are upper case.
// It return false otherwise.
bool upperCharAnd(unsigned char char1, unsigned char char2) {

	if (isupper(char1) && isupper(char2)) {

		return true; //Both char 1 and char 2 are upper case
	}
	else if (isupper(char1) || isupper(char2)) {

		return false; //Either char 1 or char 2 is upper case. Not both
	}
	else {

		return false; //Both char 1 and char 2 are small case.
	}
}