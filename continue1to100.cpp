// wap to print odd numbbers from 1 to 100 usinng continue 
#include<iostream>
using namespace std;
int main(){
    for (int i =1 ; i<=100;i++){
        if(i%2 == 0 ) continue;
        cout<< i<<" ";
    }
}