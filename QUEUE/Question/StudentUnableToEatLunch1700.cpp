#include <bits/stdc++.h>
using namespace std;

int countStudent(vector<int> &students, vector<int> &sandwiches)
{
    queue<int> q;
    int n = students.size();
    for (int i = 0; i < n; i++)
    {
        q.push(students[i]);
    }
    int i = 0;
    int count = 0;
    while (q.size() > 0 && count != q.size())
    {
        if (q.front() == sandwiches[i])
        {
            count = 0;
            q.pop();
            i++;
        }
        else
        {
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    return q.size();
}

int main()
{
    vector<int> s;
    s.push_back(1);
    s.push_back(1);
    s.push_back(1);
    s.push_back(0);
    s.push_back(0);
    s.push_back(1);
    vector<int> L;
    L.push_back(1);
    L.push_back(0);
    L.push_back(0);
    L.push_back(0);
    L.push_back(1);
    L.push_back(1);

    int x = countStudent(s, L);
    cout << x;
}