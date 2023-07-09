//Inheritance Overloading in C++: How to used it and one example in below

#include <iostream>
using namespace std;

class Base1
{
private:
    int roll_no = 90;

public:
    void display()
    {
        cout << "Inside the Base 1 " << endl;
        cout << "Roll number is :" << roll_no << endl;
    }
};

class Base2
{
private:
    int id = 19;

public:
    void display()
    {
        cout << "Inside the Base 2 " << endl;
        cout << "Id number is :" << id << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
  
    void display()
    {
        // Base1::display();
        Base2::display();
        // cout<<"Inside the derived class"<<endl;
    }
};

int main()
{
    Derived d1;
    d1.display();
    return 0;
}