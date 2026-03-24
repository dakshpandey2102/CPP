#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>> a>> b>>c;
    if(a>b && a>c){
        cout<< a<< "is greatest"<< endl;

    }
    else if(b>a && b>c ){
        cout << b<< "is greatest"<< endl;

    }
    // else if(c>a && c>b){
    //     cout<< c<< "is greatest"<< endl;
    // }
    // else {
    //     cout<< "all are equal"<< endl;
    // }
    else {
        cout<< c<< "is greatest"<< endl;
    }
}