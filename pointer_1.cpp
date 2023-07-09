//Pointer used in class object and its behavier

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    void setData(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "The value of real part  :" << real << endl;
        cout << "The value of imgaginary  part  :" << img << endl;
        cout << "The Complex number is  :" << real << "+" << img << "i" << endl;
    }
};
int main()
{
    Complex c1;
    // c1.setData(2,4);
    // c1.display();
    Complex *ptr = &c1;
    // (*ptr).setData(2,4);
    // (*ptr).display();
    // ptr->setData(2,4);
    // ptr->display();
    // Complex *ptr1=new Complex;
    // (*ptr1).setData(2,4);
    // (*ptr1).display();
    // ptr1->setData(2,4);
    // ptr1->display();
    Complex *ptr2 = new Complex[2];
    (*ptr2).setData(2, 4);
    (*ptr2).display();
    // ptr2->setData(2,4);
    // ptr2->display();
    return 0;
}