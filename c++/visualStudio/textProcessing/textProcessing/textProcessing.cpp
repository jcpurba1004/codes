// textProcessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// Program: Line and Letter Count
// This program reads a text, outputs the text as is, and also
// prints the number of lines and the number of times each
// letter appears in the text. An uppercase letter and a
// lowercase letter are treated as being the same; that is,
// they are tallied together.
//***************************************************************

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);

int main()
{
        //Step 1; Declare variables
    int lineCount;
    int letterCount[26];
    char ch;
    ifstream infile;
    ofstream outfile;

    infile.open("textin.txt");

    if (!infile)
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    outfile.open("text.out");

    initialize(lineCount, letterCount);

    infile.get(ch);

    while (infile)
    {
        copyText(infile, outfile, ch, letterCount);
        lineCount++;
        infile.get(ch);
    }

    writeTotal(outfile, lineCount, letterCount);

    infile.close();
    outfile.close();

    return 0;
}

void initialize(int& lc, int list[])
{
    lc = 0;

    for (int j = 0; j < 26; j++)
        list[j] = 0;
} //end initialize

void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
    while (ch != '\n')      //process the entire line
    {
        outtext << ch;      //output the character

        characterCount(ch, list);   //call the function
                                    //character count
        intext.get(ch);     //read the next character
    }
    outtext << ch;          //output the newline character
} //end copyText

void characterCount(char ch, int list[])
{
    int index;

    ch = toupper(ch);

    index = static_cast<int>(ch)
            - static_cast<int>('A');

    if (0 <= index && index < 26)
        list[index]++;
} //end characterCount

void writeTotal(ofstream& outtext, int lc, int list[])
{
    outtext << endl;
    outtext << "The number of lines = " << lc << endl;

    for (int index = 0; index < 26; index++)
        outtext << static_cast<char>(index + static_cast<int>('A'))
                << " count = " << list[index] << endl;
} //end withdrawal

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void initialize(int& lc, int list[])
{
}

void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
}

void characterCount(char ch, int list[])
{
}

void writeTotal(ofstream& outtext, int lc, int list[])
{
}
