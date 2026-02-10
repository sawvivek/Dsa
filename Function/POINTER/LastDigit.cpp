#include<iostream>
using namespace std;
// void LastAndFirstDigit(int a){
//     int ld,n,temp=a;
//     ld=a%10;
//     while (temp>9)
//     {
//         temp/=10;
//     }
//     cout<<"The first digit of "<<a<<" is "<<temp<<endl;
//     cout<<"The Last digit of "<<a<< " is "<<ld<<endl;
// }
// int main(){
//     int num;
//     cout<<"Enter the number :";
//     cin>>num;
//     LastAndFirstDigit(num);
//     return 0;
// }

// by using pointer

void LastAndFirstDigit(int a,int* ptr1, int* ptr2){
    *ptr2 =a%10;
    while (a>9)
    {
        a/=10;
    }
    *ptr1=a;
}
int main(){
    int num,Lastdigit,Firstdigit;
    cout<<"Enter the number :";
    cin>>num;
    int* p1= &Firstdigit;
    int* p2= &Lastdigit;
    LastAndFirstDigit(num, p1,p2);
    cout<<Firstdigit<<" "<<Lastdigit;
    return 0;
}