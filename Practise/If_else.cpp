#include <iostream>
using namespace std;

int main(){

    int age;
    cin >> age;
    if(age>18){
        cout << "you are eligible to drive";
    }
    else if (age==18){
        cout << "You can now process for your driving lisence";
    }
    else{
        cout << "you are not eligible to drive";
    }

}