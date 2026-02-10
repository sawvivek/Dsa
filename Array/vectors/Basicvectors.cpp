#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(7);
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(8);
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
}