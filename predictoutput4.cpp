#include<iostream>
using namespace std;
int main(){
    int i=10;
    while(i=20)
    printf("\nA computer buff!");
}
// while(i = 20)
// ```
// This is doing **two things at once**

// 1. **Assigns** 20 to i
// 2. **Checks** if 20 is true or false

// ---

// ### How while evaluates the condition
// ```
// while(condition) → if condition is 0 = FALSE → stop
//                  → if condition is anything else = TRUE → continue
// ```
// So:
// ```
// while(i = 20)
// → assigns 20 to i
// → checks 20
// → 20 is not 0
// → TRUE → keeps running
// → assigns 20 to i again
// → checks 20 again 
// → TRUE again
// → forever...