#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row no. :";
    cin>>m;

    int arr[m][m];

    cout<<"Enter the element of array in arr: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Element of array: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"Transpose od matrix is"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}