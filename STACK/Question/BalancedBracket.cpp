#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string s)
{
    if (s.length() % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (s[i] == ')')
                st.pop();
            else
                return false;
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}
int main()
{
    string s;
    cin >> s;
    cout << isBalanced(s);
}