#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int binarysearch(vector<int> &arr, int k)
{
    if (arr.empty())
        return -1;
    // Find first occurrence of k
    // code here
    int n = arr.size();
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5};
    int k = 3;
    int result = binarysearch(arr, k);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}