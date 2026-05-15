#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter n:";// no. of coulmns 
    cin>> n;
    int m ;
    cout<< " enter m:";// no.of rows 
    cin>> m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

}