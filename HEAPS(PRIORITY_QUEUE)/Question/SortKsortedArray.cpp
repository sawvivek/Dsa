#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 9, 8, 7, 4, 70, 60, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 3;
    vector<int> v;
    int idx = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            v.push_back(pq.top());
            pq.pop();
        }
    }
    while (pq.size() != 0)
    {
        v.push_back(pq.top());
        pq.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}