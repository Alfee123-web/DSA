#include <iostream>
using namespace std;

class Student
{
    // string name; //private
public:
    string name; // public
    float cgpa;  // public

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "% \n ";
    }
};

// class User
// {
//     int id;
//     string password;
//     string bio;

//     void deactivate()
//     { // method
//         cout << "deleting account\n";
//     }
//     void editBio(string newBio)
//     {
//         bio = newBio;
//     }
// };
int main()
{
    Student s1; // object
                // s1.name = "Alfee";
                // cout<<s1.name <<endl;
                // this will show error because they are private and we cant access them directly
    s1.cgpa = 9.0;
    cout << s1.cgpa << endl;

    s1.name = "Alfee";
    cout << s1.name << endl;

    s1.getPercentage();
    // cout << sizeof(s1) << endl; // new memory will be allocated
    return 0;
}

// Acces Modifiers
// Private = data & method accesible inside class (sensitive)
// Public = data & method accesible to everyone
//Protected = data & method accesible inside class & its derived class 


