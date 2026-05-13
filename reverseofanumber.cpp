#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    int rev = 0;
    while(n!=0){
        int lastdigit = n%10;
        rev = rev*10;
        rev = rev + lastdigit;
        n = n/10;
    }
    cout << "Reverse of the number: " << rev << endl;
}