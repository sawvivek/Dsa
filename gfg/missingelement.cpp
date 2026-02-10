#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int missingNum(vector<int> &arr)
// {
//     // code here
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     int miss = 0;
//     // if(n==1){
//     //     return 2;
//     // }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i + 1)
//         {
//             miss = i + 1;
//             break;
//         }
//     }
//     if (miss == 0)
//     {
//         miss = n + 1;
//     }
//     return miss;
// }

// Not Optimized Approach
// vector<int> subarraySum(vector<int> &arr, int target)
// {
//     // code here

//     int n = arr.size();
//     vector<int> res;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;

//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == target)
//             {
//                 res.push_back(i + 1);
//                 res.push_back(j + 1);
//                 return res;
//             }
//         }
//     }
//     res.push_back(-1);
//     return res;
// }
// Optimized Approach using Sliding Window
vector<int> subarraySum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> res;
    int left = 0;
    int sum = 0;

    for (int right = 0; right < n; right++)
    {
        sum += arr[right];

        while (sum > target && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == target)
        {
            res.push_back(left + 1);
            res.push_back(right + 1);
            return res;
        }
    }
    res.push_back(-1);
    return res;
}

int main()
{
    vector<int> arr = {16, 13, 24, 32, 21, 48, 4, 9};
    int target = 9;
    vector<int> result = subarraySum(arr, target);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}
