//
// Don't modify code in this file.
//
#define _USE_MATH_DEFINES
#include <cmath>

#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H

struct Cup
{
	double TopRadiusCms;
	double BottomRadiusCms;
	double HeightCms;

	Cup(double topRadius, double bottomRadius, double height)
	{
		TopRadiusCms = topRadius;
		BottomRadiusCms = bottomRadius;
		HeightCms = height;
	}

	double capacityInMls();
};

bool halfFull(Cup cup, double mls);

double pricePerM1(Cup& cup, double pricePerDrink);

bool fitInCupboard(Cup* cup, double height, double width);

#endif //APEXLAB_APEX_CODE_H