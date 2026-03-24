//if the ages of ram, shyam and Ajay are input through the keyboard.
// write a program to determine the youngest of the three.
#include<iostream>
using namespace std;
int main(){
    int r,s , a;
    cout<< "enter ram age";
    cin >> r;
    cout << "enter shyam age";
    cin>> s;
    cout <<"enter ajay age ";
    cin>> a ;
    if (r<s){
        if (r<a){
            cout<< "r is youngest";

        }
        else {
            cout<< "a is youngest";

        }

    }
    else {
        if (s>a){
            cout<< "a is youngest";
        }
        else {
            cout<< "s is youngest";
        }
    }
}