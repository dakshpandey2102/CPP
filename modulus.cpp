#include<iostream>
using namespace std;
int main(){
    int x = 8;
    int y = 6;
    cout << x%y << endl; // it will print 2 because 8 divided by 6 gives a quotient of 1 and a remainder of 2
}
// some important points about modulus operator %
//  a%b = a [ if a < b ]
// a%a = 0
// a%(-b) =  a%b
// (-a)%b = -(a%b)
// (-a)%(-b) = -(a%b)   
//  a%b = 0 if a is divisible by b