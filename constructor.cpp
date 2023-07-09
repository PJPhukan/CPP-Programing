// Constructor in C++ with example

#include<iostream>
using namespace std;
class Summ
{
private:
    int a,b;
public:
    Summ(){
        a=7;
        b=8;
    }
    int sum();
    
};
int Summ::sum(){
    return a+b;
}


int main(){
    Summ a1;
   int a= a1.sum();
   cout<<"Sum is :"<<a;
    return 0;
}