// method 2 using extra variable and keeping i only for the iterations or rounds of loop
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n";
    cin >> n;
    // 4 7 10 13 ... 
    int a = 4 ;
    for (int i = 1; i<= n; i++){
        cout << a << " ";
        a+=3;
    }
}
// for (int i = 1; i <= n; i++)
//                ^^^^^^^  
//              THIS decides how many times the loop body runs
//Whatever is inside the curly braces { } will repeat exactly n times — whether that is a, b, x, or anything else.
//So when i controls the loop, it is indirectly controlling everything inside { } including a.
