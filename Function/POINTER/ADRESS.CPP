#include<iostream>
using namespace std;
int main(){
    // int x=4;
    // int* p = &x;
    // cout<<x<<endl;
    // cout << p<<endl;
    // *p=5;
    // cout<<x<<endl;
    // cout<<p<<endl;
    // cout<<&x;

    int a,b;
    int* p1 =&a;
    int* p2= &b;
    cin >> *p1 >>*p2;
    cout<<"The value of a = "<<*p1<<endl;
        cout<<"The value of b = "<<*p2<<endl;

    return 0;
}