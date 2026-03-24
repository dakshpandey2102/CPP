// : Given a point (x, y), write a program to find
//   out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd
//   Quadrant, 4th Quadrant, on the x-axis, y-axis or at
//   the origin, viz. (0, 0).
#include <iostream>
using namespace std ;
int main(){
    int x,y;
    cout << "enter x and y coordinates ";
    cin>> x>> y ;
    if (x>0 && y>0){
        cout<< "point in first quad ";

    }
    else if (x<0 && y>0){
        cout<< "point in second quad ";
    }
    else if (x<0 && y<0){
        cout << "point in third quad";

    }
    else if (x>0 && y<0){
        cout << "point in fourth quad";

    }
    else if (x== 0 && y==0){
        cout<< "point is at origin";
    }
    else if (x== 0){
        cout << "point is in y axis ";

    }
    else {
        cout << "point is in x axis ";
    }
    
    
}