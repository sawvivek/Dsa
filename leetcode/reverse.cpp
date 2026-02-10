#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> arr,int d){
    int n=arr.size();
    d=d%n;
    vector <int> v;
  for(int i=d;i<n;i++){
    v.push_back(arr[i]);
  }
  for(int i = 0; i<d;i++){
    v.push_back(arr[i]);
  }

    return v;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int  i =0; i<n;i++){
        cin>>a[i];
    }
    vector <int> r =reverse(a,k);
     for(int  i =0; i<n;i++){
        cout<<r[i]<<" ";
    }
    return 0;
}