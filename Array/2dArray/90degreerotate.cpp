#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows,column:";
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

      for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            int temp= arr[i][j];
            arr[i][j]=arr[j][i];
        arr[j][i]=temp;
            }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(arr[0][0]&& arr[0][2]){
            int temp=arr[0][0];
            arr[0][0]=arr[0][2];
            arr[0][2]=temp;
        }
        if(arr[1][0]&& arr[1][2]){
            int temp=arr[1][0];
            arr[1][0]=arr[1][2];
            arr[1][2]=temp;
        }
        if(arr[2][0]&& arr[2][2]){
            int temp=arr[2][0];
            arr[2][0]=arr[2][2];
            arr[2][2]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}