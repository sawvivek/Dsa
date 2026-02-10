#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0 || n==1) return 1;
    int res=n*factorial(n-1); 
    return res;
}
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    cout<< factorial(num);
    return 0;
}