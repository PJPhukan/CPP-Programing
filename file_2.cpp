#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s1, pj = "Paragjyoti phukan";
    ofstream out;
    out.open("sample1.txt"); // Crate a file using member function open() of the class
    out << pj;
    out.close();
    ifstream in("sample1.txt");
    while (in.eof() == 0)
    {
        getline(in , s1);
        cout << s1<<endl;
    }
    return 0;
}