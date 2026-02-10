#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    for (int i = 2; i <=x; i++)
    {
        f*=i;
    }
    return f;
    
}
int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r :";
    cin>>r;
    int result= factorial(n)/(factorial(r)*factorial(n-r));
    cout<<result;
    return 0;
}