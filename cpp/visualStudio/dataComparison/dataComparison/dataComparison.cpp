// dataComparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//*********************************************************
// Author: Jeremiah Purba
//
// Program: Comparison of Class Averages
// This program computes and compares the class averages of
// two groups of students.
//*********************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

    //function prototype
void calculateAverage(ifstream& inp, double& courseAvg);
void printResult(ofstream& outp, string courseId, int groupNo, double avg);

int main()
{
        //Step 1
    string courseId1;       //course ID for group 1
    string courseId2;       //course ID for group 2
    int numberOfCourses;
    double avg1;            //average for a course in group 1
    double avg2;            //average for a course in group 2
    double avgGroup1;       //average group 1
    double avgGroup2;       //average group 2
    ifstream group1;        //input stream variable for group 1
    ifstream group2;        //input stream variable for group 2
    ofstream outfile;       //output stream variable

    group1.open("group1.txt");
    group2.open("group2.txt");

    if (!group1 || !group2)
    {
        cout << "Unable to open files." << endl;
        cout << "Program terminates." << endl;
        return 1;
    }

    outfile.open("student.out");
    outfile << fixed << showpoint;
    outfile << setprecision(2);

    avgGroup1 = 0.0;
    avgGroup2 = 0.0;
    numberOfCourses = 0;

    outfile << "Course No    Group No    "
            << "Course Average" << endl;

    group1 >> courseId1;
    group2 >> courseId2;
    while  (group1 && group2)
    {
        if (courseId1 != courseId2)
        {
            cout << "Data error: Course IDs "
                 << "do not match." << endl;
            cout << "Program terminates." << endl;
            return 1;
        }
        else
        {
            calculateAverage(group1, avg1);
            calculateAverage(group2, avg2);
            printResult(outfile, courseId1, 1, avg1);
            printResult(outfile, courseId2, 2, avg2);
            avgGroup1 = avgGroup1 + avg1;
            avgGroup2 = avgGroup2 + avg2;
            outfile << endl;
            numberOfCourses++;
        }

        group1 >> courseId1;
        group2 >> courseId2;
    } // end while

    if (group1 && !group2)
        cout << "Ran out of data for group 2 "
             << "before group 1." << endl;
    else if (!group1 && group2)
        cout << "Ran out of data for group 1 "
             << "before group 2." << endl;
    else
    {
        outfile << "Avg for group 1: "
                << avgGroup1 / numberOfCourses
                << endl;
        outfile << "Avg for group 2: "
                << avgGroup2 / numberOfCourses
                << endl;
    }
        group1.close();
        group2.close();
        outfile.close();

        return 0;
    }

    void calculateAverage(ifstream& inp, double& courseAvg)
    {
        double totalScore = 0.0;
        int numberOfStudents = 0;
        int score;

        inp >> score;
        while (score != -999)
        {
            totalScore = totalScore + score;
            numberOfStudents++;
            inp >> score;
        } //end while

        courseAvg = totalScore / numberOfStudents;
    } //end calculate Average

    void printResult(ofstream& outp, string courseID, int groupNo, double avg)
    {
        if (groupNo == 1)
           outp << "  " << courseID << "   ";
        else
           outp << "        ";

        outp << setw(8) << groupNo << setw(17) << avg << endl;
    } //end printResult

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void calculateAverage(ifstream& inp, double& courseAvg)
{
}

void printResult(ofstream& outp, string courseId, int groupNo, double avg)
{
}
