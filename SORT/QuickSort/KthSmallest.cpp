#include <iostream>
#include <vector>
using namespace std;
int partition(int arr[], int st, int end)
{
    int pivotE = arr[st];
    int count = 0;
    for (int i = st + 1; i <= end; i++)
    {
        if (arr[i] <= pivotE)
            count++;
    }
    int pidx = count + st;
    swap(arr[st], arr[pidx]);

    int i = st;
    int j = end;
    while (i < pivotE && j > pivotE)
    {
        if (arr[i] <= pivotE)
            i++;
        if (arr[j] > pivotE)
            j--;
        else if (arr[i] > pivotE && arr[j] <= pivotE)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pidx;
}
int kthSmallest(int arr[], int st, int end, int k)
{
    int pi = partition(arr, st, end);
    if (pi == k - 1)
    {
        cout << "Kth Smallest Element is: " << arr[pi] << endl;
        return arr[pi];
    }
    else if (pi > k - 1)
    {
        return kthSmallest(arr, st, pi - 1, k);
    }
    else
        return kthSmallest(arr, pi + 1, end, k);
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, -8, 20, 44, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    //    vector<int> v(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 6;
    cout << kthSmallest(arr, 0, n - 1, k);
}