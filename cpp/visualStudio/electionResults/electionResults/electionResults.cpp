// electionResults.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// This program processes voting data for student council
// president's post. It outputs each candidate's name and the
// total votes received by each candidate. The name of the
// winner is also printed.
//***************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int NO_OF_CANDIDATES = 6;
const int NO_OF_REGIONS = 4;

void printHeading();

void initialize(int vbRegion[][NO_OF_REGIONS], int tVotes[], int noOfRows);

void getCandidatesName(ifstream& inp, string cNames[], int noOfRows);

void sortCandidatesName(string cNames[], int noOfRows);

void binSearch(string cNames[], int noOfRows, string name);

void processVotes(ifstream& inp, string cNames[], int vbRegion[] [NO_OF_REGIONS], int noOfRows);

void addRegionsVote(int vbRegion[][NO_OF_REGIONS],  int tVotes[], int noOfRows);

void printResults(string cNames[], int vbRegion[][NO_OF_REGIONS], int tVotes[], int noOfRows);

int main()
{
      //Declare variables; Step 1
    string candidatesName[NO_OF_CANDIDATES];
    int votesByRegion[NO_OF_CANDIDATES] [NO_OF_REGIONS];
    int totalVotes[NO_OF_CANDIDATES];
    ifstream infile;

    infile.open("candData.txt");
    if (!infile)
    {
        cout << "Input file (candData.txt) does "
             << "not exit." << endl;
        return 1;
    }

    getCandidatesName(infile, candidatesName, NO_OF_CANDIDATES);
    sortCandidatesName(candidatesName, NO_OF_CANDIDATES);

    infile.close();
    infile.clear();

    infile.open("voteData.txt");
    if (!infile)
    {
        cout << "Input file (voteData.txt) does "
             << "not exist." << endl;
        return 1;
    }

    initialize(votesByRegion, totalVotes, NO_OF_CANDIDATES);
    processVotes(infile, candidatesName, votesByRegion, NO_OF_CANDIDATES);
    addRegionsVote(votesByRegion, totalVotes, NO_OF_CANDIDATES);

    printHeading();
    printResults(candidatesName, votesByRegion, totalVotes, NO_OF_CANDIDATES);

    return 0;
}

//Place the definitions of the functions initialize,
//getCandidatesName, sortCandidatesName, binSearch,
//processVotes, addRegionsVote, printHeading and
//printResults here.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file