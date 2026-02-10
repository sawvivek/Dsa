#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of row and col: ";
    cin>>m>>n;
    int p,q;
    cout<<"Enter the row and col of 2 matrix: ";
    cin>>p>>q;

    if(n==p){

        int arr[m][n];
    cout<<"Enter the Element of 1st matrix :"<<endl;
    for(int i =0 ;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[p][q];
    cout<<"Enter the Element of 2nd matrix :"<<endl;
    for(int i =0 ;i<p;i++){
        for(int j =0;j<q;j++){
            cin>>brr[i][j];
        }
    }

        int res[m][q];
        for(int i =0 ;i<m;i++){
        for(int j =0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j] +=arr[i][k]*brr[k][j];
            }
        }
    }
    cout<<"Resultant Matrix :"<<endl;
    for(int i =0 ;i<m;i++){
        for(int j =0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}