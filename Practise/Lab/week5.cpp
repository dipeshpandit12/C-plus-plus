#include <iostream>
using namespace std;

int main(){

    int number,hidden_multiple;
    cout << " Sequence Generator 2000!" <<endl;

    cout << " Enter a number: ";
    cin >> number;

    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;

    for (int i=1; i<=number;i++){
        if(i % hidden_multiple != 0){
            cout << i << " | ";
        }else{
            cout << "# | ";
        }
    }
    if(number <=0 || hidden_multiple <=0){
        cout << " ERROR: number and multiples must be larger than 0";
    }
}