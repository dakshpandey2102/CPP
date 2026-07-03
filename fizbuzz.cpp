// You are given a number n.
// · For every integer i from 1 to n, print:
// . FizzBuzz if i is divisible by both 3 and 5
// . Fizz if i is divisible by 3 only
// . Buzz if i is divisible by 5 only
// . Otherwise, print i
// Print one result per line.

// Example
// Suppose n = 15.
// Output:
// 1

// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz
// 11
// Fizz
// 13
// 14
// FizzBuzz

#include <iostream>
using namespace std;

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << i << endl;
    }
}

int main(){
    int n;
    cin>> n;
    fizzBuzz(n);
    return 0;
}