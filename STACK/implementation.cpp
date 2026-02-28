#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;
    stack<int> rt;
    while (temp.size() > 0)
    {
        rt.push(temp.top());
        cout << rt.top() << " ";
        temp.pop();
    }
    cout << endl;
    while (rt.size() > 0)
    {
        st.push(rt.top());
        rt.pop();
    }
}