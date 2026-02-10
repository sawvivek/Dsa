#include<iostream>
using namespace std;
void sum(int s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum(s+n,n-1);
}
int sum(int n){
    if(n==1 || n==0) return 1;
    return n+ sum(n-1);
}
int main(){
    int res=sum(6);
    cout<<res;
    // sum(0,10);
    return 0;
}