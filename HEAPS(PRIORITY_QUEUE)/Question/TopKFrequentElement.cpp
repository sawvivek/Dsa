#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pp;
vector<int> topKFrequent(vector<int> &arr, int k, vector<int> &ans)
{
    unordered_map<int, int> mp;
    for (int ele : arr)
    {
        mp[ele]++;
    }
    priority_queue<pp, vector<pp>, greater<pp>> pq;

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
        int ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 2, 1, 3, 1};
    vector<int> ans;
    topKFrequent(arr, 2, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}