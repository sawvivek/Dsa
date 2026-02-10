#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array :";
    for (int  i = 0; i <n; i++){
        cin>>arr[i];}
    // int max=arr[0];
    int max=INT_MIN;
    for (int i = 0; i <n; i++){
        if (max<arr[i])
            max=arr[i];
    }
    cout<<max;
    return 0;  
}