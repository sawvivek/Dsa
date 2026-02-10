#include <iostream>
#include <vector>
using namespace std;
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
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v1(v.size());
    for (int i =0;i<v.size();i++){
        int j= v.size()-1-i;
        v1[i]=v[j];
        cout<<v1[i]<<" ";
    }
}