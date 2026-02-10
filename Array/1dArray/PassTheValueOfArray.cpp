#include<iostream>
using namespace std;
void display (int arr[]){
    for(int i =0;i<5;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
void change(int brr[]){
    brr[3]=90;
}
int main(){
    int array[]={4,7,8,9,25};
    display(array);
    change(array);
    display(array);
}