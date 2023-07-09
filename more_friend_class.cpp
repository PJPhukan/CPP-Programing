// Friend function Example

#include<iostream>
using namespace std;

// forward declearation 
class Complex;

class Calculator{
    public:
        int Add(int a,int b){
            return a+b;
        }
        int sumRealcalculator(Complex  ,Complex );
        int sumComcalculator(Complex  ,Complex );
        
};
class Complex{
    int a,b;

    //Individullay declearing functions as friends
    /*
    friend int Calculator::sumRealcalculator(Complex  o1,Complex o2);
    friend int Calculator::sumComcalculator(Complex  o1,Complex o2);
    */

   //Aliter : Declaring the entire calculator class as friend
   friend class Calculator;
  
   
    public:
        void setNumber(int x,int y){
            a=x;
            b=y;
        }
        void printNumber(void ){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator:: sumRealcalculator(Complex  o1,Complex o2){
       return (o1.a+o2.a);
}
int Calculator:: sumComcalculator(Complex  o1,Complex o2){
       return (o1.b+o2.b);
}
int main(){
    cout<<"Complex\n";
    Complex c1,c2,c3;
    c1.setNumber(2,4);
    c2.setNumber(6,4);
    c1.printNumber();
    c2.printNumber();
    cout<<"Calculator\n ";
    Calculator ca1,cal;
    ca1.Add(3,4);
   int res = cal.sumRealcalculator(c1,c2);
    cout<<"The sum of the Real  number "<<res<<endl;
   int resc = cal.sumRealcalculator(c1,c2);
    cout<<"The sum of the Real  number "<<resc;
    return 0;
}