#include<iostream>
using namespace std;
void binaryToDecimal(int num){
    int tem=num;
    int sum=0;
    int two=1;
    while(tem!=0){
        int rem=tem%10;
        sum+=rem*two;
        two*=2;
        tem=tem/10;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter the binary number :";
    cin>>n;
    binaryToDecimal(n);
    return 0;
}