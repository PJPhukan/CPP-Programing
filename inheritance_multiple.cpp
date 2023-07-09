// Multiple inheritance :How to used in a C++ Program and Its syntax, I give a example in below

/*
--->  MULTIPLE INHEITANCE   <---

class {{Derrived-class-name}}:{{visibility-mode}} {{Base1-clas-name}},{{visibility-mode}} {{Base2-clas-name}},{{visibility-mode}} {{Base3-clas-name}}{
    // code
};
*/
#include <iostream>
using namespace std;
class Base1
{
protected:
    int eng, che;

public:
    void set_marks1(int e, int c)
    {
        eng = e;
        che = c;
    }
};

class Base2
{
protected:
    int math, phy;

public:
    void set_marks2(int m, int p)
    {
        math = m;
        phy = p;
    }
};

class Base3
{
protected:
    int MIL, bio;

public:
    void set_marks3(int mil, int b)
    {
        MIL = mil;
        bio = b;
    }
};

class Derrived : public Base1, public Base2, public Base3
{
public:
    void display()
    {
        cout << "Obtain marks in Enlish  :" << eng << endl;
        cout << "Obtain marks in Assamese  :" << MIL << endl;
        cout << "Obtain marks in Mathematics  :" << math << endl;
        cout << "Obtain marks in Physics  :" << phy << endl;
        cout << "Obtain marks in Chemistry  :" << che << endl;
        cout << "Obtain marks in Biology  :" << bio << endl;
        cout << "Parcentage is  :" << ((eng + MIL + phy + che + bio) / 5) << endl;
    }
};

int main()
{
    
    Derrived pj;
    pj.set_marks1(43, 75);
    pj.set_marks2(60, 89);
    pj.set_marks3(80, 80);
    pj.display();
    return 0;
}