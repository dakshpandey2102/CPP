// Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.
#include <iostream>
using namespace std;

int main(){
    int l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    int area = l * b;
    int perimeter = 2 * (l + b);

    if(area > perimeter){
        cout << "Area is greater than perimeter" << endl;
    }
    else if(perimeter > area){
        cout << "Perimeter is greater than area" << endl;
    }
    else{
        cout << "Area and perimeter are equal" << endl;
    }

    return 0;
}