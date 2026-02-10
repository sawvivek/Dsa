#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row no. :";
    cin>>m;
    cout<<"Enter the colu no :";
    cin>>n;

    int arr[m][n];

    cout<<"Enter the element of array in arr: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];

    cout<<"Element of array: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         b[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose od matrix is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}