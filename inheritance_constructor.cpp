//How to used constructor in inheritance in a c++ program . I give a example in below 

#include <iostream>
using namespace std;

class Base1
{
protected:
    int phy, che;

public:
    Base1(int p, int c)
    {
        phy = p;
        che = c;
    }
    void printDataBase1()
    {
        cout << "The marks in Physics  :" << phy << endl;
        cout << "The marks in Chemistry  :" << che << endl;
    }
};

class Base2
{
protected:
    int bio, ass;

public:
    Base2(int b, int a)
    {
        bio = b;
        ass = a;
    }
    void printDataBase2()
    {
        cout << "The marks in Biology  :" << bio << endl;
        cout << "The marks in Assamese  :" << ass << endl;
    }
};

class Derived : public Base1, public Base2
{
protected:
    int eng;

public:
    // int result;
    Derived(int a, int b, int c, int d, int e) : Base1(a, b), Base2(c, d)
    {
        eng = e;
    }
    void printDataDerived()
    {
        cout << "The marks in English  :" << eng << endl;
    }
    void result()
    {
        // result=(phy+bio+ass+eng+che)/5;
        cout << "Result is  : " << (phy + bio + ass + eng + che) / 5 << "%" << endl;
        // cout << "Result is  : " <<result << "%" << endl;
    }
};

int main()
{
    Derived pj(89, 75, 80, 80, 43);
    pj.printDataBase1();
    pj.printDataBase2();
    pj.printDataDerived();
    pj.result();
    return 0;
}