// display this gp - 3,12,48,....  upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n";
    cin>> n;
    int a = 3;
    // 3 12 48
    for (int i =1 ; i<= n; i++){
        cout<< a<< " ";
        a= a*4;
    }
}