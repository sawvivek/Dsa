#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int pgeI[n];
    stack<int> st;
    pgeI[0] = -1;
    st.push(0);

    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            pgeI[i] = -1;
        else
            pgeI[i] = st.top();

        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << pgeI[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i - pgeI[i] << " ";
    }
}