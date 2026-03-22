#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    stack<int> st;
    stack<int> helper;
    MyQueue()
    {
    }
    // push=O(n), pop=peek=O(1);
    void push(int x)
    {
        if (st.size())
        {
            st.push(x);
            return;
        }
        else
        {
            while (st.size() != 0)
            {
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while (helper.size() > 0)
            {
                st.push(helper.top());
                helper.pop();
            }
        }
    }
    int pop()
    {
        int x = st.top();
        st.pop();
        return x;
    }
    int peek()
    {
        return st.top();
    }

    // push=O(1), pop=peek=O(n);
    // void push(int x)
    // {
    //     st.push(x);
    // }
    // int pop()
    // {
    //     if (st.size() == 0)
    //     {
    //         return -1;
    //     }
    //     while (st.size() != 0)
    //     {
    //         helper.push(st.top());
    //         st.pop();
    //     }
    //     int x = helper.top();
    //     helper.pop();
    //     while (helper.size() > 0)
    //     {
    //         st.push(helper.top());
    //         helper.pop();
    //     }
    //     return x;
    // }
    // int peek()
    // {
    //     if (st.size() == 0)
    //     {
    //         return -1;
    //     }
    //     while (st.size() != 0)
    //     {
    //         helper.push(st.top());
    //         st.pop();
    //     }
    //     int x = helper.top();
    //     while (helper.size() > 0)
    //     {
    //         st.push(helper.top());
    //         helper.pop();
    //     }
    //     return x;
    // }
    bool empty()
    {
        if (st.size() == 0)
            return true;
        else
            return false;
    }
    void display()
    {
        while (st.size() != 0)
        {
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        while (helper.size() > 0)
        {
            st.push(helper.top());
            cout << st.top() << " ";
            helper.pop();
        }
        cout << endl;
    }
};
int main()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.display();
    q.pop();
    q.pop();
    q.display();
    q.empty();
    return 0;
}