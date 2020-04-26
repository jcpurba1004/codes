// salesDataAnalysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// Program: Sales Data Analysis
// This program processes sales data for a company. For each
// salesperson, it outputs the ID, the total sales by each
// quarter and the total sales for the year. It also outputs
// the salesperson's ID generating the maximum sale for the 
// year and the sales amount. The quarter generating the
// maximum sale and the sales amount is also output.
//***************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NO_OF_SALES_PERSON = 6;

struct salesPersonRec
{
    string ID;      //salesperson's ID
    double saleByQuarter[4]; //array to store the total
                             //sales for each quarter
    double totalSale;  //salesperson's yearly sales amount
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double totalByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main()
{
        //Step 1
    ifstream infile;    //input file stream variable
    ofstream outfile;   //output file stream variable
    string inputfile;   //variable to hold the input file name
    string outputfile;   //variable to hold the output file name
}

    double totalSaleByQuarter[4];    //array to hold the
                                     //sale by quarter

    salesPersonRec salesPersonList[NO_OF_SALES_PERSON];  //array
                                //to hold the salesperson's data

    cout << "Enter the salesPerson ID file name: ";
    cin >> inputFile;
    cout << endl;

    infile.open(inputFile.c_str());

    if (!infile)
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    initialize(infile, salesPersonList, NO_OF_SALES_PERSON);

    infile.close();
    infile.clear();

    cout << "Enter the sales data file name: ";
    cin >> inputFile;
    cout << endl;

    infile.open(inputFile.c_str());

    if (!infile)
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    initialize(infile, salesPersonList, NO_OF_SALES_PERSON);

    infile.close();
    infile.clear();

    cout << "Enter the sales data file name: ";
    cin >> inputFile;
    cout << endl;

    outfile.open(inputFile.c_str());

    outfile << fixed << showpoint
            << setprecision(2);

    getData(infile, salesPersonList, NO_OF_SALES_PERSON);
    saleByQuarter(salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
    totalSaleByPerson(salesPersonList, NO_OF_SALES_PERSON);

    printReport(outfile, salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
    maxSaleByPerson(outfile, salesPersonList, NO_OF_SALES_PERSON);
    maxSaleByQuarter(outfile, totalSaleByQuarter);

    infile.close();
    outfile.close();

    return 0;
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