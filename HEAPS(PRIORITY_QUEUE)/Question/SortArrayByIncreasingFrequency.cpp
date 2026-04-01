#include <bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (int x : arr)
    {
        freq[x]++;
    }

    sort(arr.begin(), arr.end(), [&](int a, int b)
         {
        if(freq[a] == freq[b])
            return a > b;  
        return freq[a] < freq[b]; });
    return arr;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    frequencySort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}