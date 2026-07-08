#include <iostream>
using namespace std;

class Solution {
    public:
    void pattern3(int n){
        for(int i = 1;i<=n; i++){
            for(int j = 1;j<= i;j++){
                cout<< j;
            }
            cout<< endl;
        }
    }
};

int main(){
    int n;
    cout<< "Enter n: ";
    cin>> n;

    Solution obj; // Create an object of solution
    obj.pattern3(n); // call the function

    return 0;
}