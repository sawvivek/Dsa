#include <bits/stdc++.h>
using namespace std;

void reverseKElement(queue<int> &q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
void display(queue<int> q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    reverseKElement(q, 4);
    display(q);

    return 0;
}