//Name:Dipesh Pandit, rab347

//Date: Sept 28, 2024

// Lab 9 Pre-Lab Assignment

// Program takes 7 numbers from a user (from console), stores them into an
// array, and then prints them to the screen (on the same line).

#include <iostream>
using namespace std;

int main()
{
    const int size = 7;  // size of array

    //an array of integers that will hold 7 integers.
    int numbers[size];

    cout << "please enter 7 integers : " << endl;

    // For loop takes 7 integers from user and stores them in the array
    for (int i = 0 ; i < size ; i++)
    {
        cin >> numbers[i];
    }

    cout  << "The numbers are :" << endl;

    //a for loop to print the array to the screen
    for ( int i=0; i< size; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}