/*=====================================================================
Program: Determine the quadrant of the given coordinate
Author: Dipesh Pandit , rab347
Class: CS.1428.H01
Instructor: Dr. Ziliang Zong
Date: Sep 19, 2024
Description:
Input: 8,-3
Output: The point (8, -3) lies in Quadrant IV
Compilation instructions:
Usage:
Modifications:
Date Comment: Sep 19 2024
---- ------------------------------------------------
======================================================================*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream input_file("points.txt");
    if(!input_file) {
        cout << "Unable to open file points.txt" << endl;
        return 1;
    }

    //  x, y are the coordinates
    int x, y;
    input_file >> x >> y;

    // choosing input file
    input_file.close();

    // Now open the file in append mode for writing
    ofstream output_file("points.txt", ios::app);
    if (!output_file) {
        cout << "Unable to open file points.txt for writing" << endl;
        return 1;
    }
    //  print the append details in new line
    output_file << "\n";

    if( x==0 || y==0){
         output_file << "The point (" << x << ", " << y << ") lies on the axis" << endl;
    }else{
        if (x > 0 && y > 0) {
            output_file << "The point (" << x << ", " << y << ") lies in Quadrant I" << endl;
        } else if (x < 0 && y > 0) {
            output_file << "The point (" << x << ", " << y << ") lies in Quadrant II" << endl;
        } else if (x < 0 && y < 0) {
            output_file << "The point (" << x << ", " << y << ") lies in Quadrant III" << endl;
        } else if (x > 0 && y < 0) {
            output_file << "The point (" << x << ", " << y << ") lies in Quadrant IV" << endl;
        }
    }
    // closing the output file
    output_file.close();

    return 0;

}