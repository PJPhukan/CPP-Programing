// STL  vector in c++

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

template <class T>
 void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<"  ";
        cout<<v.at(i)<<"\t";
    }
    cout<<endl;
 }
int main(){
    vector<int > vec1; //zero length vector
    // int element,size=5 ; 
    // cout<<"Enter the size :";
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter an element : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5,77);
    // display(vec1); 

    vector <char> vec2(4); //4 element char vector
    // vec2.push_back('r');
    // display(vec2); 
    vector <char> vec3(vec3); //4 element character vector from vec2
    // display(vec3); 
    vector <int> vec4(4,7);
    display(vec4); 
    return 0;
}