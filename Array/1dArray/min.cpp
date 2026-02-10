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
    int min=INT_MAX;
    for (int i = 0; i <n; i++){
        if (min<arr[i])
            min=arr[i];
    }
    cout<<min;
    return 0;  
}