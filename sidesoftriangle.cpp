// take 3 numbers input and tell if they can be the sides of a triangle or not
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<< "enter a, b, c :";
    cin >> a>> b>> c;
    if(( a+b) > c && (b+c) > a && (c+a)> b){
        cout <<"they can be the sides of a tringle "<< endl;

    }
    else{
        cout<< "they cannot be the sides of a triangle  "<< endl;
    }
}