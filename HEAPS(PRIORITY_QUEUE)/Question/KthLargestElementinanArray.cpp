#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {10, 20, -4, 6, 18, 2, 24, 105, 118};
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    cout << pq.top();
}