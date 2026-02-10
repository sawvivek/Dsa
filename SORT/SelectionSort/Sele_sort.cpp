#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=0;j<n;j++){
            if(arr[j<arr[mini]]){
                mini=j;
            }
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Selection_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}