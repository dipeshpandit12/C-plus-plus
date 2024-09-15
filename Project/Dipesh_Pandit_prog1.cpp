/*=====================================================================
Program: Calculate the one side of triange with the given two sides
Author: Dipesh Pandit , rab347
Class: CS.1428.H01
Instructor: Dr. Ziliang Zong
Date: Sep 11, 2024
Description:
Input: 10,20
Output: 22.3607
Compilation instructions:
Usage:
Modifications:
Date Comment: Sep 11 2024
---- ------------------------------------------------
======================================================================*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // variable declarations
    double length_A , length_B, hypotenuse_length;

    cout << "Input the length of side A: ";
    cin >> length_A;

    cout << "Input the length of side B: ";
    cin >> length_B;

    hypotenuse_length = sqrt(pow(length_A,2) + pow(length_B,2));

    cout << "The length of the hypotenuse is " << hypotenuse_length << endl;

    cout << "Input the length of the hypotenuse: ";
    cin >> hypotenuse_length;

    cout << "Input the length of Side A: ";
    cin >> length_A;

    length_B = sqrt( pow(hypotenuse_length, 2) - pow(length_A, 2));

    cout << "The length of Side B is " << length_B << endl;

    return 0;

}