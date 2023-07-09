// STL map in c++

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int > marksMap;
    marksMap["pj"]=89;
    marksMap["p"]=9;
    marksMap["jp"]=8;

    marksMap.insert({{"dn",56},{"maa",99}});

    map<string,int>:: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first <<"\t"<<(*iter).second<<endl;
    }
    return 0;
}