//Friend function example

#include<iostream>
using namespace std;

//called forward declearation
class Y;


class X{
    int data;
    public:
        void value(int value){
            data=value;
        }
     friend void Add(X,Y);
};
class Y{
    int num;
    public:
        void Value(int value){
            num=value;
        }
        friend void Add(X,Y);
};
void Add(X o1,Y o2){
    
       cout<<"The sum of the data "<<o1.data +o2.num;
};

int main(){
    X o1;
    o1.value(4);
    Y y1;
    y1.Value(7);
    Add(o1,y1);
    
    return 0;
}