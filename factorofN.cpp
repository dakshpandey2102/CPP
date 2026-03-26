// #include<iostream>
// using namespace std;
// int main(){
//     int n ; 
//     cout << "enter n : ";
//     cin>> n;
//     int f=1 ;
//     for (int i= 1 ; i<= n/2  ; i++ ){
//         if (n%i == 0) {f=i;
//         }
//     }
//     cout<< f;
// }
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>> n;
    for (int i = n/2;i>=1;i--){
        if (n%2 == 0){
        cout <<i<<" ";
       // break;// to get out of the loop 
        }
    }
}
// A factor of n can never be more than n/2 (except n itself)
// Think about it:
// n = 12
// Can 7 be a factor of 12?  12/7 = 1.7  ✗
// Can 8 be a factor of 12?  12/8 = 1.5  ✗
// Can 9 be a factor of 12?  12/9 = 1.3  ✗
// Any number bigger than n/2 will never divide n perfectly (except n itself)

// So why do we waste time checking them?
// cppfor (int i = 1; i < n; i++)  // checking 1 to 11 for n=12
// Numbers 7, 8, 9, 10, 11 are being checked for no reason — they can NEVER be factors.