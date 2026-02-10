#include<iostream>
#include<vector>
using namespace std;
// int removeElement(vector<int>& nums, int val) {
//         int n=nums.size();
//         int k=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==val){
//                 nums.pop_back();
//             }
//         }
//         return k;
//     }
    void display(vector<int>& nums){
        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
void length(vector< vector<int> > v){
    cout<<v.size();
}
int main(){
    vector <int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(2);
    int val=3;
    display(v1);
    // int k=removeElement(v1,val);
    // display(v1);
    // vector<int> v2;
    // v2.push_back(4);
    // v2.push_back(5);

    // vector<int> v3;
    // v3.push_back(6);
    // v3.push_back(7);
    // v3.push_back(8);
    // v3.push_back(9);
    // v3.push_back(10);

    // vector< vector<int> > v;
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);

    // cout<<v.size()<<endl; 
    // length(v);


    return 0;
}