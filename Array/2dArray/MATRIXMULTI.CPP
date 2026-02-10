#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row and columns of 1st matrix :";
    cin>>n>>m;
    int p,q;
    cout<<"Enter the row and columns of 2nd matrix :";
    cin>>p>>q;

    if(m==p){
        int arr[n][m];
        cout<<"Enter the element of matrix 1st :"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int brr[p][q];
        cout<<"Enter the element of 2nd matrix :"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
            }
        }

        int res[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j] +=arr[i][k]*brr[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                    cout<<res[i][j]<<" ";
            }
            cout<<endl;
            }
        }
    else cout<<"The matrices cannot be multiplies";
    return 0;
}