#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row no. :";
    cin>>m;
    cout<<"Enter the colu no :";
    cin>>n;

    int arr[m][n];

    cout<<"Enter the element of array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Element of array: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}