// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i%2==0){
//             cout<< i<< endl; // this will print all the even numbers from 1 to 100 because we are checking if the number is divisible by 2 without leaving a remainder
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i= 2; i<=100;i+=2){
//         cout<< i<<" "; // this will print all the even numbers from 1 to 100 because we are starting from 2 and incrementing by 2 in each iteration of the loop
//     }
// }
// for(int i=19;i<=190;i+=19)- for table of 19 
// for (int n; n<= n*10; n+=n) - for table of n

// display this ap -1,3,5,7,9... upto 'n' terms.
//  nth term formula 
// an = a1 + (n-1)d
// an = 1 + (n-1)*2
// an = 2n - 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<  "enter n: ";
//     cin>> n;
//     // 1 3 5 7 9
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }
// }
// ap - 4,7,10,13,16 upto 'n' terms
// an = a1 + (n-1)d;
// an = 4 +(n-1)*3;
// an = 3n + 1;
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout << " enter n";
//     cin>>n;
//     for (int i = 4; i <=3*n+1; i+=3){
//         cout<< i<<" ";

//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "enter n: ";
//     cin>> n;
//     // 4 7 10 13 ...   
//     int a =4;
//     for(int i=1; i<=n; i++){
//         cout<< a<<" ";
//         a+=3;
//     }
// }
// wap to find the highest factor of a number 'n'(other than n itself)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>> n;
//     for (int i =1; i<=n;i++){
//         if (n%i == 0){
//             cout<<i<<" ";// this will print all the factors of n because we are checking if n is divisible by i without leaving a remainder and if it is then we are printing i as a factor of n
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "enter n:";
//     cin>>n;
//     int f=1;// f will store the highest factor found so far.because 1 is always a factor of n so we are initializing f to 1
//     for(int i=1; i<n;i++){
//         if (n%i== 0){
//             f=i;// this will print the highest factor of n because we are checking if n is
//             //  divisible by i without leaving a remainder and if it is then we are assigning
//             //  i to f and since we are iterating from 1 to n-1 the last value of i that satisfies
//             //  the condition will be the highest factor of n
//         }
//     }
//     cout<< f;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>> n;
//     int f=1;// f will store the highest factor found so far.because 1 is always a factor of n so we are initializing f to 1
//     for(int i=1; i<=n/2;i++){
//         if(n%i == 0){
//             f=i;
//         }
//     }
//     cout<< f;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "enter n :";
//     cin>> n;
//     for(int i=n/2;i>=1;i--){
//         if (n%i ==0){
//             cout<< i<<" ";
//             break;// to get out of the loop
//         }
//     }
// }
// wap to check if a number is composite or not 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< " enter n:";
//     cin>>n;
//     bool flag = true;// true means prime 
//     for(int i =2;i<=n/2;i++){
//         if (n%i==0){
//             flag = false;// false means composite
//             break;
//         }
//     }
//     if (n==1) cout<< "neither prime nor composite";
//     else if(flag == true) cout<< "prime";
//     else cout<< "composite"; 

// }
// print odd numbers from 1 to 100 using continue 
// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1 ; i<=100;i++){
//         if (i%2 == 0) continue;// this will skip the current iteration of the loop and move to the next iteration without executing the remaining code in the loop for that particular value of i if i is even because we are checking if i is divisible by 2 without leaving a remainder and if it is then we are using continue to skip the current iteration of the loop and move to the next iteration without executing the remaining code in the loop for that particular value of i
//         cout<< i<< " ";
//     }
// }
// print even numbers from 1 to 100 using continue'
// #include <iostream>
// using namespace std ;
// int main(){
//     for (int i=1 ; i<=100;i++){
//         if (i%2 !=0) continue;// this will skip the current iteration of the loop and move to the next iteration without executing the remaining code in the loop for that particular value of i if i is odd because we are checking if i is not divisible by 2 without leaving a remainder and if it is then we are using continue to skip the current iteration of the loop and move to the next iteration without executing the remaining code in the loop for that particular value of i
//         cout << i<< "  ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1; i<=100;i++){
//         cout<< i<<" ";
//     }
// }
// for (condition, expression, update){
//     // body of the loop      
// }
// while (condition){
//     // body of the loop      
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     while(i<=10){
//         cout<< i<< " ";
//         i++;
//     }
// }

 