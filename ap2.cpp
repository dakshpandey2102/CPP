// display this ap - 4,7,10,13,16 .. upto 'n' terms.
// an = a1 +(n-1)d
// an = 4 +(n-1)*3
//an = 3n+1
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "enter n :";
    cin>> n;
    // 4 7 10 13 16
    for (int i=4 ; i<= 3*n+1; i+=3){
        cout<< i<< " ";

    }
}