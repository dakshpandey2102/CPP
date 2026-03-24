//Write a program to create a calculator that
//performs basic arithmetic operations (add,
//subtract, multiply and divide) using switch case
//The calculator should input two numbers and an operator from user.
#include<iostream>
using namespace std;
int main (){
    int n1; // number 1
    cin>> n1;
    char op;// operator
    cin>> op;
    int n2;// number 2 
    cin >> n2 ;
    switch(op){
        case '+':
            cout<< n1+n2<< endl;
            break;
        case '-':
            cout<< n1-n2<< endl;
            break;  
        case '*':
            cout << n1*n2<< endl;
            break;
        case '/':
            cout<< n1/n2<< endl;
            break;
        default:
            cout<< "invalid operator"<< endl;       

    }
}