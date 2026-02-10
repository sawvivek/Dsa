#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,8,9,4,5,1};
    int* ptr =arr;  //address 
    cout<<ptr<<endl;
    ptr[0] =5;
    for(int i=0;i<6;i++){
        // cout<<ptr[i]<<" ";
        cout<<*ptr<<" ";
        ptr++;
    }
}