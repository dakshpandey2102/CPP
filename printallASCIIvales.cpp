// Write a program to print all the ASCII values
// and their equivalent characters of 26 alphabets
// using a while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 65; // ASCII value of 'A'
    while (i <= 90) { // ASCII value of 'Z'
        cout << "ASCII value of " << char(i) << " is " << i << endl;
        i++;
    }
    return 0;
}