#include<iostream>
using namespace std;
int main(){
    // 172 times i has to take values from 19 to 190 and if the value is divisible by 19 then print it
    // for (int i= 19; i<= 190; i++){
    //     if (i%19 == 0){
    //         cout<< i<< " ";

    //     }
    // }
    // 10 times i has to take values from 19 to 190 and if the value is divisible by 19 then print it
    for (int  i =  19; i<= 190; i+=19){
        cout<< i<< " ";
    }

}