#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int maxSum = INT8_MIN;
    // tc =O(n-k)*k = O(n*k)
    // for (int i = 0; i < n - k; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < i + k; j++)
    //     {
    //         sum += arr[j];
    //     }
    //     maxSum = max(maxSum, sum);
    // }
    // using sliding window tc= O(n)

    int presum = 0;
    for (int i = 0; i < k; i++)
    {
        presum += arr[i];
    }
    maxSum = presum;
    int minidx = -1;
    int i = 1;
    int j = k;
    while (j < n)
    {
        int current = presum + arr[j] - arr[i - 1];
        if (maxSum < current)
        {
            maxSum = current;
            minidx = i;
        }
        i++;
        j++;
        presum = current;
    }

    cout << maxSum << endl;
    cout << minidx;
}