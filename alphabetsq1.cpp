#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter n:";
    cin>> n;
    int m;
    cout<< " enter m:";
    cin>> m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<< (char)(i+64)<<" ";

        }
        cout<< endl;
    }
    
}