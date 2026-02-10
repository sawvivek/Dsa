// prefix sum of an array

#include <iostream>
#include <vector>
using namespace std;

// vector<int> runningSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> result;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += nums[i];
//         result.push_back(sum);
//     }
//     return result;
// }
// preffix sum of an array
vector<int> prefixSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n);
    result[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        result[i] = result[i - 1] + nums[i];
    }
    return result;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // vector<int> res = runningSum(arr);
    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }
    vector<int> res = prefixSum(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}