// Template in c++

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  template <class T=int>  -->default parameterise template
template <class T>
class Sample
{
public:
    T data;
    Sample(T d)
    {
        data = d;
    }
    void display();
};
template <class t>
void Sample<t>::display()
{ // outside the class function defination
    cout << "Data value is :" << data << endl;
}

void func(int a)
{
    cout << "Inside the first func()" << a << endl;
}
template <class T = float>
void func(T a)
{
    cout << "Inside the template  func()" << a << endl;
}
int main()
{
    // Sample <int > s1(14);
    // s1.display();

    // func(8);
    func<>(80);
    return 0;
}