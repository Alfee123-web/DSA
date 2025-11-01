// RUN TIME POLYMORPHSIM
//  FUNCTION OVERIDING
//  parent & child both contain the same function with different implementation
//  The parent class function is said to be overriden

#include <iostream>
using namespace std;
class Parent
{
public:
   void show()
   {
      cout << "parent class show..\n";
   }
};

class Child : public Parent
{ // inheritance
public:
   void show()
   {
      cout << "child class show..\n";
   }
};

int main()
{
   Child child1;
   child1.show();
   return 0;
}

// overloading = 1 class ke andar dono func ka name same hota hai
// overriding me inheritance hoti hai parent aur child class ke pass same name ka func hota hai