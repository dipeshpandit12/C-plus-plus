#include <iostream>
using namespace std;

int main()
{

    int day;

    cout << " Enter the day of the week in number as Sunday = 1, Monday = 2 etc. to know the origin of the Word" << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday is named after a star (the sun), and means day of the sun";
        break;
    case 2:
        cout << "Monday comes from dies Lunae (in Latin), which means Moon’s Day";
        break;
    case 3:
        cout << "Tuesday comes from the Nordic God’s day, or Tiw’s day";
        break;
    case 4:
        cout << "Wednesday, or Wōdnesdæg, means the day of Odin";
        break;
    case 5:
        cout << "Thursday is named after the Norse God, Thor, and means Thor’s day";
        break;
    case 6:
        cout << "Friday, or day of Frigg, is named after the Norse goddess Frigg.";
        break;
    case 7:
        cout << "Saturday is named after the planet Saturn, and means day of Saturn";
        break;
    default:
        cout << "some error in prog";
    }

    return 0;
}