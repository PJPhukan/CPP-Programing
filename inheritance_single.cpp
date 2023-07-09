//Inheritance: Single inheritance in c++  :-> I gave a examle ,how to  inherited a class by  privately and publically



#include <iostream>
using namespace std;
/*
// inherited by publically

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};


void Base::setData(void)
{
    data1 = 5;
    data2 = 10;
}


int Base::getdata1()
{
    return data1;
}


int Base::getdata2()
{
    return data2;
}


class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    // setData();
    data3 = data2 + getdata1();
}
void Derived::display()
{
    cout << "The value of data1  :" << getdata1()<<endl;
    cout << "The value of data2  :" << data2<<endl;
    cout << "The value of data3  :" << data3<<endl;
}
int main()
{
    Derived d1;
    d1. setData();
    d1.process();
    d1.display();
    return 0;
}
*/

// inherited by privatly

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void Base::setData(void)
{
    data1 = 5;
    data2 = 10;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

class Derived : Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    setData();
    data3 = data2 + getdata1();
}
void Derived::display()
{
    cout << "The value of data1  :" << getdata1() << endl;
    cout << "The value of data2  :" << data2 << endl;
    cout << "The value of data3  :" << data3 << endl;
}
int main()
{
    Derived d1;
    d1.process();
    d1.display();
    return 0;
}