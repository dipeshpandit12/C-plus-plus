// Dipesh Pandit, rab347
// 2024-09-24

#include <iostream>
using namespace std;

int main()
{

    int number, hidden_multiple;
    cout << " Sequence Generator 2000!" << endl;

    cout << " Enter a number: ";
    cin >> number;

    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;

    if (hidden_multiple > 0 && number > 0)
    {
        for (int i = 1; i <= number; i++)
        {
            if (i % hidden_multiple != 0)
            {
                cout << i << " | ";
            }
            else
            {
                cout << "# | ";
            }
        }
    }
    else
    {
        cout << " ERROR: number and multiples must be larger than 0";
    }
    return 0;
}