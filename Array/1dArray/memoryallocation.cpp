#include<iostream>
using namespace std;
int main(){
    int marks[7];
    for(int i =0; i<7;i++){
        cout<<&marks[i]<<endl;
    }
    return 0;
}