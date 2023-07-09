//Create class object in C++

#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int e,f;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"The value of a is :"<<a<<endl;
            cout<<"The value of b is :"<<b<<endl;
            cout<<"The value of c is :"<<c<<endl;
            cout<<"The value of e is :"<<e<<endl;
            cout<<"The value of f is :"<<f<<endl;
        }
};
void Employee::setData(int a1,int b1,int c1){
    a=a1,b=b1,c=c1;
}
int main(){
    Employee e1;
    e1.e=7;
    e1.f=6;
    e1.setData(1,2,3);
    e1.getData();
    
    return 0;
}