#include <iostream>
using namespace std;

class Animal
{
public:
    string color;
    void eat()
    {
        cout << "eats\n"
             << endl;
    }
    void breathe()
    {
        cout << "breathes\n"
             << endl;
    }
};

// class Fish : public Animal
class Fish : protected Animal
{ // colon then access specifier (public) , by default public inheritance
public:
    int fins;

    void swim()
    {
        eat(); // inside we can access
        cout << "swims\n"
             << endl;
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;

    cout << f1.fins << endl;

    f1.swim();
    // this will not possible in case of protected
    // f1.eat();
    // f1.breathe();
    return 0;
}

// INHERITANCE(for code reusability) = when properties and member functions of base class/parent/super are passed on to the derived class child/sub
// private access inside class
// protected acces inside class + inside child/derived class
// protected means private + it can be inherited