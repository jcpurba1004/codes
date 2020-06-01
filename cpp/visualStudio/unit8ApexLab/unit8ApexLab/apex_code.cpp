//
//
#include <iostream>
#include <cmath>
#include "apex_code.h"

using namespace std;


/*
The first function you will want to write is the capacityInMls. 
This is a member function of cup and it calculates the volume of 
our cup in milliliters. You can find the formula for calculating 
the volume of a truncated cone at Keisan Online Calculator 
(Links to an external site.). You can use cmath's definition of 
PI to help with the calculations. Since this is a member 
function of the Cup struct you will need to scope the definition 
in the .cpp file correctly, e.g. void Cup::funcName
*/

double Cup::capacityInMls(void) {
	/* volume = (1/3) * PI * (r1^2 + r1r2 + r2^2)h  */
	const double ONETHIRD = 333333333333333;
	const double PI       = 3.141592653589793238463;
	double volume = 0.0;
	volume = ONETHIRD * PI * (pow(BottomRadiusCms, 2) +
		(BottomRadiusCms * TopRadiusCms) + pow(TopRadiusCms, 2)) * HeightCms;

	return volume;
}

bool halfFull(Cup cup, double mls) {

	double halfVolume = 0.0;

	halfVolume = 0.5 * cup.capacityInMls();

	if (mls > halfVolume)
		return true;
	else
		return false;
}

double pricePerM1(Cup& cup, double pricePerDrink) {

	double totalPrice = 0.0;

	return totalPrice = cup.capacityInMls() / pricePerDrink;
}

bool fitInCupboard(Cup* cup, double height, double width) {

	const double PI = 3.141592653589793238463;
	double baseArea = 0.0;
	double topArea = 0.0;
	double cabinetArea = 0.0;
	double area = 0.0;


	cabinetArea = height * width; // assume both height and width are in cms

	// assume cup will sit in the cabinet either on top or bottom side
	// use only one area to use for cabinet
	baseArea = PI * pow(cup->BottomRadiusCms, 2);
	topArea = PI * pow(cup->TopRadiusCms, 2);

	// select the larger area to determine whether it will fit or not
	if (baseArea > topArea)
		area = baseArea;
	else
		area = topArea;

	if (cabinetArea > area)
		return true;
	else
		return false;
}