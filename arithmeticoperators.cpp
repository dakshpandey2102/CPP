#include<iostream>
using namespace std;
int main(){
    // int x = 7 , y= 2;
    // float x = 7 , y= 2; 
    // cout<< x+ y << endl;
    // cout<< x-y << endl;
    // cout<< x*y << endl;
    // cout<< x/y << endl; // 3.5 but it will print 3

    //  for x++
    int x = 4;
    cout<< x<< endl;
    cout << x++<< endl;// it will print 4 because it will first print and then increment
    cout<< x << endl;// it will print 5 because x is now 5 after the previous line
    // for ++x
    int y= 4;
    cout<< y << endl;
    cout<< ++y << endl;   // it will print 5 because it will first increment and then print
    cout<< y << endl;
}