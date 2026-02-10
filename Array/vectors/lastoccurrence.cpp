#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(5);
    v.push_back(10);
    int x=10;
    int idx=-1;
    // for (int i = 0; i <v.size(); i++){
    //     if (v[i]==x){
    //         idx=i;}
    // }
     for (int i =v.size()-1;i>=0; i--){
        if (v[i]==x){
            idx=i;}
    }
    cout<<idx;
    
}