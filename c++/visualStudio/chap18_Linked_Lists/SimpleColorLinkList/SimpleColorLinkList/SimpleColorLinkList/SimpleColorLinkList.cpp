// SimpleColorLinkList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

// This class stores the individual colors
class Color
{
    string color;
    Color* next;

    public: Color()
    {
        this->color = " ";
        this->next = NULL;
    }

    public: void setColor(string color)
    {
        if (strcmp(color.c_str(), "red") == 0 ||
            strcmp(color.c_str(), "green") == 0 ||
            strcmp(color.c_str(), "blue") == 0)
        {
            this->color = color;
        }
        else
        {
            cout << endl << "Its not a primary color\nAborting!!!\n\n";
            exit(EXIT_FAILURE);
        }
    }

    public: void setNext(Color* next)
    {
        this->next = next;
    }

    public: string getColor()
    {
        return this->color;
    }

    public: Color* getNext()
    {
        return this->next;
    }
};


// The linked list class
class PrimaryColors
{

    Color* start;

public:

    PrimaryColors()
    {
        this->start = NULL;
    }

    void append(string color)
    {
        Color* newColor = new Color();
        Color* temp = this->start;

        newColor->setColor(color);
        newColor->setNext(NULL);

        if (this->start == NULL)
            this->start = newColor;
        else
        {
            while (temp->getNext() != NULL)
            {
                temp = temp->getNext();
            }
            temp->setNext(newColor);
        }
    }

    int insert(int i, string color)
    {
        Color* temp = this->start, * temp2;

        Color* newColor = new Color();
        newColor->setColor(color);

        // To add at the beginning
        if (i == 0)
        {
            newColor->setNext(this->start);
            this->start = newColor;
        }
        else
        {
            int j = 1;
            while (j <= i && temp->getNext() != NULL)
            {
                temp = temp->getNext();
                j++;
            }

            // If the position is not present
            if (i != j)
                return -1;
            else
            {
                temp2 = temp->getNext();
                temp->setNext(newColor);
                newColor->setNext(temp2);
            }
        }

        return 1;
    }

    int Delete(int i)
    {
        Color* temp = this->start, * temp2;

        // To add at the beginning
        if (i == 0)
        {
            temp = this->start;
            start = start->getNext();
            delete(temp);
        }
        else
        {
            int j = 0;
            while (j < i && temp->getNext() != NULL)
            {
                temp = temp->getNext();
                j++;
            }

            // If the position is not present
            if (i != j)
                return -1;
            else
            {
                temp2 = temp->getNext();
                temp->setNext(temp->getNext());
                delete(temp2);
            }
        }

        return 1;
    }

    void reverse()
    {
        Color* temp = this->start;
        Color* prev = NULL, * next = NULL;

        while (temp != NULL) {

            // Store next
            next = temp->getNext();

            // Reverse current node's pointer
            temp->setNext(prev);

            // Move pointers one position ahead.
            prev = temp;
            temp = next;
        }

        this->start = prev;
    }

    void print()
    {
        Color* temp = this->start;

        while (temp != NULL)
        {
            cout << temp->getColor() << endl;
            temp = temp->getNext();
        }
    }

    int search(string color)
    {
        int index = 0;
        Color* temp = this->start;

        while (temp != NULL)
        {
            if (strcmp(temp->getColor().c_str(), color.c_str()) == 0)
                break;
            index++;
            temp = temp->getNext();
        }

        if (temp != NULL)
            return index;
        else
            return -1;
    }


    Color* getStart()
    {
        return this->start;
    }
};


int main()
{
    int ch;
    int pos, val;
    string color;
    PrimaryColors colorList;

    do
    {
        cout << "1. Append" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Print" << endl;
        cout << "5. Reverse" << endl;
        cout << "6. Search" << endl;
        cout << "7. Quit" << endl;

        cout << "Please choose a menu option : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "What value do you wish to append?" << endl;
            cin >> color;
            colorList.append(color);
            cout << "Color Added!\n\n";
            break;
        case 2:
            cout << "What value do you wish to insert?" << endl;
            cin >> color;
            cout << "At which postion do you wish to insert?" << endl;
            cin >> pos;
            val = colorList.insert(pos, color);

            if (val == -1)
            {
                cout << "**I'm sorry but there is no position " << pos << " in the linked list.\n\n";
            }
            else
            {
                cout << "Color Added\n\n";
            }
            break;
        case 3:
            if (colorList.getStart() != NULL)
            {
                cout << "From which postion do you wish to delete?" << endl;
                cin >> pos;
                val = colorList.Delete(pos);
                if (val == -1)
                {
                    cout << "**I'm sorry but there is no position " << pos << " in the linked list.\n\n";
                }
                else
                {
                    cout << "Color Deleted!\n\n";
                }
            }
            else
                cout << "The list is empty!!\n\n";
            break;
        case 4:
            if (colorList.getStart() != NULL)
            {
                cout << "\nThe list is : " << endl;
                colorList.print();
                cout << "\n\n";
            }
            else
                cout << "The list is empty!!\n\n";
            break;
        case 5:
            if (colorList.getStart() != NULL)
            {
                colorList.reverse();
                cout << "List Reversed!\n\n";
            }
            else
                cout << "The list is empty!!\n\n";
            break;
        case 6:
            cout << "What color do you want to find?" << endl;
            cin >> color;
            pos = colorList.search(color);
            if (pos != -1)
            {
                cout << color << " found at index : " << pos << "\n\n";
            }
            else
                cout << color << " is not in the list!!\n\n";
            break;
        case 7:
            exit(0);
        default:
            cout << "Enter a valid choice!!" << endl;
        }

    } while (ch != 7);

    return 0;
}