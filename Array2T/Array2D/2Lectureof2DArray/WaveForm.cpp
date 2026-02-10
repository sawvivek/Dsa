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
    cout<<"Element are : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<"Wave Matrix are : "<<endl;
    // for(int i=0;i<m;i++){
    //         if(i%2==0){
    //             for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    // }
    // }
    
    // cout<<endl<<"2 Wave Matrix are : "<<endl;
    // for(int i=0;i<m;i++){
    //         if(i%2!=0){
    //             for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    // }
    // }

    // cout<<endl<<"Reverse Wave Matrix are : "<<endl;
    // for(int i=m-1;i>=0;i--){
    //            if(i%2==0){
    //             for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    // }
    // }

    cout<<"Wave Matrix are : "<<endl;
    for(int j=0;j<n;j++){
            if(j%2==0){
                for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
    }
    }
}