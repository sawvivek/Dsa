#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sort(vector<int> &v)
{
    int n= v.size();
    int lo = 0;
    int mid = 0;
    int hi=(n-1);
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else
        mid++;
    }
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter size of array :";
    cin >> n;
    cout << "Enter the elements of arrays :";
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    display(v);
    sort(v);
    display(v);
}