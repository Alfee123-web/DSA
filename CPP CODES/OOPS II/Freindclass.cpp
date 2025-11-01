#include <iostream>
using namespace std;


class A{
    string secret = "secret data";
    friend class B; // B k pass A ka data ayega 
    friend void  revealSecret(A &obj); //friend function
};

class B { // becomes a freind class of A 
    void showSecret(A &obj){
        cout<<obj.secret <<endl; //error beacuse it is private so we make friend class B of class A
    }
};


void revealSecret ( A &obj){
    cout<<obj.secret <<endl;
}
int main() {
    A a1;
    B b1;

    // b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}

//A FRIEND CLASS OR FRIEND FUNCTION can access private and protected memebers of other classes
//in which it is declared as a friend 