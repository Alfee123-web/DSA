// COMPILE TIME POLYMORPHISM USING OPERATOR OVERLOADING
#include <iostream>
using namespace std;
class Complex
{
    int img;
    int real;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void showNum()
    {
        cout << real << " + " << img << "i \n";
    }
    Complex operator-(Complex &c2)
    {
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }
};
int main()
{
    // Complex  c1(3,4);
    // Complex  c2(2,3); // 1+ 1i
    Complex c1(8, 5);
    Complex c2(2, 3); // 6+2i

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 - c2; // 1 + 1i
    c3.showNum();

    return 0;
}