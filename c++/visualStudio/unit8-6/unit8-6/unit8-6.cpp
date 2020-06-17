// unit8-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

	//Function to initialize an int array to 0.
	//The array to be initialized and its size are passed
	//as parameters. The parameter listSize specifies the
	//number of elements to be initialized.
#include <iostream>
using namespace std;
void initializeArray(int list[], int listSize)
{
	for (int index = 0; index < listSize; index++)
		list[index] = 0;
}

	//Function to read and store the data into an int array.
	//The array to store the data and its size are passed as
	//parameters. The parameter listSize specifies the number
	//of elements to be read.
void fillArray(int list[], int listSize)
{
	for (int index = 0; index < listSize; index++)
		cin >> list[index];
}

	//Function to print the elements of an int array.
	//The array to be printed and the number of elements
	//are passed as parameters. The parameter listSize
	//specifies the number of elements to be printed.
void printArray(const int list[], int listSize)
{
	for (int index = 0; index < listSize; index++)
		cout << list[index] << " ";
}

	//Function to find and return the sum of the 
	//elements of an int array. The parameter listSize
	//specifies the number of elements to be added.
int sumArray(const int list[], int listSize)
{
	int sum = 0;

	for (int index = 0; index < listSize; index++)
		sum = sum + list[index];

	return sum;
}

	//Function to find and return the index of the first
	//largest element in an int array. The parameter list
	//specifies the number of elements in the array.
int indexLargestElement(const int list[], int listSize)
{
	int maxIndex = 0; //assume the first element is the 1

	for (int index = 1; index < listSize; index++)
		if (list[maxIndex] < list[index])
			maxIndex = index;

	return maxIndex;
}

	//Function to copy some or all of the elements of one
	//into another array. Starting at the position specified
	//by src, the elements of list1 are copied into list2
	//starting at the position specified by tar. The parameter
	//numOfElements specifies the number of elements of list1 to
	//be copied into list2. Starting at the position specified
	//by tar, the list2 must have enough components to copy the
	//elements of list1. The following call copies all of the
	//elements of list1 into the corresponding positions in
	//list2: copyArray(list1, 0, list2, 0, numOfElements)
void copyArray(int list1[], int src, int list2[], int tar, int numOfElements)
{
	for (int index = src; index < src + numOfElements; index++)
	{
		list2[tar] = list1[index];
		tar++;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file