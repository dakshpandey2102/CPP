// typecasting 
// 

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>> x;
//     float y = (float)x; // this is called typecasting where we are converting an integer to a float
    // cout << y/2 << endl; // it will print the result as a float because y is a float5
// }

// Hieratchy of operators - BODMAS
// Brackets, Order,[ Division = Multiplication], Addition, Subtraction 
                       // equal precedence 
             // so will solve from left to  right in case of equal precedence

#include<iostream>
using namespace std;
int main(){
    int i =  2 * 3 / 4; // it will print 1 because 2*3 = 6 and 6/4 = 1.5 but since i is an integer it will only take the whole number part which is 1
    cout << i << endl;
}
// i = [2*3]/4
//    = 6/4
//    = 1.5 but since i is an integer it will only take the whole number part which is 1
//    = 1
// i =  2*[3/4]
//    = 2*[0.75] but since 3/4 is an integer division it will only take the whole number part which is 0
//    = 2*0 
//   = 0(but this is not the case because multiplication and division have equal precedence so we will solve from left to right)