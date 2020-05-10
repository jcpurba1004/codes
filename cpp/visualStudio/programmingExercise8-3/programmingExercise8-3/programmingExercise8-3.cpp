#include <iostream>
#include <cstdlib>

using namespace std;

int lastLargestIndex(int array[], int size, int& largest);

int main()
{
    const int N = 15;
    int arr[N] = {};
    int i;
    int location, largest;

    largest = 0;

    //cout << "Input 15 different numbers :";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    location = lastLargestIndex(arr, N, largest);
    cout << "The position of the first occurrence of the largest element in list is:" << location << endl;
    cout << "The largest element in list is:" << largest << endl;

    return 0;
}

int lastLargestIndex(int arr[], int size, int& largest)
{
    int maxIndex = 0; // start 

    for (int i = 0; i < size; i++)
    {
        //cout << "i= " << i<< " arr[maxIndex] = " << arr[maxIndex] << "; arr[i] = " << arr[i] << endl;
        if (arr[maxIndex] <= arr[i])
        {
            maxIndex = i;
            largest = arr[i];
            //cout << "First largest number: " << largest << endl;
        }
    }

    return maxIndex;
}