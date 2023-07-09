//Function overloading
#include<iostream>
using namespace std;
int volume(int a){
    return a*a*a;
}
float volume(double r,int h){
    return (3.14*r*r*h);
}
int volume(int l, int b,int h){
    return l*b*h;
}
int main(){
    cout<<volume(2)<<endl;    
    cout<<volume(2,2)<<endl;    
    cout<<volume(2,2,3)<<endl;    
    
    return 0;
}