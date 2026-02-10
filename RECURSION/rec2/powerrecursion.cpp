#include<iostream>
using namespace std;
int power(int a,int b){
    int p=1;
    for(int i =1;i<=b;i++){
        p*=a;
    }
    return p;
}
int powerrec(int a, int b){
    if(b==0) return 1;
    int ans =a*powerrec(a,b-1);
    return ans;
}
int pow(int x,int n){
    if(n==1) return x;
    int ans=pow(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    // cout<<power(2,3);
    // cout<<powerrec(2,4);
    cout<<pow(2,9);
    return 0;
}