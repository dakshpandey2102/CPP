#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern5n(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<'x';
            }cout<< endl;
        }
    }
};

 int main(){
    int n;
    cin>> n;

    Solution obj;
    obj.pattern5n(n);

    return 0;

}