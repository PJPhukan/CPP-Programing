// Template in c++

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
template <class t>
class sum
{
    t a, b;

public:
    sum(t a, t b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "The sum of a and b =" << a + b << endl;
    }
};
int main()
{
    sum <int> s1(70, 30);
    sum <float> s2(3.4, 6.6);
    s1.display();
    s2.display();
    return 0;
}