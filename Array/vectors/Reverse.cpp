#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversepart(int i, int j,vector<int> &a){
while(i<=j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;

}
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter size of array :";
    cin >> n;
    cout << "Enter the elements of arrays :";
    for (int i = 0; i < n; i++){
        int p;
        cin >> p;
        v.push_back(p);
    }
    display(v);
    reversepart(0,2, v);
    display(v);
}