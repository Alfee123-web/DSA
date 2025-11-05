//RECURSION = when a function repeatedly calls itself
#include <iostream>
using namespace std;
//recursive function 
  void func(){
    cout<<"function call...";
    func();
  }
int main() {
   
    return 0;
}


// understanding using maths 
// f(x) = x^2
// f(f(x)) = (x^2)^2

// int func(int x)
// return x * x ;

//  factorial
// f(n) = n!
// f(n) = n * f(n-1)  recurrence relation



