#include <iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout << "you are prompt to enter the four different number";

    cout << "enter the first number a" ;
    cin >> a;

    cout << "enter the second number a" ;
    cin >> b;

    cout << "enter the third number a" ;
    cin >> c;

    cout << "enter the fourth number a" ;
    cin >> d;

    if( a > b && a > c && a >d){

        cout << "The first input number " << a << " is the larget";

    }else if (b > c && b > d && b >a){
        cout << "The second input number " << b << " is the larget";

    }else if (c > d && c > b && c >a){
        cout << "The third input number " << c << " is the larget";
    }
    else if (d > a && d > b && d >c){
        cout << "The fourth input number " << d << " is the larget";

    }else{
        cout << "sth error in code";
    }

}