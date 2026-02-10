//Majority element
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(int arr[]){
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={19,12,23,8,16};
    int n=5;
    // vector<int> v(5,0);
    int x=0;
    display(arr);
    // for(int i =0;i<n;i++){
    //     int min =INT8_MAX;
    //     int mindx=-1;
    //     for(int j=0;j<n;j++){
    //         if(v[j]==1) continue;
    //         else{
    //             if(min>arr[j]){
    //                 min =arr[j];
    //                 mindx =j;
    //             }
    //         }
    //     }
    //     arr[mindx]=x;
    //     v[mindx]=1;
    //     x++;
    // }
    // display(arr);

    // if only positive is given
for(int i =0;i<n;i++){
        int min =INT8_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(min>arr[j]){
                    min =arr[j];
                    mindx =j;
                }
            }
        }
        arr[mindx]=-x;
        x++;
    }
    display(arr);
}