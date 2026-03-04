#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eats\n";
    }
    void breathes()
    {
        cout << "breathes\n";
    }
};

class Mammal : public Animal
{
public:
    string bloodType;

    Mammal()
    {
        bloodType = "warm";
    }
};
class Dog : public Mammal
{
public:
    void tailWag()
    {
        cout << "a dog wags its tail\n";
    }
};
int main()
{
    Dog d1;

    d1.eat();
    d1.breathes();
    d1.tailWag();
    cout << d1.bloodType << endl;
    return 0;
}