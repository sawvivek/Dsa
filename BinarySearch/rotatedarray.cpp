#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums,int target){
    int n =nums.size();
    int lo =0;
    int hi = n-1;
    int pivot =-1;
    while(lo <= hi){
        int mid =lo +((hi-lo)/2);
        if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
            pivot =mid;
            break;
        }
    }
}
int main(){

    return 0; 
}