// arraysAndStringsQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);

int main()
{
	prob1();
	cout << "\n";
	prob2();
	cout << "\n";
	prob3();
	cout << "\n";
	prob4();
	cout << "\n";
	prob5();
	cout << "\n";
}

void prob1(void) {
	int array[10] = {1};
	cout << array[4] << endl;
	for (int i = 0; i < 10; i++)
		cout << "array[" << i << "] = " << array[i] << endl;
}

void prob2(void) {
	int iarray[5] = {99,100,1};
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << "iarray[" << i << "] = " << iarray[i] << endl;
		sum += iarray[i];
	}
	cout << sum << endl;

}

void prob3(void) {
	int numbers[] = {99,87,66,55,101};
	for (int i = 1; i < 4; i++)
	cout << numbers[i] << endl;
}

void prob4(void) {
	int numbers[4] = {99,87};
	cout << numbers[4] << endl;
}

void prob5(void) {
	string string_to_test = "Hello World!";

	cout << "String Length is: "
		 << string_to_test.length()
		 << endl;
}