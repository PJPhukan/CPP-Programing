#include<iostream>
using namespace std;
class Test{
    int x,y;
    public:
    // Test(int i,int j):x(i),y(j){
    Test(int i,int j):x(i),y(i+j){
    // Test(int i,int j):y(j),x(y+i){    ---->its doesnot give proper result
        cout<<"Value of x is :"<<x<<endl;
        cout<<"Value of y is :"<<y<<endl;
    }
};
int main(){
    Test t1(19,30);
    return 0;
}