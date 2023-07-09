//Copy Constructor in C++

#include <iostream>
using namespace std;
class Num
{
    int num;

public:
    Num()
    {
        num = 0;
    };
    Num(int n)
    {
        num = n;
    };
    void display()
    {
        cout << "The number is :" << num << endl;
    }
};
int main()
{
    Num n2, n(50);
    Num n1(n);
    n.display();
    n1.display();
    n2.display();
    return 0;
}