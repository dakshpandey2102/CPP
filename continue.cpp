#include<iostream>
using namespace std;
// int main(){
//     for(int i =1 ; i<=20; i++){
//         if(i!=3 && i!=8){
//             cout<< i<<" ";
//         }
//     }
// }
// int main(){
//     for (int i =1 ; i<=20;i++){
//         if(i== 3 || i==8) continue;
//         cout<< i<<" ";
//     }
// }
int main(){
    for (int i =1 ; i<=20;i++){
        if(i== 3 )continue;// used to skip the current iteration of the loop and move to the next iteration without executing the remaining code in the loop for that particular value of i
        if (i== 8) continue;
        cout<< i<<" ";
    }
}