// Pointer used in class object
#include <iostream>
using namespace std;

class Shop
{
    int id;
    float prize;

public:
    void setData(int i, float p)
    {
        id = i;
        prize = p;
    }
    void getData()
    {
        cout << "Item id :" << id << endl;
        cout << "Item prize is  :" << prize << endl;
    }
};
int main()
{
    Shop *ptr = new Shop[4];
    Shop *temp = ptr;
    int i, j;
    float p;
    for (i = 0; i < 4; i++)
    {
        cout << "Enter details Item number :" << i + 1 << endl;
        cout << "Enter id :";
        cin >> j;
        cout << "Enter prize :";
        cin >> p;
        ptr->setData(j, p);
        ptr++;
    }
    for (i = 0; i < 4; i++)
    {
        cout << "Details of item number " << i + 1 << endl;
        temp->getData();
        temp++;
    }

    return 0;
}