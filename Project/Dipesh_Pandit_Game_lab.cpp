// Dipesh Pandit, rab347
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int computer_choice = rand() % 3 + 1;
    int user_number;

    cout << "Number Guessing Game" << endl
         << "One" << endl
         << "Two" << endl
         << "Three" << endl;
    cout << "Guess a number: ";
    cin >> user_number;

    if (user_number >= 1 && user_number <= 3)
    {
        if (user_number > computer_choice)
        {

            cout << user_number << " beats " << computer_choice << "! You win !";
        }
        else if (user_number < computer_choice)
        {

            cout << computer_choice << " beats " << user_number << "! You lose";
        }
        else if (user_number == computer_choice)
        {

            cout << "You both chose " << user_number << ", It's a tie!";
        }
    }
    else
    {
        cout << "Error - Invalid Input. Terminating Program";
    }

    return 0;
}