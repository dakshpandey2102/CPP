// # # # *        # # #       *
// # # * *     =  # #      +  * *
// # * * *        #           * * *
// * * * *      (spaces)      * * * *
#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout<< " enter m";
    // cin>> m;
    int n;
    cout<< " enter n:";
    cin>> n;
    for(int i=1; i<=n;i++){ // rows
        for(int j=1;j<=n-i;j++){//spaces
            cout<<"# ";
        }

        for(int j=1;j<=i;j++){// stars
            cout<<"* ";
        }
        cout<<endl;
    }
}