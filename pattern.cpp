#include<iostream>
using namespace std;
int main(){
    //  rectangle banana hai 
    // rows -> m, cols -> 5
    int m;
    cout<<"enter number of rows";
    cin>>m;
    int n;
    cout<<"enter number of cols :";
    cin>> n;
    for(int i=1;i<=m;i++){// rows = m
        for(int i =1;i<=n;i++){//cols= n
            cout<<"*"; 
        }
        cout<<endl;
    }
}

//_j=1_j=2_j=3___
//  1  2  3 | i=1
//  1  2  3 | i=2
//  1  2  3 | .
//  1  2  3 | . 
//  1  2  3 | .
//  1  2  3 | i=6