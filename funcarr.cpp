#include <iostream>
using namespace std;

void printArray(int arr [], int size){
    
    cout<<"print the array" << endl;
    // print the array
    for(int i =0;i<size;i++){
        cout<< arr[i]<< " ";

    }
    cout<< "printing DONE " << endl;
}

int main(){
    int third [15] = {2,7};
    // int n = 15;
    // printArray(third, 15);
    // intialising all locations with 0
    int fourth [10] = {0};
    
    // int n=10;
    // printArray(fourth, 10);

    // initialising all locations with 1 [ not possible below the line ]
    int fifth [10]= {1};

    int n=10;
    // printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<< "Size of Fifth is " << fifthSize <<endl;
    
    char ch[5] = {'a','b','c','r','p'};
    cout << ch[3] << endl;

    // printArray(ch);
    // print the array
    for(int i =0;i<5; i++){
        cout<< ch[i] << " ";
    }
    cout<< " printing done " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout<< endl << "Everything is Fine " << endl << endl;
    return 0;
}