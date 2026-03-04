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

    
//destructor = deallocate memory from obj


//Custom Destructor (deallocate = static )
// ~Classname(){}

~Car(){
    cout<<"object deletion..\n";
    if(mileage != NULL){
        delete mileage;  //garbage value is stored
        mileage = NULL; // explicitly assign to null

    }
}

};

int main() {
   Car c1("maruti 800", "white");
   Car c2(c1);
     cout << c1.name << endl;  
    cout << c1.color << endl;
    cout << *c1.mileage << endl; //12


    return 0;
}
