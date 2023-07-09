 // New keyword in c++ ,how to used it in a c++ program
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "Value of a is :" << *ptr << endl;

    // new keyword

    int *pt = new int(78);//dynamicaly asign the value of *pt

    //delete keyword

    delete pt;
    cout << "Value of new int  is :" << *pt << endl;
    return 0;
}