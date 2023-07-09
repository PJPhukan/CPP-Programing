///Access specifires in c++: Public,Protected and Private && How to used this specifires in a class && I give a small example in below.

#include <iostream>
using namespace std;
class Base
{
private:
    string name;
    float CGP=98.9;

protected:
    int data = 34;

public:
    Base()
    {
        name = "Paragjyoti Phukan";
        cout << "Name is :" << name << endl;
    }
    void CGPA()
    {
        cout << "Value of CGPA :" << CGP << endl;
    }
};

// if base class is protected then we can only data access inside the derived class ,we cannot access outside the class 
// class Derived : protected Base
class Derived : public Base
{
public:
    int id = data;
    void display()
    {
        cout << "Value of id :" << id << endl;
    }
};

int main()
{
    // Base b1;
    Derived d1;
    d1.display();
    d1.CGPA();
    return 0;
}