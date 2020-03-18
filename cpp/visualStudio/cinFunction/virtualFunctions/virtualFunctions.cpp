// virtualFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Enemy {
    public:
        virtual void attack() {}
   };

class Ninja : public Enemy {
public:
    void attack() {
        cout << "ninja attack!" << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "monster attack!" << endl;
    }
};

int main() {
    Ninja n;
    Monster m;
    Enemy* enemy1 = &n;
    Enemy* enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
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
