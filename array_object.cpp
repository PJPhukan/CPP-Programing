//Array object 


#include<iostream>
using namespace std;
class Employee{
    int id,slaray;
    public:
        void setId(void){
            slaray=33;
            cout<<"Enter the id of the employee :";
            cin>>id;
        }
        void getId(void){
            cout<<"The id of the emplyee :"<<id<<endl;
        }
};
int main(){
    Employee arr[3];
    for (int i=0;i<3;i++){
         arr[i].setId();
        //  arr[i].getId();

    }
    for (int i=0;i<3;i++){
        //  arr[i].setId();
         arr[i].getId();

    }
    return 0;
}