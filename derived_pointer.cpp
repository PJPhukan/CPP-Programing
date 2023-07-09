#include<iostream>
using namespace std;

class Base{
    public:
    int base_int;
    void display(){
        cout<<"Displaying Base class base_int value :"<<base_int<<endl;
    }
} ;
class Derived:public Base{ 
    public:
    int derived_int;

    void display(){
        cout<<"Displaying Base class base_int value :"<<base_int<<endl;
        cout<<"Displaying Derived class derived_int value :"<<derived_int<<endl;

    }
};
int main(){
    Base *base_pointer;
    Derived *derived_pointer,derived_obj;
    base_pointer=&derived_obj;
    base_pointer->base_int=90;
    base_pointer->display();
    derived_pointer->base_int=1200;
    derived_pointer->derived_int=120;
    derived_pointer->display();

    return 0;
}