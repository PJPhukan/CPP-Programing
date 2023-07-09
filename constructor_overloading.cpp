//Constructor overloading in c++


#include<iostream>
using namespace std;

class Sum{
    int a ,b;
    public:
        Sum(){};
        // Sum(int x,float z){
        //     a=x;
        //     float(b);
        //     b=z;
        // }
        Sum(int x,int y){
            a=x;
            b=y;
        }
        void sum(){
            cout<<"Sum of the :"<<a+b;
        }
       
     
        
};
// s1(2,4),
int main(){
    Sum  s2(2,5);
    s2.sum();
    
    
    return 0;
}