// programmingExercise9-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

/* Define studentType structure */
struct studentType
{
    string studentFName;
    string studentLName;
    int    testScore;
    char   grade;
};

/* function prototype */
void initialize(ifstream& inFile, studentType studentList[], int listSize);
void getData(ifstream& inFile, studentType studentList[], int listSize);
void calculateGrade(studentType studentList[], int listSize);
int  highestScore(const studentType studentList[], int listSize);
void printResult(ofstream& outFile, const studentType studentList[], int listSize);

int main()
{
    ifstream inFile;
    ofstream outFile;
    int indexHighest = 0;
    const int TOTALSTUDENT = 20;
    studentType studentList[TOTALSTUDENT]; // 20 students in the class

    inFile.open("Ch9_Ex2Data.txt");
    if (!inFile)
    {
        cout << "Cannot open input file, please check it !" << endl;
    }

    outFile.open("Ch9_Ex2Out.txt");
    if (!outFile)
    {
        cout << "Cannot open output file, please check it !" << endl;
    }

    initialize(inFile, studentList, TOTALSTUDENT);
    getData(inFile, studentList, TOTALSTUDENT);
    calculateGrade(studentList, TOTALSTUDENT);
    indexHighest = highestScore(studentList, TOTALSTUDENT);
    printResult(outFile, studentList, TOTALSTUDENT);

    inFile.close();
    outFile.close();

    return 0;
}

void initialize(ifstream& inFile, studentType studentList[], int listSize) {
    int index;
    for (index = 0; index < listSize; index++) {
        studentList[index].testScore = 0;
        studentList[index].grade = 'I';
    }
}
void getData(ifstream& inFile, studentType studentList[], int listSize) {

    int index;
    for (index = 0; index < listSize; index++) {
        inFile >> studentList[index].studentFName;
        inFile >> studentList[index].studentLName;
        inFile >> studentList[index].testScore;
    }
}
void calculateGrade(studentType studentList[], int listSize) {

    int index;
    for (index = 0; index < listSize; index++) {

        if (studentList[index].testScore < 50) // F: 0 < testScore < 50
            studentList[index].grade = 'F';

        else if (studentList[index].testScore < 60) // E: 50 <= testScore < 60
            studentList[index].grade = 'E';

        else if (studentList[index].testScore < 70) // F: 60 <= testScore < 70
            studentList[index].grade = 'D';

        else if (studentList[index].testScore < 80) // E: 70 <= testScore < 80
            studentList[index].grade = 'C';

        else if (studentList[index].testScore < 90) // F: 80 <= testScore < 90
            studentList[index].grade = 'B';

        else if (studentList[index].testScore < 100) // F: 90 <= testScore < 100
            studentList[index].grade = 'A';

        else
            cout << "The test score is out of range 0-100" << endl;

    }
}

int  highestScore(const studentType studentList[], int listSize) {
    int index;
    int highest = 0;
    int indexHighest = 0;

    for (index = 0; index < listSize; index++) {

        if (studentList[index].testScore > highest) {
            highest = studentList[index].testScore;
            indexHighest = index;
        }
    }

    return indexHighest;
}

void printResult(ofstream& outFile, const studentType studentList[], int listSize) {

    int index;

    outFile << "\n";
    cout << "\n";

    for (index = 0; index < listSize; index++) {
        outFile << studentList[index].studentLName << ", ";
        cout << studentList[index].studentLName << ", ";

        outFile << studentList[index].studentFName << " ";
        cout << studentList[index].studentFName << " ";

        outFile << studentList[index].testScore << " ";
        cout << studentList[index].testScore << " ";

        outFile << studentList[index].grade << endl;
        cout << studentList[index].grade << endl;;
    }
}