#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,4};
    int n= 4;
    bool flag =true;
    for(int i =0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
    return 0;
}