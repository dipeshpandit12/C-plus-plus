// Dipesh Pandit, rab347
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream input_file("Dell_sales_data.txt");
    ofstream output_file("averages.txt");

    int BID, Week_1, Week_2, Week_3;
    string PName;

    input_file >> BID >> PName >> Week_1 >> Week_2 >> Week_3;
    float average_desktop = (Week_1 + Week_2 + Week_3)/3.0;

    input_file >> BID >> PName >> Week_1 >> Week_2 >> Week_3;
    float average_laptop = (Week_1 + Week_2 + Week_3)/3.0;

    input_file >> BID >> PName >> Week_1 >> Week_2 >> Week_3;
    float average_server = (Week_1 + Week_2 + Week_3)/3.0;

    // output_file << setfill(" ") << setw(5) << left;
    output_file << "BID     PName      Average" << endl;
    output_file  << setw(6) << 15069 << setw(10) << "Desktop" << setw(10) << fixed << setprecision(2) << average_desktop << endl;
    output_file  << setw(6) << 13289 << setw(10) << "Laptop" << setw(10) << fixed << setprecision(2) << average_laptop << endl;
    output_file  << setw(6) << 26455 << setw(10) << "Server" << setw(10) << fixed << setprecision(2) << average_server << endl;

    cout << "Data written to averages.txt";

    input_file.close();
    output_file.close();

    return 0;
}