//MEMORY LEAK = when programmers creates a memory in a heap and forget to delete it leads to reduce performance
//due to depletion of available memory
#include <iostream>
using namespace std;
int* func(){
    int *ptr = new int;
    *ptr = 1200;
    cout<<"ptr points to " << *ptr << endl;

    return ptr;
}
int main() {
   int *x = func(); // address store 
   cout<<*x<<endl;;
    return 0;
}
