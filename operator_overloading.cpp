// Operator overloading in c++ .

#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){}
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void display(){
        cout<<"Complex number is  :"<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator +(Complex c1){
        Complex c;
        c.real=real+c1.real;
        c.img=img+c1.img;
        return c;
    }
};
int main(){
    Complex c1(2,4),c2(3,6),c;
    c1.display();
    c2.display();
    c=c1+c2;
    c.display();
    return 0;
}