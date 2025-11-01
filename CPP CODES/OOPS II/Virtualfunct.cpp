#include <iostream>
using namespace std;
class Parent
{
public:
   void show()
   {
      cout << "parent class show..\n";
   }

   virtual void hello()
   {
      cout << "parent hello";
   }
};

class Child : public Parent
{ // inheritance
public:
   void show()
   {
      cout << "child class show..\n";
   }
   void hello()
   {
      cout << "child hello";
   }
};

int main()
{
   Child child1;
   //    child1.show();

   Parent *ptr;

   ptr = &child1; // run time binding
   ptr->hello();  // virtual function (child wala func call hoga )

   //    Parent *ptr ; points to parent class ke object ko (child class )
   //    int *ptr = points to integer
   //    priority child >> inheritance

   return 0;
}

// A VIRTUAL FUNCT = is a member func that you expect to be redefined in derived class
//  dynamic in nature
//  keyword = "virtual" inside a base class and are always declared with a base class and
// overrirden in child class
//  it is called during runtime