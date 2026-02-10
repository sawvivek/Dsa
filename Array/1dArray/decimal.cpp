#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,0,1,0,1};
    int sum=0,t=1;
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    for(int i =size-1;i>=0;i--){
        sum+=arr[i]*t;
        t*=2;
    }
    cout<<sum;
    return 0;
}