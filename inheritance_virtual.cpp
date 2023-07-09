//Virtual :-> How to used virtual keyword in inheritance .

#include <iostream>
using namespace std;
class Base1
{
protected:
    int roll;

public:
    void Set_roll(int r)
    {
        roll = r;
    }
    void display(void)
    {
        cout << "Roll number of the student :" << roll << endl;
    }
};
class Derived_1_1 : virtual public Base1
{
protected:
    int che, math;

public:
    void Set_marks(int c, int m)
    {
        che = c;
        math = m;
    }
    void display1(void)
    {
        cout << "Chemistry marks is :" << che << endl;
        cout << "Mathemathics marks is :" << math << endl;
    }
};
class Derived_1_2 : virtual public Base1
{
protected:
    int phy, eng;

public:
    void Set_marks1(int c, int m)
    {
        phy = c;
        eng = m;
    }
    void display2(void)
    {
        cout << "Physics marks is :" << phy << endl;
        cout << "English marks is :" << eng << endl;
    }
};
class Derived : public Derived_1_1, public Derived_1_2
{
private:
    int result;

public:
    void DDisplay()
    {
        result = che + math + phy + eng;
        display();
        display1();
        display2();

        cout << "Result is  :" << result << endl;
    }
};
int main()
{
    Derived d1;

    d1.Set_roll(34);
    d1.Set_marks(20, 30);
    d1.Set_marks1(40, 60);
    d1.DDisplay() ;
    return 0;
}