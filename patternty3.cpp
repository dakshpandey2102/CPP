//A B C D
//A B C
//A B
//A

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n:";
    cin>> n;
    int  m;
    cout<< " enter m:";
    cin>> m;
    for (int i=1; i<=m;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<(char)(j+64)<<" ";

        }
        cout<< endl;
    }
}