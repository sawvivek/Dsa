#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(vector<int>& v, int k){
    int n = v.size();
    for (int i=n-k, j = n-(k-1); i <=j; i++,j--){
        int temp = v[i];
    v[i]=v[j];
    v[j]=temp;
}
    //     for(int i=n-k,j=n-1;i<=j;i++,j--){
    //         int temp = v[i];
    // v[i]=v[j];
    // v[j]=temp;
    // }
    // for(int i=0,j=n-1;i<=j;i++,j--){
    //     int temp = v[i];
    // v[i]=v[j];
    // v[j]=temp;
    // }
return;
}
int main()
{
    vector<int> v;
    int n,k;
    cout << "Enter size of array :";
    cin >> n;
    cout<<"Enter the value of k step reverse :";
    cin>>k;
    cout << "Enter the elements of arrays :";
    for (int i = 0; i < n; i++){
        int p;
        cin >> p;
        v.push_back(p);
    }
    display(v);
    // reversepart(0,n-k-1, v);
    // reversepart(n-k,n-1,v);
    // reversepart(0,n-1,v);
    reversepart(v,k);
    display(v);
}