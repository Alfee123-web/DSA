#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
    }

    // Custom copy constructor
    Car(Car &original)
    {
        cout << "copy original to new..\n";
        name = original.name;
        color = original.color;
    }
};
int main()
{
    Car c1("maruti 800", "white");

    // copy of car c1
    Car c2(c1);
    cout << c2.name << endl;  // maruti 800
    cout << c2.color << endl; // white

    return 0;
}

// COPY CONSTRUCTOR
// special constructor (default) use to copy properties of one object into another
