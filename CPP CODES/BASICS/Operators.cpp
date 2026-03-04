#include <iostream>
// symbolic constanst / macros
#define X 25 // no need to define type because it does not take any extra space in memory
#define ll long long
using namespace std;

int main()
{
    const int num = 25;
    // constant num memory ke andar actual space occupy karega
    //  int num2 = 25;
    //  num2 = 35;
    //  num = 35;
    // const float PI = 3.14; // must be initialized
    // const float g = 9.8;
    // int long long x;
    return 0;
}

// TYPECASTING
#include <iostream>
using namespace std;

int main()
{
    // IMPLICIT
    //  cout << (10 / 3) << endl; //int result
    //  cout << (10 / 3.0) << endl; //float result in points
    //  cout << ('A' + 2) << endl; //67
    //  cout << ('A' - 0) << endl;
    //  cout << ('a' - 0) << endl;

    // EXPLICIT
    float PI = 3.14;
    // cout<<(int)('A')<<endl;
    // cout<<(int)(PI)<<endl;
    // cout<<((float)10/3)<<endl; //3.33
    cout << (char)('A' + 3) << endl;

    return 0;
}
// bool < char < int < float < double

#include <iostream>
    using namespace std;
int main()
{
    // cout<<(bool)3+2;// bool 3 = 1(true) 1+2 = 3
    cout << (23.5 + 2 + 'A'); // 90.5
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    // a = a+1;
    a++;
    cout << a << endl; // 4

    // a = a-1;
    a--;
    cout << a << endl;
    ;

    // a++ = unary operator

    // cout << "+" << (a + b) << endl;

    // cout << "-" << (a - b) << endl;

    // cout << "*" << (a * b) << endl;

    // cout << "/" << (a / b) << endl;

    // cout << "%" << (a % b) << endl; // remainder print hoga

    return 0;
}

// ASSIGNMENT OPEARTOR
#include <iostream>
using namespace std;

int main()
{
    // int a = 5;

    // int b = a++;
    // cout << a << endl; // 6

    // cout << b << endl; //5 if ++a to 6 aata
    int a = 10;
    a += 5;
    cout << a << endl; // 15
    a -= 5;
    cout << a << endl; // 10
    a *= 5;
    cout << a << endl; // 50
    a /= 5;
    cout << a << endl; // 10
    return 0;
}

// RELATIONAL OPERATOR
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    // cout<<(a >= b) <<endl; //false = 0
    // cout<<(a <= b) <<endl;
    // cout<<(a == b) <<endl;
    // cout<<(a != b) <<endl;

    cout << ((a > b) && (a < b)) << endl; // 0
    cout << ((a > b) || (a < b)) << endl; // 1
    cout << (!(a > b)) << endl;           // 1
}
