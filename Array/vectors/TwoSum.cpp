#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of target sum :";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter the elements of arrays";
    for(int i = 0; i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}