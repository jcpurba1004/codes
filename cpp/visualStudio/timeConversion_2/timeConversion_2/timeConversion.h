#pragma once
#ifndef TIMECONVERSION_H_
#define TIMECONVERSION_H_

//#define DEBUG 1

#define SECONDS_IN_MINUTES 60
#define MINUTES_IN_HOURS   60
#define MAX_HOURS          12
#define ZERO                0

void min2Hours12(void);
void secMinHours2Hours(void);

int divTwelve(int hours);
int modSixty(int min);
int divideSixty(int min);


#endif

