// unit6Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void forLoop_1(void) {
    int total = 0;
    for (int s = 1; s < 15; s++)
    {
        total = total + s;
    }
    cout << (total);
}

void forLoop_2(void) {
    for (int x = 20; x < 40; x = x + 3)
    {
        cout << x << " ";
    }
}

void forLoop_3(void) {
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 2)
                break;
        }
    }
}

void forLoop_4(void) {
    for (int x = 20; x < 40; x = x + 3)
    {
        cout << (x);
    }
}

int main()
{
    int res;

    //res = sqrt(sqrt(pow(2, 4)));

    cout << pow(4, 2) << endl;

    float x = 36.0;
    x = sqrt(x);

    //cout << res << endl;
    //forLoop_1();
    //forLoop_2();
    //forLoop_3();
    //forLoop_4();
}