// codeDetection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//****************************************************************
// Author: Jeremiah Purba
//
// Program: Check Code
// This program determines whether a code is transmitted
// correctly.
//****************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAZX_CODE_SIZE = 250;

int main();

void readCode(ifstream& infile, int list[],
              int& length, bool& lenCodeOk);
void compareCode(ifstream& infile, ofstream& outfile,
                const int list[], int length);

int main()
{
        //Step 1
    int codeArray[MAX_CODE_SIZE];  //array to store the secret
                                   //code
    int codeLength;                //variable to store the
                                   //length of the secret code
    bool lengthCodeOk;  //variable to indicate if the length
                        //of the secret code is less than or
                        //equal to 250

    ifstream incode;    //input file stream variable
    ofstream incode;    //output file stream variable

    char inputFile[51]; //variable to store the name of the
                        //input file
    char inputFile[51]; //variable to store the name of
                        //the output file

    cout << "Enter the input file name: ";
    cin >> inputFile;
    cout << endl;

    outcode.open(outputFile);

    readCode(incode, codeArray, codeLength, lengthCodeOk);

    if (lengthCodeOk)
        compareCode(incode, outcode, codeArray, codeLength);
    else
        cout << "Length of the secret code "
             << "must be <= " << MAX_CODE_SIZE
             << endl;

    incode.close();
    outcode.close();

    return 0;
}

//Place the definitions of the functions readCode and
//compareCode, as described previously, here.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void readCode(ifstream& infile, int list[], int& length, bool& lenCodeOk)
{
}

void compareCode(ifstream& infile, ofstream& outfile, const int list[], int length)
{
}
