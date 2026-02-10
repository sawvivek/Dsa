#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number :";
    // cin>>n;
    // cout<<"You entered value of n is "<<n<<endl;

    // for (int i = 1; i <=n; i++){
    //     for (int j = 1;j <=n; j++)
    //     {
    //      cout<<"*";   
    //     }   
    //     cout<<"\n";
    // }
    // int n,m;
    // cout<<"Enter two number :"<<endl;
    // cin>>n;
    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;   
    // }

    //  int n;
    // cout<<"Enter two number :"<<endl;
    // cin>>n;
    // for (int i = n; i>=1; i--){
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;   
    // }

       int n;
    cout<<"Enter two number :"<<endl;
    cin>>n;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j <=n; j++)
        {if (i==(n-1))
        {
             cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;   
    }
    return 0;
}