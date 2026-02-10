#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of element : ";
    cin>>n;
    int arr[n];
    int count=0;
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
        count+=arr[i];
    }
    cout<<count;
    
    return 0;
}