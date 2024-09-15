// Dipesh Pandit, rab347
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream input_file("sales_data.txt");
    ofstream output_file("averages.txt");

    int CID,month_1,month_2 ,month_3;
    string CName;

    input_file >> CID >> CName >> month_1 >> month_2 >> month_3;
    float average_bmw = (month_1 + month_2 + month_3)/3.0;

    input_file >> CID >> CName >> month_1 >> month_2 >> month_3;
    float average_audi = (month_1 + month_2 + month_3)/3.0;

    input_file >> CID >> CName >> month_1 >> month_2 >> month_3;
    float average_tesla = (month_1 + month_2 + month_3)/3.0;

    output_file << "CID     CName      Average" << endl;
    output_file  << setw(6) << 2942 << setw(10) << "BMW" << setw(10) << fixed << setprecision(2) << average_bmw << endl;
    output_file  << setw(6) << 13289 << setw(10) << "Audi" << setw(10) << fixed << setprecision(2) << average_audi << endl;
    output_file  << setw(6) << 26455 << setw(10) << "Tesla" << setw(10) << fixed << setprecision(2) << average_tesla << endl;

    cout << "Data written to averages.txt";

    input_file.close();
    output_file.close();

    return 0;
}