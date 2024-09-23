#include <iostream>
using namespace std;

int main()
{

   int hours_per_day;
   int minutes_per_hour;
   int total_mins_per_day;

   hours_per_day = 24;
   minutes_per_hour =60;

   total_mins_per_day = hours_per_day*minutes_per_hour;

   cout << "The total number of minutes in one day are: " << total_mins_per_day << endl;

   return 0;
}