#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=6; 
   int arr[]={5,4,3,2,1,6};
   for(int ele: arr){
    cout<<ele<<" ";
   }
   cout<<endl;
   for(int i =0; i<n-1;i++){
    int min =INT_MAX;
    int minidx=-1;
    for(int j =i; j<n;j++){
        if(arr[j]<min){ 
            min=arr[j];
            minidx=j;
        }
        }
        swap(arr[minidx],arr[i]);
   }
   for(int ele: arr){
    cout<<ele<<" ";
   }
    return 0;
}