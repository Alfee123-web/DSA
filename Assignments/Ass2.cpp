#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age: "; // garbage value
    cin >> age;

    cout << "your age is  " << age << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "enter a :";
    cin >> a;
    cout << "enter b:";
    cin >> b;

       int sum = a + b;
       //int prod = a*b;
    cout << "sum of two numbers=" << sum << endl;
    // cout << "prod of two numbers=" << prod << endl;

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    float a,b,c;
    cout<<"marks of science:";
    cin>>a;
    cout<<"marks of eng:";
    cin>>b;
    cout<<"marks of hindi:";
    cin>>c;
    float average = (a+b+c)/3;
    cout<<"average marks:"<<average<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"side of square ";
    cin>>a;
    int area = a*a;
    cout<<"area of square"<<area<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float pencil;
    float pen;
    float eraser;
    cout << "cost of pencil=";
    cin >> pencil;

    cout << "cost of pen=";
    cin >> pen;

    cout << "cost of eraser=";
    cin >> eraser;

    float totalcost = ((pencil + pen + eraser) + (0.18 * (pencil + pen + eraser)));
    cout << "totalcost:" << totalcost << endl;
}
// }

#include <iostream>
using namespace std;
#define PI = 3.14;
int main(){
// int r;
float r;


    cout<<"raduis=";
    cin>>r;
    float area = 3.14 * r * r;
    cout<<"area="<<area<<endl;
    return 0;

}
