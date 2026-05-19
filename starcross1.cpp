//   1 2 3 4 5 ->j
//1  * # # # *
//2  # * # * #
//3  # # * # #
//4  # * # * #
//5  * # # # *
//i
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter no. of rows : ";
    cin>>n;
    int mid = n/2 +1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j== n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

}