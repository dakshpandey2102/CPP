#include<iostream>
using namespace std;


int main(){
    //declare 
    // int number[15];

    // //accessing an array
    // cout<< "Value at 14 index " << number[14] << endl;
    // // cout<< "Value at 20 index " << number[20] << endl;

    // // initialising an array
    // int second [3] = {5,7, 11};

    // // accesing an element
    // cout<< "Value at 2 index " << second[2] << endl;

    // cout<< endl << " Everything is Fine "<< endl<< endl;
    // return  0;
    // initialising an array
    int third[15] = {2,7};
    int n = 15;
    cout<< " printing the array "<< endl;
    // print the array 
    for (int i=0 ; i<n;i++){
        cout<< third[i]<< " ";
    }
    return 0;

}