#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally() {
}

void Sally::printShiz() {
	cout << "i am a regular function" << endl;
}

void Sally::printShiz2() const {
	cout << "i am the constant function" << endl;
}