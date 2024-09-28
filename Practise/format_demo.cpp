#include <iostream>
#include <iomanip>
#include <ofstream>
using namespace std;

int main() 
{
   ofstream fout "format.txt";
   if(!fout){
      cout << "Unable to open file";
   }
   // Dog age in human years (dogyears.com)   
   fout << setw(10) << left  << "Dog age" << "|";
   fout << setw(12) << right << "Human age" << endl;
   
   // Produce long line   
   fout << setfill('-') << setw(23) << "" << endl;
   
   // Reset fill character back to space
   fout << setfill(' ');

   fout << setw(10) << left  << "2 months" << "|";
   fout << setw(12) << right << "14 months" << endl;
   fout << setw(10) << left  << "6 months" << "|";
   fout << setw(12) << right << "5 years" << endl;   
   fout << setw(10) << left  << "8 months" << "|";
   fout << setw(12) << right << "9 years" << endl;
   fout << setw(10) << left  << "1 year" << "|";
   fout << setw(12) << right << "15 years" << endl;

   // Produce long line
   fout << setfill('-') << setw(23) << "" << endl;
   
   return 0;
}

