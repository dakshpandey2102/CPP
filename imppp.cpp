#include<iostream>
using namespace std ;
int main(){
    cout << 5/2.0 << endl; 
    cout << 5.0/2.0<< endl;// it will print 2.5 because 2.0 is a double, so it will perform floating-point division
}
// a = 7/22*(3.14 +2 )* 3/5
// a = 0
//  /, *,% have higher precedence than + and -
// so we will first solve the division and multiplication and then addition

// x = 4 + 2 % -8       [2% -8 = 2 because a%b = a if a < b]
// x=  4 + 2 
// x = 6