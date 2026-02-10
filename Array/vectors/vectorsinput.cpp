#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    // for(int i =0; i<v.size();i++){
    //     cin>>v[i];
    // }
    // for(int i =0; i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    int n;
    cout<<"Enter the size of vector :";
    cin>>n;
    int x;
    for(int i =0; i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i =0; i<n;i++){
        cout<<v.at(i)<<" ";
    }
}