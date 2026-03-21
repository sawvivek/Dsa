#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int f, b;
    int s;
    vector<int> arr;
    Queue(int val)
    {
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val)
    {
        if (b == arr.size())
        {
            cout << "Queue is FULL!" << endl;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop()
    {
        if (s == 0)
        {
            cout << "Queue is Empty!" << endl;
            return;
        }
        f++;
        s--;
    }
    int Front()
    {
        if (s == 0)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[f];
    }
    int back()
    {
        if (s == 0)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[b - 1];
    }
    int size()
    {
        return s;
    }
    bool isEmpty()
    {
        if (s == 0)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
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
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout << q.back() << endl;
    ;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    return 0;
}