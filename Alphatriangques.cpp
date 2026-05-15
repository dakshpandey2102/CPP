//1          - n=1
//A B        - n=2
//1 2 3      - n=3
//A B C D    - n=4
//1 2 3 4 5  - n=5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n:";
    cin>> n;
    int m;
    cout<<" enter m:";
    cin>> m;
    for (int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){ //  i ki value jabb evn ho tab alphabetic and numeric when odd.
                cout<<(char)(j+64)<<" ";
            }
            else{
                cout<<j<<" ";
            }
           
        
        

            
        }
        cout<<endl;
    }
}
