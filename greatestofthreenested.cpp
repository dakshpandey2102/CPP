#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "enter 1 number";
    cin>> a;
    cout<< "enter 2 number";
    cin>> b;
    cout<< "enter 3 number";
    cin>> c;    
    // a>b and b>c -> a>c -> a is greatest
    // a>b and c>a -> c is greatest
    // b>a and b>c -> b is greatest     
    if (a>b){// b can never be th greatest 
        if (a>c){
            cout<< a <<" is greatest ";
        }
        else {// c>a , a>b -> c>a>b
            cout<< c<< "is greatest";

        }
    }
    else{// b>a -> a can never be greatest
        if(b>c){
            cout << b<< " is greatest";

        }
        else{// c>b , c>b>a
            cout<< c<< " is greatest";
        }
    }
    }