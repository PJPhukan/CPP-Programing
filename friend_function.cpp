//Friend function in c++ and how to used it in a program with example

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
         friend complex sumcomplex(complex o1,complex o2);
         /*Above  lines means that non member sumcomplex function is allowed to do anything with the private parts member*/
         void setNumber(int x,int y){
            a=x;
            b=y;
         }
         void PrintNumber(){
            cout<<"Your number is  :"<<a<<"+"<<b<<"i"<< endl;
         }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b +o2.b));
    return o3;
}
int main(){
    complex sum,c1,c2;
    c1.setNumber(3,4);
    c2.setNumber(3,5);
    sum=sumcomplex(c1,c2);
    sum.PrintNumber();
    return 0;
}