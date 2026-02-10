#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){ 
   string s= "AZYZXBYDXJKZZ";
   string str;
   int n = s.length();
   for(int i=0;i<n;i++){
    if(s[i]>='X'){
        str.push_back(s[i]);
    }
   }
   int m = str.length();
   cout<<str<<endl;
   for (int i = 0; i <m-1; i++){
   for(int i =0; i<m-1;i++){
        if(str[i]<str[i+1]){
            // int temp =arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(str[i],str[i+1]);
            }
        }
    }
   cout<<str<<endl;

//    for(int i =0; i<m;i++){
//         if(str[i]>str[i+1]){
//             int temp =str[i];
//             str[i]=str[i+1];
//             str[i+1]=temp;
//             }
//         }
// // sort(str.begin(),str.end());
//    cout<<str;
    return 0;
} 