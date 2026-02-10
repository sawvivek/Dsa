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
    int no1 = 0;
    int noZ = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noZ++;
        else
            no1++;
    }
    for(int i =0;i<v.size();i++){
        if(i<noZ) v[i]=0;
        else v[i]=1;
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