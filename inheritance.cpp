//Inheritance : 

//               i) Single inheritance :-> A derived class with a base class
//              ii) Multiple inheritance :->  A derived class with more than one base class .
//              iii) Multilevel inheritance :-> Deriving a class from already derived class .
//              iv) Hiararchical inheritance :->  Several derived classes from a single base class . 
//              v)  Hybrid inheritance :-> Combination of multiple inheritance and multilevel inheritance .

// Derrived class
/*
 syntax->
 class {{derrived-class-name}}:{{visibility-mode}} {{base-class-name}}{
    class methods/members/etc
}
*/

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    int salary;
    Employee()
    {
    }
    Employee(int ID, int Sl)
    {
        id = ID;
        salary = Sl;
    }
    void display()
    {
        cout << "ID of the employee :" << id << endl;
        cout << "Salary of the employee :" << salary << endl;
    }
};



class Programmer : public Employee
{
public:
    Programmer(int iD, int sll)
    {
        id = iD;
        salary = sll;
    }
    // void display1()
    // {
    //     cout << "ID of the employee :" << id << endl;
    //     cout << "Salary of the employee :" << salary << endl;
    // }
};

int main()
{
    Employee e1(23, 45);
    e1.display();
    Programmer pj(455, 67);

    pj.display();
    return 0;
}