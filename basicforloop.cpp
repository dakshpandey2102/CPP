// for (initialization; condition; update){
//     // body of loop  
// }
// Ques : Take input n and print "hello world" n times
// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter n";
//     cin>> n;
//     for (int i=1; i<=n; i++){
//         cout << "hello world "<<endl;
         
//     }
// }

#include<iostream>
using namespace std;    
int main(){
//100 times  i has to take values from 1 to 100 and if the value is even then print it
// for (int i=  1; i<=100; i++){
//     if (i%2 == 0){
//         cout<< i<< " ";     
//     }
  //  }

  // 50 times 
  for (int i = 2; i<=100; i+=2){
    cout<< i<< " ";
  }// in above code we are directly incrementing i by 2 so that it will only take even values and we don't have to check for even condition inside the loop
}

   
