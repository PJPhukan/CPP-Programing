//Friend function used in a complex number program in c++

#include <iostream>

using namespace std;
class Complex
{

public:
    int i, r;
    Complex() {}
    Complex(int img, int real)
    {
        i = img;
        r = real;
    }
    friend Complex Sum(Complex c1, Complex c2) ;
    friend void Display(Complex c);
};
 Complex Sum(Complex c1, Complex c2)
{
    Complex c;
    c.i = c1.i + c2.i;
    c.r = c1.r + c2.r;
    return c;
}
 void Display(Complex c)
{
    cout << "Complex number is : " << c.r << " + " << c.i << "i" << endl;
}
int main()
{
    Complex c,c1(2,7),c2(3,3);
    c=Sum(c1,c2);
    Display(c1);
    Display(c2);
    Display(c);
    return 0;
}