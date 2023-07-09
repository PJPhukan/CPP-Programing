//Virtual function

#include<iostream>
using namespace std;

class Base{
    public:
    int Base_int=9;
   virtual void  display(){
        cout<<"Displaying the value of Base int :"<<Base_int<<endl;
    }
} ;
class Derived:public Base{
    public:
    int derived_int=5;
    void  display(){
        cout<<"Displaying the value of Base int :"<<Base_int<<endl;
        cout<<"Displaying the value of derived int :"<<derived_int<<endl;
    }
} ;
int main(){
      Base *base_pointer;
      Derived derived_obj;
      base_pointer=&derived_obj;
      base_pointer->display();
    return 0;
}