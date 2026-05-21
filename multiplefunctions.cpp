#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
    
}
void india(){
    cout<<" you are in India"<<endl;
    usa();
}
int main(){
    usa();
     cout<<"You are in main"<<endl;
     india();
     return 0;
}
