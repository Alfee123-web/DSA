#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name , string color){
        //static allocation (copy will br created)
        this->name =  name;
        this->color = color;

        //dynamic allocation
        mileage = new int;
        *mileage = 12;
    }
  Car(Car &original)
    {
        cout << "copy original to new..\n";
        name = original.name;
        color = original.color;
        //deep copy 
        mileage  = new int;

        *mileage = *original.mileage; //no new memory will be allocated only address will be copied in the heap
    }
};

int main() {
   Car c1("maruti 800", "white");
   Car c2(c1);
    cout << c2.name << endl;  
    cout << c2.color << endl;
    cout << *c2.mileage << endl; //12

    *c2.mileage = 10;
    cout<<*c1.mileage<<endl; //10 ((shallow copy), 12 (deep copy)
    return 0;
}


// Shallow and Deep copy

// Shallow copy copies references to original array but array remains same 
// Deep copy created a brand new copy of the array 

// Compiler generally created a shallow copy for aray /dynamically allocated

// We need to define own copy constructor when deep copy is needed i.e when class 
// contains pointers to dynamically allocated memory