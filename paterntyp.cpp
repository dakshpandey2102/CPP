// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "enter n:";
//     cin>> n;
//     int  m;
//     cout<< " enter m:";
//     cin>> m;
//     for (int i=1; i<=m;i++){
//         for(int j=i;j<=n;j++){
//             cout<<i<<" ";

//         }
//         cout<< endl;
//     }
// }

// or


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
            cout<<i<<" ";

        }
        cout<< endl;
    }
}