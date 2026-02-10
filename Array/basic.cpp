#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {1, 5, 4, 8, 7, 9};
    // cout << arr[0] << " ";
    // cout << arr[1] << " ";
    // cout << arr[2] << " ";
    // cout << arr[3] << " ";
    // cout << arr[4] << " ";
    // cout << arr[5] << " ";

    int arr[6];
    for(int i =0; i<6;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
         cout<<arr[i]<<" ";
    }
    
    return 0;
}