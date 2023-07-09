//Multilevel inheritance how to used  in c++, I give a example in below

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_no(int r);
};

void Student ::set_roll_no(int r)
{
    roll_number = r;
}

class Marks : public Student
{
protected:
    int physics;
    int chemistry;

public:
    void set_marks(int p, int c);
};

void Marks::set_marks(int p, int c)
{
    physics = p;
    chemistry = c;
}

class Result : public Marks
{
public:
    // int result = ((physics + chemistry) / 2)*100;
    void display(void);
};

void Result::display()
{
    cout << "The student roll no is :" << roll_number << endl;
    cout << "The student physice marks are :" << physics << endl;
    cout << "The student chemistry marks are :" << chemistry << endl;
    cout << "The student CGPA is :" << ((physics + chemistry) / 2) << "%" << endl;
}
int main()
{
    // Marks m1;
    Result r1;
    r1.set_roll_no(45);
    r1.set_marks(89, 75);
    r1.display();
    return 0;
}