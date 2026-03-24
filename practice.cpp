#include<iostream>
using namespace std;
int main(){
    int x = 3, y,z;
    y = x = 10; // assignment operator is right associative so x will be assigned 10 first and then y will be assigned the value of x which is 10
    z = x<10; // relational operator will return a boolean value (true or false) which will be stored in z. Since x is not less than 10, z will be assigned the value 0 (false)
    cout<< x<< " "<< y<<" "<< z;
}