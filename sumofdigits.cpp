#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<" enter n:";
    cin>> n;
    int sum =0;
    while (n!=0){  //“Jab tak n zero ke equal nahi hai, tab tak loop chalao.”
        int lastdigit = n%10;
        n = n/10;// n ko 10 se divide karne se last digit remove ho jata hai, aur n ke andar baaki digits bach jate hain.
        sum = sum + lastdigit;
      
      
    }
    cout<< sum<< endl;
}