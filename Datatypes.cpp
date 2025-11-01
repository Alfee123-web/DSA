#include<iostream> //PRE PROCESSOR DIRECTIVES
using namespace std;

int main() { //STARTING POINT OF EXECUTION..
    cout<<"Apna college";
    return 0;
    // ; = statement terminator
}

// directives start with #(#include)
// iostream is a header file

// // #include <iostream>
// #define PI 3.14 // Macros
// using namespace std;
// //library "standard c++ namespace is  std"
// //std :: cout<< to avoid repeatedly writing std before
// //every cout<<

int main()
{
    // cout << PI;
    std ::cout<<"Apna college";
    return 0;

}

// cout = define(header file)
// cout = declare(inside namespace)

#include<iostream>
using namespace std;

int main() {
    // cout<<"Apna \n college";
    // cout<<"Apna college\n";
    // cout<<"Apna college\n"<<"is for programmers\n";
    // cout<<"apna collge\n"<<endl;
    cout<<"apna collge\n"<<endl;
    cout<<"hello world\n"<<endl;
    cout<<"how are you\n"<<endl;
    return 0;

}

#include <iostream>
using namespace std;
int main()
{
    // cout << "* * * *\n";
    // cout << "* * * \n";
    // cout << "* * \n";
    // cout << "* \n";
    cout<<"****\n***\n**\n*\n";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a = 10;//= assignment operator
    int b = 5;
    cout <<a<< endl;
    cout <<b<< endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int age = 25;
    bool isAdult = true;
    int marks = 200;
    char grade = 'A';
    float x=99.9;
    double price = 999.99;

     // cout<<"size of int = "<<sizeof(int)<<endl;
    // cout << "size of char = " << sizeof(char) << endl;
    // cout << "size of bool = " << sizeof(bool) << endl;
    cout << "size of float = " << sizeof(float) << endl;
    cout << "size of double = " << sizeof(double) << endl;
    // cout<<age<<""<<marks<<""<<grade<<""<<isAdult<<endl;
    //true =1;
    //false = 0;
    return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float PI = 3.1415926359;
    //7 number tk print/store kara dega
    double PI2 =3.1415926359;
    //almost 15 number tk print/store kar dega

    // cout<<"PI ="<<PI<<endl;
    // cout<<"PI2 ="<<PI2<<endl;
    //cout default precison = 5 no. tk print karayega

    cout<<setprecision(12)<<"PI="<<PI<<endl;

    cout<<setprecision(12)<<"PI2 ="<<PI2<<endl;
    return 0;
}

