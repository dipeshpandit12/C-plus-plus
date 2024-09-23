// Dipesh Pandit, rab347
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream in_file("products.txt");
    ofstream out_file("categorized_products.txt");

    if (!in_file.is_open() || !out_file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    bool hasExcellent = false, hasAverage = false, hasPoor = false;

    // First loop for Excellent products
    while (getline(in_file, line)) {
        istringstream iss(line);
        string productName, category;
        int qualityScore;

        size_t lastSpace = line.find_last_of(' ');
        size_t secondLastSpace = line.find_last_of(' ', lastSpace - 1);

        productName = line.substr(0, secondLastSpace);
        category = line.substr(secondLastSpace + 1, lastSpace - secondLastSpace - 1);
        qualityScore = stoi(line.substr(lastSpace + 1));

        if (qualityScore >= 85) {
            if (!hasExcellent) {
                out_file << "Excellent:\n";
                hasExcellent = true;
            }
            out_file << productName << " (" << category << ") - " << qualityScore << "\n";
        }
    }

    in_file.clear();
    in_file.seekg(0);

    while (getline(in_file, line)) {
        istringstream iss(line);
        string productName, category;
        int qualityScore;

        size_t lastSpace = line.find_last_of(' ');
        size_t secondLastSpace = line.find_last_of(' ', lastSpace - 1);

        productName = line.substr(0, secondLastSpace);
        category = line.substr(secondLastSpace + 1, lastSpace - secondLastSpace - 1);
        qualityScore = stoi(line.substr(lastSpace + 1));

        if (qualityScore >= 50 && qualityScore < 85) {
            if (!hasAverage) {
                out_file << "\nAverage:\n";
                hasAverage = true;
            }
            out_file << productName << " (" << category << ") - " << qualityScore << "\n";
        }
    }

    // Third loop for Poor products
    in_file.clear();
    in_file.seekg(0);

    while (getline(in_file, line)) {
        istringstream iss(line);
        string productName, category;
        int qualityScore;

        size_t lastSpace = line.find_last_of(' ');
        size_t secondLastSpace = line.find_last_of(' ', lastSpace - 1);

        productName = line.substr(0, secondLastSpace);
        category = line.substr(secondLastSpace + 1, lastSpace - secondLastSpace - 1);
        qualityScore = stoi(line.substr(lastSpace + 1));

        if (qualityScore < 50) {
            if (!hasPoor) {
                out_file << "\nPoor:\n";
                hasPoor = true;
            }
            out_file << productName << " (" << category << ") - " << qualityScore << "\n";
        }
    }

    in_file.close();
    out_file.close();

    cout << "Product categorization completed!" << endl;
    return 0;
}
