// main() - it cannot be called more than onnce 
// return; - keyword jisse function ka khatam ho jata, 
//  kind of like break;

#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
    cout<<" you are in USA ";
}
void india(){
    cout<<" you are in India"<<endl;
    return;
}
int main(){
    usa();
//     cout<<"You are in main"<<endl;
//     india();
}
