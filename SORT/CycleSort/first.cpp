#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 1, 6, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int j = 0;
    while (j < n)
    {
        int correctidx = arr[j] - 1;
        if (j == correctidx)
            j++;
        else
            swap(arr[j], arr[correctidx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}