//1
//1 3
//1 3 5
//1 3 5 7 
// display this ap - 1,3,5,7 upto 'n' terms.
// an = a1 +(n-1)d            // 1+2n-2
// an = 1 +(n-1)*2
//an = 2n-1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n:";
    cin>> n;
    int m;
    cout<<" enter m:";
    cin>> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";

        }
        cout<<endl;
    }

}