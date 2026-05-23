//return type : sum function se samajte hai  


#include<iostream>
using namespace std;
//       ( formal parameter)
void sum( int a, int b){
    cout<<a+b;
}
int main(){
    int a;
    cout<<" Enter 1st Number : ";
    cin>>a;
    int b;
    cout<<" enter 2nd Number :";
    cin>>b;
    sum(a,b);
    // (actual parameter )
    //  ( values a,b)
}
//  pass by value - passing value from actual parameter to formal parameter.