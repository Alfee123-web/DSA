//PREDICT THE OUTPUT**
#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        std::cout << "Base" << std::endl;
    }
    // Good practice: a base class with virtual functions should have a virtual destructor.
    // virtual ~Base() {}
};

class Derived : public Base { //single level inheritance 
public:
    void print() override {
        std::cout << "Derived" << std::endl;
    }
};

int main() {
     // A Base class pointer pointing to a Derived class object.
     //RUN TIME POLYMORPHISM(FUNCTION OVERRIDING WITH VIRTUAL KEYWORD )
    Base* b = new Derived();

    // Calls the virtual function 'print()'
    b->print();

    // Release the dynamically allocated memory
    delete b;
    return 0;
}

//OUTPUT 
//Derived 