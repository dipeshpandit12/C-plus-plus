// Dipesh Pandit, rab347

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a value: ";
    //get the input
    cin >> n;

    for (int i = 0; i <=n ; i++) {
        for (int j=0; j<n-i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}