#include <bits/stdc++.h>
using namespace std;

// vector<int> findEvenNumbers(vector<int> &digits, vector<int> &ans)
// {
//     unordered_map<int, int> m;
//     for (auto ele : digits)
//     {
//         m[ele]++;
//     }

//     for (int i = 100; i <= 999; i += 2)
//     {
//         int x = i;
//         int a = x % 10; x /= 10;
//         int b = x % 10; x /= 10;
//         int c = x;

//         unordered_map<int, int> temp = m;

//         if (temp[a] > 0)
//         {
//             temp[a]--;
//             if (temp[b] > 0)
//             {
//                 temp[b]--;
//                 if (temp[c] > 0)
//                 {
//                     ans.push_back(i);
//                 }
//             }
//         }
//     }
//     return ans;
// }

vector<int> findEvenNumbers(vector<int> &digits, vector<int> &ans)
{
    unordered_map<int, int> m;
    for (auto ele : digits)
    {
        m[ele]++;
    }
    for (int i = 100; i <= 999; i += 2)
    {
        int x = i;
        int a = x % 10;
        x /= 10;
        int b = x % 10;
        x /= 10;
        int c = x;
        if (m.find(a) != m.end())
        {
            m[a]--;
            if (m[a] == 0)
                m.erase(a);
            if (m.find(b) != m.end())
            {
                m[b]--;
                if (m[b] == 0)
                    m.erase(b);
                if (m.find(c) != m.end())
                    ans.push_back(i);
                m[b]++;
            }
            m[a]++;
        }
    }
    return ans;
}
int main()
{
    vector<int> digits = {2, 1, 3, 0};
    vector<int> ans;

    findEvenNumbers(digits, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}