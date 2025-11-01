#include <iostream>
using namespace std;
class Shape
{ // abstract class
public:
    virtual void draw() = 0; // pure virtual function (no clear definition ) , abstract class
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "draw circle\n";
    }
};
class Square : public Shape
{
public:
    void draw()
    {
        cout << "draw square\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // Shape h1; //error : this is not possible
    // h1.draw();
    return 0;
}

// Abstraction = hiding all unnecessary details and showing only imp points
//  Abstract class & pure virtual functions
// Abstract = no object / child blueprint /atleast one pure virtual function

// encapsulation = wrap data in class(data hide only)
// abstraction = hide data + show imp parts**

// Abstract classes
// used to provide a base class from which other classes can be derived
// they cannot be instantiated (obj nahi bana skte ) and are meant to be inherited
// abstract clasees are typically used to define an interface for derived classes (atleast pure  1 virtual function)

// PURE VIRTUAL FUNCTION
//  virtual void func() = 0;
//  it is with NO definition/logic it is declared by assigning 0 at the time of declaration
