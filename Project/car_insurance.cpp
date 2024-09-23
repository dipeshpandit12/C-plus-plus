#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "enter your age ";
    cin >> age;

    if (age < 16)
    {
        cout << "too young, cannot buy car insurance yet";
    }
    else if (age >= 16 && age < 25)
    {
        cout << "Annual price: $4800";
    }
    else if (age >= 25 && age < 40)
    {
        cout << "Annual price: $2350";
    }
    else if (age >= 40)
    {
        cout << "Annual price: $2100";
    }
    else
    {
        cout << "Invalid age";
    }
}