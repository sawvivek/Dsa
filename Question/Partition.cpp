#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bool flag = false;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (2 * arr[i] == arr[n - 1])
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == true)
        cout << "Partition";
    else
        cout << "can not be partition";
    cout << endl;
}