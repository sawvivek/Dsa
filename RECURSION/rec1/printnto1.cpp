#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
// using extra variable
void printusingextravariable(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    printusingextravariable(i+1,n);
}

void printreverse(int n){
    if(n==0) return;
    cout<<n<<endl;
    printreverse(n-1);
}

int main(){
    // print(5);
    // printreverse(5);
    printusingextravariable(1,5);
    return 0;
}