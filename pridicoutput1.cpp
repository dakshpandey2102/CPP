#include<iostream>
using namespace std;
int main(){
    int i;
    while(i=10){// i keeps getting assigned 10 even after increment so it forms a infinte loop 
        cout<< i<< endl;
        i= i+1; 
    }
}