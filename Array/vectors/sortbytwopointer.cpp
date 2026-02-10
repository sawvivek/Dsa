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
void sort1(vector<int> &v)
{
    int n = v.size();
    int j = n-1;
    int i = 0;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        else if (v[j] == 1)
            j--;
        else if (v[i] == 1 && v[j] == 0)
        {
            v[j] = 1;
            v[i] = 0;
            i++;
            j--;
        }
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
    // sort(v);
    // display(v);
    sort1(v);
    display(v);
}