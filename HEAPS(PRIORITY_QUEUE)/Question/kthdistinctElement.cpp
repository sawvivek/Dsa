#include <bits/stdc++.h>
using namespace std;
vector<int> topFrequuency(vector<int> &arr, int k, vector<int> &ans)
{
    typedef pair<int, int> pi;
    unordered_map<int, int> mp;
    for (auto ele : arr)
    {
        mp[ele]++;
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (auto x : mp)
    {
        int ele = x.first, freq = x.second;
        pair<int, int> p = {freq, ele};
        pq.push(p);
        if (pq.size() > k)
            pq.pop();
    }
    while (pq.size() > 0)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 1, 1, 2, 2, 3};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 2;
    vector<int> ans;
    topFrequuency(arr, k, ans);
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
}