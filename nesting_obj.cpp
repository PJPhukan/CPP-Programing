//Nesting object in c++

#include <iostream>
#include <string>
using namespace std;
class binary
{
    // string s;
    string s;

public:
    void read(void);
    void chk_bin(void);
};
void binary::read(void)
{
    cout << "Enter the Number  :";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' || s.at(i != '0'))
        {
            cout << "Incorrect binary format";
            return;
        }
    }
}
int main()
{
    binary b1;
    b1.read();
    b1.chk_bin();
    return 0;
}