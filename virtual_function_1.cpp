//virtual function c++

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    virtual void display()=0; // --->This is called do-nothing  otherwise "pure virtual function"
    // {
    //     cout << "The value of a is : " << a << endl;
    // }
};
class Derived_A : public A
{
protected:
    int d1;

public:
    Derived_A(int a, int b) : A(a)
    {
        d1 = b;
    }
    void display()
    {
        cout<<"Inside the Derived_A\n\n";

        cout << "The value of a is : " << a << endl;
        cout << "The value of d1 is :" << d1 << endl;
        cout << "The addition of a and d1 =" << a + d1 << endl;
        cout<<"\n\n\n";
    }
};
class Derived_B : public A
{
protected:
    int d2;

public:
    Derived_B(int a, int b) : A(a)
    {
        d2 = b;
    }
    void display()
    {
        cout<<"Inside the Derived_B\n\n\n";
        cout << "The value of a is : " << a << endl;
        cout << "The value of d1 is :" << d2 << endl;
        cout << "The subtraction of a and d2 =" << a -d2 << endl;
    }

} ;
int main()
{
A *obj[2];
Derived_A obj_d1(2,2);
Derived_B obj_d2(3,1);
obj[0]=&obj_d1;
obj[1]=&obj_d2;
obj[0]->display();
obj[1]->display();
    return 0;
}