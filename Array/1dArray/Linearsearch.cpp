#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array :";
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the search element :";
    cin>>x;
    bool flag =false;
    for (int i = 0; i <n; i++){
        if (arr[i]==x) flag=true;}
    if (flag==true){cout<<"Element found";
    }
    else cout<<"Element not found";
    
}