#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

void Daughter::doSomething() {
	publicv = 1;
	protectedv = 2;
	privatev = 3;
}