#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows:";
    cin>>n;
    cout<<"Enter the number of columns:";
    cin>>m;

    int arr[n][m];
    int res[n][m];

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
    // this is run only form same row and columns
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         int temp=arr[j][i];
    //         arr[j][i]=res[i][j];
    //         res[i][j]=temp;
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //  for(int j=0;j<m;j++){
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           res[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}