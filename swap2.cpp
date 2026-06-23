// to swap two number without using temp variable 
#include<iostream>
using namespace std;
int main(){
    int x=2;
    int y= 5;
    cout<<x<<" "<<y<<endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<x<<" "<<y<<endl;
}

//        x= 2    y= 4
// x + y: 2+4     x - y: 2+4-4
// x - y: 2+4-2
//        x= 4    y=2
