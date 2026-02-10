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
    int no0 = 0;
    int no1 = 0;
    int no2=0;
    for (int i = 0; i < v.size(); i++)
    {if(v[i]==0) no0++;
        else if(v[i]==1) no1++;
        else no2++;
    }
    for(int i =0;i<v.size();i++){
        if(i<no0) v[i]=0;
        else if (i<(no1+no0)) v[i]=1;
        else v[i]=2;
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