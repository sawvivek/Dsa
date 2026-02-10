#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> a){
//     int i=0,j=a.size()-1;
//     while(i<=j){
//     int temp = a[i];
//     a[i]=a[j];
//     a[j]=temp;
//     i++;
//     j--;

// }
    int j=a.size()-1;
    vector <int> v;
    for(int i=3;i<=j;i++){
v.push_back(a[i]);
    }
     for(int i=0;i<=3;i++){
v.push_back(a[i]);
    }
    return v;
}
int main(){
    int n ;
    cin>>n;
    vector<int> a(n);
    for(int  i =0; i<n;i++){
        cin>>a[i];
    }
    vector <int> r =reverse(a);
     for(int  i =0; i<n;i++){
        cout<<r[i]<<" ";
    }
    return 0;
}