#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row of matrix: ";
    cin>>m;
    cout<<"Enter the col of matrix: ";
    cin>>n;
    int arr[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Roll no and MArks of the students: "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}