#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a number ";
    cin>> n;
    int sum =0;
    while(n!=0){
        int lastdigit = n%10;
        n= n/10;
        if (lastdigit%2 == 0){
            sum = sum + lastdigit;

        }
    }
    cout << "Sum of all even digits: " << sum << endl;
}