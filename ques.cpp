// take positive integer and tell if it is divisible by 5 or not 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "enter a positive integer: ";
//     cin>> n;
//     if(n%5 == 0){
//         cout<< n <<" is divisible by 5"<< endl;
//     }
//     else {
//         cout<< n <<" is not divisible by 5"<< endl;
//     }
// }




// take integer input and print the absolute vale of that integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
//     if (n>=0){
//         cout<< n << endl;
//     }
//     else{
//         cout << -n << endl;
//     }

// }

//if you  want you change n into its absolute value 
if (n<0){
    n = -n;
    cout << n << endl;
}
}
