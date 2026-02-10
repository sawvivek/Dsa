#include<iostream>
using namespace std;
int main(){
    int marks[10];
    cout<<"Size of the marks araay isa :"<<sizeof(marks)/sizeof(marks[0])<<endl;
    for(int i =0; i<10;i++){
        cin>>marks[i];
    }
    for (int i = 0; i <10; i++)
    if (marks[i]<35){
        cout<<i<<" ";
    }
    return 0;
}