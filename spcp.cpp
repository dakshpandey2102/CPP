// *Ques : If cost price and selling price of an item is
// input through the keyboard, write a program to
// determine whether the seller has made profit or
// incurred loss or no profit no loss. Also determine
// how much profit he made or loss he incurred.

#include<iostream>
using namespace std;
int main(){
    int cp;
    cin>> cp;
    int sp;
    cin>> sp;
    if (sp >cp){
        cout << "profit is:"<< sp - cp << endl;

    }
    else if (cp > sp){
        cout << "loss is:"<< cp-sp << endl;
    }
    else if (cp == sp){
        cout<< "no profit no loss"<< endl;
    }
}