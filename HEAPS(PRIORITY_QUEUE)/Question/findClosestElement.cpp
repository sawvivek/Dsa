#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
vector<int> findClosestElements(vector<int> &arr, int k, int x, vector<int> &ans)
{
    priority_queue<pi> pq;

    for (auto ele : arr)
    {
        int dist = abs(x - ele);
        pi p = {dist, ele};
        pq.push(p);
        if (pq.size() > k)
            pq.pop();
    }
    while (pq.size() > 0)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans;
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    findClosestElements(arr, 4, 3, ans);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}