// pass by value 
// #include<iostream>
// using namespace std;
// void  swap(int x, int y){// diffrent part
//     int temp = x;
//     x =y;
//     y = temp;

// }
// int main(){
//     int x= 12;
//     int y = 45;
//     cout<< x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;
// }




// pass by refrence
#include<iostream>
using namespace std;
void  swap(int& x, int& y){//  diffrent part 
    int temp = x;
    x =y;
    y = temp;

}
int main(){
    int x= 12;
    int y = 45;
    cout<< x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}