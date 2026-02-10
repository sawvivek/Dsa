#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows,column:";
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp= arr[i][j];
            arr[i][j]=arr[j][i];
        arr[j][i]=temp;
            }
    }
    cout<<"Transpose of matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"90 degree rotate"<<endl;

    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            int temp= arr[k][i];
            arr[k][i]=arr[k][j];
        arr[k][j]=temp;
        }
    }
}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}