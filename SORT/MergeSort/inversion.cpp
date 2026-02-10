#include<iostream>
#include<vector>
using namespace std;
// method-1;
int main(){
   int arr[]={5,1,2,0,4,9,6};
   int n =sizeof(arr)/sizeof(arr[0]);
   vector<int> v(arr,arr+n);
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   int c =0;
   for(int i =0;i<n-1;i++){
    for(int j =i+1;j<n;j++){
        if(arr[i]>arr[j]){               // t.c =O(n^2)  , s.c=O(1)
            cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            c++;
        }
    }
   }
   cout<<c<<endl;
}