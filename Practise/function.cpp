#include <iostream>
using namespace std;

double area_of_circle (double radius);
string some_func ();



int main(){

    cout << area_of_circle(5.5);
    cout << some_func();
    return 0;

}

double area_of_circle (double radius){
    double area=0.0;
    area =3.14159 * radius *radius;
    return area;
}

string some_func(void){
    string text1="Hello World";
    return text1;
}


