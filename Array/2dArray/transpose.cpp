#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int tra[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp=arr[j][i];
            arr[j][i]=tra[i][j];
            tra[i][j]=temp;
            cout<<tra[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}