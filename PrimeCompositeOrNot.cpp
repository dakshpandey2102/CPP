   // wap to check if a number is composite or not 
//   if n has extra factor/ factors except 1 and n then it is composite.
 #include <iostream>
 using namespace std;
 int main(){
    int n;
    cout<< "enter n: ";
    cin>> n;
    bool flag = true;// true means prime
    for( int i =2 ; i<= n/2; i++ ){
        if (n%i == 0){
            flag = false ;// false means composite 
            break;
        }
    }
    if (n ==1) cout<< "Neither Prime Nor Composite";
    else if (flag == true)cout << "prime";
    else cout<< "composite";
 }