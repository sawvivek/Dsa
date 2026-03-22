#include <bits/stdc++.h>
using namespace std;
int main()
{
    // maxheap
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(25);
    // pq.push(-6);
    // pq.push(8);
    // // pq.push(1);

    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    // minheap
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(8);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
}