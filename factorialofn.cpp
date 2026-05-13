// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<< " enter a number";
//     cin>> n;
//     int fact = 1;
//     for(int i= n; i>=1; i--){
//         fact = fact *i;
//     }
//     cout<< fact;
// }

// or

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a number ";
    cin>> n;
    int product =1;
    for(int i=1; i<=n; i++){
        product = product * i;
    }
    cout<< product;
    
}