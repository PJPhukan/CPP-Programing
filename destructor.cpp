//Destructor in C++

#include<iostream>
using namespace std;
int count=0;
class destructor
{
public:
    destructor(){
        count++; 
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~destructor(){
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    destructor n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two object"<<endl;
        destructor n2,n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"Back to main"<<endl;
    return 0;
}