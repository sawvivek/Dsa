#include<iostream>
using namespace std;
int climbStairs(int n) {
        if(n==2) return 2;
        if(n==1) return 1;
        int left =climbStairs(n-1);
        int right =climbStairs(n-2);
        return left+right;
}

int Stairs(int n){
    if(n==3) return 3;
    if(n==2) return 2;
        if(n==1) return 1;
        int left =Stairs(n-1);
        int mid =Stairs(n-2);
        int right =Stairs(n-3);
        return left+mid+right;

}
int main(){
    cout<<Stairs(5);
}