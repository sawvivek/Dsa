#include<iostream>
using namespace std;

// void sawp(int* x,int* y){
//     int temp= *x;
//     *x=*y;
//     *y= temp;
//     return;
// }
// int main(){
//     int a=8,b=7;
//     sawp(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }

//SEND METHOD OF SWAP
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}