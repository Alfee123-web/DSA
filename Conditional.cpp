#include <iostream>
using namespace std;
int main()
{
    // int age = 24;
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "can vote" << endl;
    }
    else
    {
        cout << "cannot vote" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int a, b;

    cout << "Value of a :" << endl;
    cin >> a;
    cout << "Value of b : " << endl;
    cin>> b;
    if (a > b)
    {
        cout << "a is largest" << endl;
    }
    else
    {
        cout << "b is largest" << endl;
    }
    return 0;
}

// ODD/EVEN
#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Value of a :" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "a is even" << endl;
    }
    else
    {
        cout << "a is odd" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks >= 80)
    {
        cout << "B";
    }
    else
    {
        cout << "C";
    }

return 0;
}

// INCOME TAX CALCULATOR
#include <iostream>
using namespace std;
int main()
{
    int income;
    float tax;
    cout << "income : " << endl;
    cin >> income;
    if (income < 5)

    {
        tax = 0;
    }
    else if (income <= 10)
    {
        tax = 0.2 * income;
    }
    else
    {
        tax = 0.3 * income;
    }

    cout<<"Tax : "<<(tax * 100000)<<endl;
    return 0;
}

// LARGEST OF 3 NUMBER
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a :" << endl;
    cin >> a;

    cout << "enter b :" << endl;
    cin >> b;

    cout << "enter c :" << endl;
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "a is largest" << endl;
    }
else if (b>=c){
        cout << "b is largest" << endl;
}
else {
        cout << "c is largest" <<endl;
}
return 0;
}

#include <iostream>

using namespace std;
int main()
{
    //     bool isAdult;
    //     int age;
    //     cout << "enter age : ";
    //     cin >> age;

    //    isAdult = age >= 18 ? true : false;

    // largest of two numbers
    //    int a = 5;
    //    int b = 6;
    //    int largest;
    //    int Largest = a>=b ? a : b;
    //    cout<<"Largest is "<<Largest<<endl;

    int a;
    cout << "a : ";
    cin >> a;

    bool isEven = a % 2 == 0 ? true : false;

    return 0;
}

// SWITCH STATEMENT
 #include <iostream>

using namespace std;
int main()
{
    int day = 15;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break; // if case is true then next statements will not be executed..

    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturfay" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "invalid day" << endl;
    }
    return 0;
}

// CALCULATOR
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "Enter a :";
    cin >> a;

    cout << "Enter b :";
    cin >> b;

    cout << "Enter operator";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Add : " << (a + b);
        break;
    case '-':
        cout << "Sub : " << (a - b);
        break;
    case '*':
        cout << "Mul : " << (a * b);
        break;
    case '/':
        cout << "Div : " << (a / b);
        break;
    
    default : cout<<"invalid operator"<<endl;
    }
    return 0;
}
