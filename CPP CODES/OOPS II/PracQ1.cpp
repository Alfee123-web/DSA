//PREDICT THE OUTPUT**
#include <iostream>
using namespace std;

class A{
public:
    A() {
        std::cout << "Constructor A" << std::endl;
    }
    ~A() {
        std::cout << "Destructor A" << std::endl;
    }
};

class B : public A { //INHERITANCE 
public:
    B() {
        std::cout << "Constructor B" << std::endl;
    }
    ~B() {
        std::cout << "Destructor B" << std::endl;
    }
};

int main() {
//    B obj;
B c1;
    return 0;
}

//sbse pehle parent(A) class ka constructor  call hota hai then child class(B) ka constructor call hota hai

//OUTPUT 
// Constructor A
// Constructor B when its get destrotyed it will be reversed 
// Destructor B
// Destructor A
