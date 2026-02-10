//Majority element
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);
    display(v);
    sort(v.begin(),v.end());
    display(v);
    int n= v.size();
    cout<<v[n/2];
    // for(int i =0;i<5;i++){
    //     int count=1;
    //     for(int j =i+1;j<5;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count>5/2) cout<< arr[i];
    // }

}