#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=8;
   int arr[n]={5,4,-4,3,2,-2,1,6};
   for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i =0; i<n-1;i++){
    for(int j =0; j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            // int temp =arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(arr[j],arr[j+1]);
            }
        }
   }
   for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
} 