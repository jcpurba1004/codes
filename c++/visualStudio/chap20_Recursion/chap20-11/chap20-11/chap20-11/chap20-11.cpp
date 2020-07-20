// chap20-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the QuickSort Algorithm
#include <iostream>
using namespace std;

// Function prototypes
void quickSort(int [], int, int);
int partition(int [], int, int);
void swap(int &, int &);

int main()
{
    const int SIZE = 10;  // Array size
    int count;            // Loop counter
    int array[SIZE] = {7, 3, 9, 2, 0, 1, 8, 4, 6, 5};

    // Display the array contents.
    for (count = 0; count < SIZE; count++)
        cout << array[count] << " ";
    cout << endl;

    // Sort the array.
    quickSort(array, 0, SIZE - 1);

    // Display the array contents.
    for (count = 0; count < SIZE; count++)
        cout << array[count] << " ";
    cout << endl;
    return 0;
}

//**********************************************
// quickSort uses the quicksort algorithm to   *
// sort set, from set[start] through set[end]. *
//**********************************************

void quickSort(int set[], int start, int end)
{
    int pivotPoint;

    if (start < end)
    {
        // Get the pivot point.
        pivotPoint = partition(set, start, end);
        // Sort the first sublist.
        quickSort(set, start, pivotPoint - 1);
        // Sort the second sublist.
        quickSort(set, pivotPoint + 1, end);
    }
}

//**********************************************************
// partition selects the value in the middle of the        *
// array set as the pivot. The list is rearranged so       *
// all the values less than the pivot are on its left      *
// and all the values greater than pivot are on its right. *
//**********************************************************

int partition(int set[], int start, int end)
{
    int pivotValue, pivotIndex, mid;

    mid = (start + end) / 2;
    swap(set[start], set[mid]);
    pivotIndex = start;
    pivotValue = set[start];
    for (int scan = start + 1; scan <= end; scan++)
    {
        if (set[scan] < pivotValue)
        {
            pivotIndex++;
            swap(set[pivotIndex], set[scan]);
        }
    }
    swap(set[start], set[pivotIndex]);
    return pivotIndex;
}

//****************************************
// swap simply exchanges the contents of *
// value1 and value2.                    *
//****************************************

void swap(int &value1, int &value2)
{
    int temp = value1;

    value1 = value2;
    value2 = temp;
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