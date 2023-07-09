
//Multilevel inheritance example
#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    A() {}
    A(int i, int j)
    {
        a = i;
        b = j;
    }
    void Display_A()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};
class Sum : public A
{
protected:
    // int sum;

public:
    int sum = a + b;
    Sum(int i, int j) : A(i, j) {}
    void Display_sum()
    {
        cout << "The sum of a and b is :" << sum << endl;
    }
};
class Square : public Sum
{
public:
   int sq= sum*sum;
    Square(int i, int j) : Sum(i, j) {}
    void square()
    {
        cout << "Square of sum: " << sq << endl;
    }
};
int main()
{
    Square s(2, 7);
    s.Display_A();
    s.Display_sum();
    s.square();
    return 0;
}