#include <iostream>
using namespace std;
class Print
{
public:
    // function overloading (name same , parameters different)
    void show(int x)
    {
        cout << "int: " << x << endl;
    }

    void show(string str)
    {
        cout << "string : " << str << endl;
    }
};

class Complex
{
    int real;
    int Img;

public:
    Complex(int r, int i)
    { // constructor
        real = r;
    Img = i;
    }

    void showNum()
    {
        cout << real << " + " << Img << "i\n"; // ex = 1 + 2i
    }

    
//operator overloading : + define kr dia 
// return type operator opSymbol(){......}
    Complex  operator + (Complex &c2){
        int resReal = this->real + c2.real; //this = current obj ka real (c1) + c2 ka real
        int resImg = this->Img + c2.Img;//this = current obj ka img (c1) + c2 ka img
        Complex c3(resReal , resImg);
        // cout<<"res:" ;
        // c3.showNum();
        return c3;
    }
};

int main()
{
    //     Print obj1;
    //    obj1.show(25);
    //    obj1.show("alfee");
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();


   Complex c3 =  c1 + c2; //4 + 6i 
   c3.showNum();
   


    return 0;
}

// Polymorphism = ability of objects to take off different forms
// or behave in diff ways dependiing on the context in which they are used

// 2 types of poylmorphism
// Compile time pol. 1. Function overloading , 2. Operator overloading
// Run time pol.

//  2. Operator overloading
// return type operator opSymbol(){......}
// void operator + (complex &c2){} 
//  5 + 2 =7
//  2.5 + 1.3 = 3.8
//  obj1 + obj2 = obj3
