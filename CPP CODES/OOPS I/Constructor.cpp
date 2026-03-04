// Constructor = special method invoked automatically at the time of object
// creation , used for initialization

// 1 same name as class
// 2 constructor doesnt have a return type
// 3 only called once (automatically) at object creation
// 4 memory alloacation happens when constructor is called

#include <iostream>
using namespace std;

class Car
{ // class
    string name;
    string color;

public:
    // Non-parameterized constructor
    Car()
    {
        cout << "constructors without parameters\n";
    }
    // Car(string nameVal , string colorVal)
    // { // function = constructor (same name)
    // cout<<"constructor is called . object being created \n ";
    // name = nameVal;
    // color = colorVal;
    // }
9
    // function = constructor (same name)

    // Parameterized constructor
    Car(string name, string color) // name,color: refer to parameters
    {
        cout << "constructor with parameters \n ";
        this->name = name;   // refers to object (this is pointing to c1)
        this->color = color; // refers  to object
        // *this.color = color;
    }

    void start()
    { // functions define
        cout << "Car has started ";
    }

    void stop()
    {
        cout << "Car has stopped";
    }

    // GETTERS
    string getName()
    {
        return name;
    }
};

int main()
{
    Car c0; // non - parameter
    Car c1("maruti 800", "White"); // object , parameter 
    Car c2("fortuner", "whire");

    // cout << "car name :" << c1.getName() << endl;
    return 0;
}

// Constructors = "this" is a special pointer in C++ that points to current object

// this -> prop is same as *(this).prop

//Constructor overloading : same name functions/constructors with diff parameters 
