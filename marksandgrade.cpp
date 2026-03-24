// Ques : Take input percentage of a student and print the Grade according to marks:
// 1) 81-100 Very Good
// 2) 61-80 Good
// 3) 41-60 Average
// 4) <= 40 Fail
#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<< "enter marks";
    cin>> n ;
    if (n>=81 && n<=100){
        cout<< "very good ";
    
    }
    // else if (n>= 61 && n<=80){
    //     cout<< "good";
    // }
    // else if (n>=41 && n<=60){
    //     cout<< "average";
    // }
    else if (n>=61){ // removed upper bound check because if n is greater than 80 it will be caught by first if condition
        cout<< "good";
    }
    else if(n>=41){// removed upper bound check because if n is greater than 60 it will be caught by first two if conditions
        cout<< "average";
    }
    else{
        cout<< "fail";
    }

}