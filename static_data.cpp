// Behavire of a static data member 

#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id of the Employee :";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the emolyee is :  "<<id<<endl;
        }
        static void getCount(void){
        //  void getCount(void){
            cout<<"  And This employee  number is : "<<count<<endl;
        }

};


int Employee :: count;//by default static variable value start from 0
int main(){
    Employee p1,p2,p3;
    p1.setData();
    p1.getData();
    Employee :: getCount();
    // p1.getCount();
    p2.setData();
    p2.getData();
    Employee :: getCount();
    p3.setData();
    p3.getData();
    Employee :: getCount();
    // Employee :: count
    
    return 0;
}