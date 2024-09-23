/*=====================================================================
Program:  A program to indicate whether it is a primary or auxiliary highway
Author: Dipesh Pandit , rab347
Class: CS.1428.H01
Instructor: Dr. Ziliang Zong
Date: Sep 21, 2024
Description:
Input: -5, 1000
Output: "You are not paying attention. Please read the manual. Program exiting"
Compilation instructions:
Usage:
Modifications:
Date Comment: Sep 21, 2024
---- ------------------------------------------------
======================================================================*/

#include <iostream>
using namespace std;

int main()
{

    int highway_number, attempt = 0;
    bool toggle = true;
    string direction;

    while (toggle)
    {
        if (attempt == 0)
        {
            cout << "Please enter the number of a highway (range 1-999): ";
        }
        else
        {
            cout << "Please try again: ";
        }
        cin >> highway_number;

        if (highway_number > 0 && highway_number < 100)
        {
            if (highway_number % 2 == 0)
            {
                cout << "I-" << highway_number << " is primary, going east/west." << endl;
            }
            else
            {
                cout << "I-" << highway_number << " is primary, going north/south." << endl;
            }
            toggle = false;
        }
        else if (highway_number >= 100 && highway_number < 1000)
        {
            int primaryHighway = (highway_number % 100);
            if (primaryHighway != 0)
            {
                if (primaryHighway % 2 == 0)
                {
                    direction = "east/west";
                }
                else
                {
                    direction = "north/south";
                }
                cout << "I-" << highway_number << " is auxiliary, serving I-" << primaryHighway << ", going " << direction << ".";
                toggle = false;
            }
            else
            {
                cout << highway_number << " is not a valid auxiliary highway " << endl;
            }
        }
        else
        {
            if (attempt == 0)
            {
                cout << "Incorrect number. ";
                attempt++;
            }
            else
            {
                cout << "You are not paying attention. Please read the manual." << endl;
                cout << "Program exiting";
                toggle = false;
            }
        }
    }
}
