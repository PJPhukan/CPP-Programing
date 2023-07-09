//Multiple inheritance example in c++

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class A
{
protected:
    int a;

public:
    A() {}
    A(int i)
    {
        a = i;
    }
    void display_A()
    {
        cout << "The value of a is :" << a << endl;
    }
};
class B
{
protected:
    int b;

public:
    B() {}
    B(int i)
    {
        b = i;
    }
    void display_B()
    {
        cout << "The value of a is :" << b << endl;
    }
};
class Sum : public A, public B
{
    // int total;
public:
    int total = a + b;
    Sum(int i, int j) : A(i), B(j) {}

    void display()
    {
        // cout<<"Sum of a and b is :"<<a+b<<endl;
        cout << "Sum of a and b is :" << total << endl;
    }
};
int main()
{
    Sum s(2, 8);
    s.display_A();
    s.display_B();
    s.display();
    return 0;
}