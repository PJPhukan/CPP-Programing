// Template in c++

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

 template <class t1,class t2>
 float Myfunc(t1 a,t2 b){
    float avg=(a+b)/2.0;
    return avg;
 }
template <class t>
  void Swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;

  }
int main(){
    float avg=Myfunc(4,5);
    cout<<"Avarage is :"<<avg<<endl;
    float avg1=Myfunc(4.2,5.6);
    cout<<"Avarage is :"<<avg1<<endl;
    int x=9,y=19;
    Swapp(x,y);
    cout<<"x="<<x<<"  y ="<<y;
    return 0;
}