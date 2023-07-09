// swapping the two object value

#include<iostream>
using namespace std;

//Forward decleation
class Y;
class X
{
private:
    int val1;
    friend void exchange(X &x,Y &y);
public:
    void setValue(int value){
        val1=value;
    }
    void display(){
        cout<<val1<<endl;
    }
};
class Y
{
private:
    int val2;
    friend void exchange(X &x,Y &y);
public:
    void setValue(int value){
        val2=value;
    }
    void display(){
        cout<<val2<<endl;
    }
};

void exchange(X & x,Y & y){
    int temp=y.val2;
    y.val2=x.val1;
    x.val1=temp;
}

int main(){
    X x;
    Y y;
    x.setValue(72);
    y.setValue(90);
    exchange(x,y);
    cout<<"After the swaping val1=";
    x.display();
    cout<<"After the swaping val2=";
    y.display();
    return 0;
}