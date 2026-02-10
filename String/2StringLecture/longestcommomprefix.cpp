#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void display(vector<string>& v){
    int n =v.size();
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // ["flower","flow","flight"];
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    display(v);
    sort(v.begin(),v.end());
    display(v);


}