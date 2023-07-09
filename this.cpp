//this keyword how to used in cpp

#include <iostream>
using namespace std;

class This_Keyword
{
    int a;

public:
    /*
    void setData(int a){
        this->a=a;
    }
    */
    This_Keyword &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "The value of a is :" << a << endl;
    }
};
int main()
{
    This_Keyword t;
    /*
    t.setData(20);
    t.getdata();
    */
    t.setData(20).getdata();
    return 0;
}