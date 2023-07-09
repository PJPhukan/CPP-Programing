//Sum two  class object data value in c++

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void setDatabySum(Complex c1,Complex c2){
            a=c1.a + c2.a;
            b=c1.b +c2.b;
        }
        void print(){
            cout<<"The sum of the complex number  :"<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(3,6);
    c3.setDatabySum(c1,c2);
    c3.print();
    return 0;
}