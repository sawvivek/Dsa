#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &u){
for(int i=0;i<u.size();i++){
      cout<<u[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int>& v,vector<int>& u){
    int n =v.size();
    int m =u.size();
    vector<int> res(m+n);
    int i =0;
    int j =0;
    int k=0;
    while(i<=n-1 &&j<=m-1){
        if(v[i]<u[j]){
            res[k]=v[i];
            i++;
        }
        else{
            res[k]=u[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<=m-1){
            res[k]=u[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=v[i];
            i++;
            k++;
        }
    }
    return res;
}
vector<int> merge1(vector<int>& v,vector<int>& u){
    int n =v.size();
    int m =u.size();
    vector<int> res(m+n);
    int i =n-1;
    int j =m-1;
    int k=m+n-1;
    while(i>=0 &&j>=0){
        if(v[i]>u[j]){
            res[k]=v[i];
            i--;
        }
        else{
            res[k]=u[j];
            j--;
        }
        k--;
    }
    if(i==0){
        while(j==0){
            res[k]=u[j];
            k--;
            j--;
        }
    }
    if(j==0){
        while(i==0){
            res[k]=v[i];
            i--;
            k--;
        }
    }
    return res;
}
int main (){
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);

    vector<int> u;
    u.push_back(2);
    u.push_back(3);
    u.push_back(6);
    u.push_back(7);
    u.push_back(10);
    u.push_back(12);
    
   vector<int> m= merge1(v,u);
   display(v);
   display(u);
   display(m);
    return 0;
}