#include <bits/stdc++.h>
using namespace std;
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
void displayRev(queue<int> &q)
{
    stack<int> st;
    int n = q.size();
    while (q.size() > 0)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    q.pop();
    display(q);
    displayRev(q);
    display(q);
    cout << q.back();
    return 0;
}