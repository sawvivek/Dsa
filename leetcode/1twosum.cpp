#include<iostream>
using namespace std;
int main(){
    int arr[]={1,7,8,0,4,5,2,3};
    int x=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n;j++){
        if(arr[i]+arr[j]==x){
            cout<<"("<<i<<","<<j<<")";
        }
        }
    }
    return 0;
}