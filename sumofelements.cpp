#include<iostream>
using namespace std;

int sum(int num[], int n){
    int sumi = 0;
     for(int i=0;i<n;i++){
        sumi = sumi + num[i];
     }
    return sumi;
}

int main(){
    cout<< " enter size of array";    
    int size;
    cin >> size;
    int num[100];
    // taking input in array
    for(int i=0;i<size;i++) {
        cin >> num[i];
    }
    cout << "Sum is  " << sum(num, size) << endl;
}