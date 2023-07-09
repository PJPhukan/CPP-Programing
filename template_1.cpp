//Template in c++

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
template <class t1, class t2>

class Base
{
    t1 a;
    t2 b;

public:
    Base(t1 a, t2 b)
    {
        this->a = a;
        this->b = b;
    }
    void Sum()
    {
        cout << "Sum of a and b =" << a + b << endl;
    }
};
int main()
{
    Base <int,int > obj (8,4);
    Base <float,float > obj1 (6.7,3.3);
    Base <int,float > obj2 (6,3.3);
    Base <float,int > obj3 (6.7,3);
    obj.Sum();
    obj1.Sum();
    obj2.Sum();
    obj3.Sum();

    return 0;
}