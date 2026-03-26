//  display of ap 
//  nth term formula  =
// an = a1 + (n-1)d
// display this Ap - 1,3,5,7,9 .. upto 'n' terms
// an = a1+ (n-1)d
// an = 1 +(n-1)*2
// an = 1  + 2n -2 
// an = 2n-1
#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<< "enter n :";
    cin>> n;
    for (int i =1 ; i<= 2*n-1; i+=2){
        cout << i<< " ";

    }
}
