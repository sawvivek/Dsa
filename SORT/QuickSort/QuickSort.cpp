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
void quickSort(int arr[], int st, int end)
{
    if (st >= end)
        return;
    int pi = partition(arr, st, end);
    quickSort(arr, st, pi - 1);
    quickSort(arr, pi + 1, end);
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    //    vector<int> v(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}