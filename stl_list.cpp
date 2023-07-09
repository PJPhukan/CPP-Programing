//STL  list in c++

#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lt)
{
    list<int>::iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(4);
    list1.push_back(13);
    // list<int>::iterator iter;
    // iter = list1.begin();
    // display(list1);

    list<int> list2(4); // Empty list of size 3
    list<int>::iterator iter = list2.begin();
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    *iter = 3;
    iter++;
    *iter = 92;
    iter++;
    cout << "before sorthing the list :" << endl;
    display(list2);
    cout << "after sorthing the list :" << endl;
    
    list2.sort();
    display(list2);
    cout << "Merge two list after sorted:" << endl;
    
    list1.merge(list2);
    list1.sort();

    list1.reverse();
    display(list1);

    //    list2.pop_back(); //delete element from the end
    //    display(list2);
    //    list2.pop_front(); //delete element from the front
    //    display(list2);
    //    list2.remove(9);// remove a particuler element from the list
    //    display(list2);
    return 0;
}