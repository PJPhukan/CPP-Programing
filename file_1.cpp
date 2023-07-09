#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string pj= "Paragjyoti phukan";
    string st="Hey my name is Paragjyoti phukan";
    string st1="Hey my name is Paragjyoti phukan from lakhimpur";
    ofstream out("sample.txt");
    out<<pj<<endl;
    out<<st<<endl;
    out<<st1<<endl;
    out.close();
    ifstream in("sample.txt");
    // in>>st;
    getline(in,st);
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;
    return 0;
}
