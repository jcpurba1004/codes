#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

Daughter::Daughter() {
	cout << "I am the Daughter constructor" << endl;
}

Daughter::~Daughter() {
	cout << "Daughter constructor" << endl;
}