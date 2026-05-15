#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter n:";
    cin>> n;
    int m;
    cout<< "enter m:";
    cin>> m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<< i<< " ";
        }
        cout<<endl;
    }
}