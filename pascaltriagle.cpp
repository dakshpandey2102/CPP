//_j=0_j=1_j=2_j=3_j=4_j=5
//  1                     | i=0
//  1  1                  | i=1
//  1  2  1               | .
//  1  3  3  1            | . 
//  1  4  6  4   1        | .
//  1  5  10 10  5  1     | i=5
// pascal triangle
#include<iostream>
using namespace std;
int fact(int n){//Also your function parameters are wrong — factorial needs only one number, not (int i, int j).
    int f=1;
    for(int i=1;i<=n;i++){// not taking for(int i=1;i<=f;i++) as
        f=f*i;// But f is initially 1, so loop runs only once.
    }//You shoud loop till the number whose factorial you want.
    return f;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>> n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int a = fact(i);
            int b = fact(j);
            int c = fact(i-j);
            cout<<a/(b*c) << " ";
        }
        cout << endl;
    }
}
