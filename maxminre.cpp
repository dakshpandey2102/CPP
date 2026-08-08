#include<iostream>
#include <climits>
using namespace std;
// INT_MIN To INT_MAX range is from -2^31 to 2^31, so we use them to count these values;
int getMin(int num[], int n){
    int mini = INT_MAX;// 2^31 or 2147483647
    for (int i=0;i<n;i++){
        mini = min( mini, num[i]);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    return mini;
}
int getMax(int num[], int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){

        maxi = max(maxi, num[i]);
        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    // returning max value 
    return maxi;
}

int main(){

    int size;
    cin >> size;
    int num[100];
    // taking input in array
    for(int i=0;i<size;i++) {
        cin >> num[i];
    }


cout << " Maximum value is " << getMax(num, size) << endl;
cout << "Minimum value is "<< getMin(num,size) << endl;
return 0;

}