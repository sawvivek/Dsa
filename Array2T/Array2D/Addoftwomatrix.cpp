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

    cout<<"Enter the element of array in brr: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
   
    cout<<"Element of array: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Element of brray: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=arr[i][j]+arr[i][j];
        }
    }
    cout<<"Resultant Matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}