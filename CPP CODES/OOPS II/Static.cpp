#include <iostream>
using namespace std;

void counter(){
    static int count =0; //STATIC : count variables do not created again n again it will reside in memory
    count++;
    cout<<"count :"<<count<<endl;
}

class Example
{
public:
    static int x; // ek hi int x create hoga
};

//here we are writing initialization 
int Example::x = 0; // x ka declaration example class ke inside hai 


int main()
{
    //    counter();
    //    counter();
    //    counter();

    static Example eg1; // created for lifetime in  a memory 
    Example eg2;
    Example eg3;

    // cout << eg1.x++ << endl; // 0
    // cout << eg2.x++ << endl; // 0
    // cout << eg3.x++ << endl; // 0

    //with static keyword
    cout << eg1.x++ << endl; // 0
    cout << eg2.x++ << endl; // 1
    cout << eg3.x++ << endl; // 2

    return 0;
}

// STATIC KEYWORD
//  STATIC VARIABLES
//  variables declared as static in a function are created & initialized once for the lifetime
// of the program (IN FUNCTION) / (static int count =0;)

// OUTPUT WITHOUT STATIC
//  count :1
//  count :1
//  count :1

// OUTPUT WITH STATIC
//  count :1
//  count :2
//  count :3

// static variables in a class are created & initiated once . they are shared by all the
// objects (IN CLASS)

// STATIC OBJECTS
