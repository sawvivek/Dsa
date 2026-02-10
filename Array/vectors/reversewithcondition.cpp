#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    for(int i=1,j=v.size()-2;i<=j;i++,j--)
    {int temp=v[i];
        v[i]= v[j];
        v[j]= temp;
    }
    display(v);
}