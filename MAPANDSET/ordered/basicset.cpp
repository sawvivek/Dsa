#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for(auto ele : s)
    // {
    //     cout << ele << " ";
    // }

    map<int, int> m;
    m[3] = 30;
    m[1] = 20;
    m[2] = 10;
    for (auto ele : m)
    {
        cout << ele.second << endl;
    }
}