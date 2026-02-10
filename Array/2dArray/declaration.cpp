#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of n,m : ";
    cin>>n >>m;
    int arr[n][m];
    cout<<"Enter the value of array :";
    for (int  i = 0; i <n; i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for (int  i = 0; i <n; i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;  
}