/*=====================================================================
Program:  A program to create a piggy bank with features like deposit,
withdrawn, statistics, exit
Author: Dipesh Pandit , rab347
Class: CS.1428.H01
Instructor: Dr. Ziliang Zong
Date: Sep 29, 2024
Description:
Input 1: 1
Input 2: 50.68
Input 3: 3
Output:{
    Quarters  202  $ 50.50
    Dimes     1    $ 0.10
    Nickels   1    $ 0.05
    Pennies   3    $ 0.03
}
Compilation instructions: read the comment and the output carefully
Usage:
Modifications:
Date Comment: Sep 29, 2024
---- ------------------------------------------------
======================================================================*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     // current balance
     double current_balance = 0.00;

     // declaring the variable to denote the type of action needed
     int action;

     // declaring the variable to denote the amount of money to be added
     double deposit_amout;
     double withdrawn_amount;

     // making the default boolean as true to make the loop continuous
     bool boolean = true;

     //  making the loop continuous
     while (boolean)
     {
          //  designing the output format
          cout << setfill('*') << setw(35) << "" << endl
               << setfill(' ');
          cout << "*" << setw(9) << "" << "Piggy Bank Menu" << setw(9)
               << "" << "*" << endl;
          cout << "*" << setfill(' ') << setw(33) << "" << "*" << endl;
          cout << "*" << setw(5) << "" << "Current Balance $" << fixed
               << setprecision(2) << current_balance << setw(5) << ""
               << "*" << endl;
          cout << setfill('*') << setw(35) << "" << endl
               << setfill(' ');
          cout << "*" << setfill(' ') << setw(33) << "" << "*" << endl;
          cout << "*" << " 1) Make Deposit" << setw(17) << "" << "*"
               << endl;
          cout << "*" << " 2) Make Withdrawal" << setw(14) << ""
               << "*" << endl;
          cout << "*" << " 3) View Coins" << setw(19) << "" << "*"
               << endl;
          cout << "*" << " 4) Exit Program" << setw(17) << "" << "*"
               << endl;
          cout << "*" << setfill(' ') << setw(33) << "" << "*" << endl;
          cout << setfill('*') << setw(35) << "" << endl
               << setfill(' ');

          // Entering the user choice
          cout << "Enter choice: ";
          cin >> action;

          // assign the case as per user input
          switch (action)
          {
          // when the user want to make deposit
          case 1:
          {
               cout << "Enter the amount to be deposited: $" << endl;
               cin >> deposit_amout;

               if (deposit_amout < 0)
               {
                    cout << "Invalid amount -- Negative values are not "
                            "allowed"
                         << endl;
               }
               else if (current_balance + deposit_amout > 900)
               {
                    double holdable_amout = 900 - current_balance;
                    cout << "The piggybank will not hold that much."
                            "You may deposit up to "
                         << holdable_amout
                         << endl;
               }
               else
               {
                    current_balance = current_balance + deposit_amout;
               }
               break;
          }
          // when the user want to does withdrawn
          case 2:
          {
               cout << "Enter the amount to be withdrawn: $ ";
               cin >> withdrawn_amount;

               if (withdrawn_amount < 0)
               {
                    cout << "Invalid amount -- Negative values are not "
                            "allowed"
                         << endl;
               }
               else if (current_balance < withdrawn_amount)
               {
                    double holdable_amout = current_balance;
                    cout << "The piggybank does not contain that much."
                            "You may withdraw up to $ "
                         << holdable_amout << endl;
               }
               else
               {
                    current_balance = current_balance - withdrawn_amount;
               }
               break;
          }
          // when the user want to see the statistic
          case 3:
          {
               // making the calculation for the total cents, nickels, quarters, pennies
               int total_cents = int(current_balance * 100 + 0.5);
               int quarters_amount = total_cents / 25;
               total_cents %= 25;

               int dimes_amount = total_cents / 10;
               total_cents %= 10;

               int nickels_amount = total_cents / 5;
               total_cents %= 5;

               int pennies_amount = total_cents;

               // formatting the output for the statistics
               cout << setfill('*') << setw(35) << "" << endl
                    << setfill(' ');
               cout << "*" << setw(12) << "" << "Statistics" << setw(11)
                    << "" << "*" << endl;
               cout << setfill('*') << setw(35) << "" << setfill(' ')
                    << endl;
               cout << "*" << setw(15) << left << "Quarters" << setw(6)
                    << quarters_amount << left << "$" << setw(11) << fixed
                    << setprecision(2) << quarters_amount * 0.25 << "*"
                    << endl;
               cout << "*" << setw(15) << "Dimes" << setw(6) << dimes_amount
                    << left << "$" << setw(11) << fixed << setprecision(2)
                    << dimes_amount * 0.10 << "*" << endl;
               cout << "*" << setw(15) << "Nickels" << setw(6) << nickels_amount
                    << left << "$" << setw(11) << fixed << setprecision(2)
                    << nickels_amount * 0.05 << "*" << endl;
               cout << "*" << setw(15) << "Pennies" << setw(6) << pennies_amount
                    << left << "$" << setw(11) << fixed << setprecision(2)
                    << pennies_amount * 0.01 << "*" << endl;
               cout << setfill('*') << setw(35) << "" << endl;
               break;
          }
          // when the user want to exit by typing the number 4
          case 4:
          {
               cout << "GOODBYE!" << endl;
               // now it create the while loop stop by making the condition false
               boolean = false;
               break;
          }
          // when the user want to quit the program
          default:
          {
               cout << "Invalid Option -- Try again" << endl;
          }
          }
     }

     return 0;
}