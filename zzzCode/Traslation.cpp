// #include <iostream>
// using namespace std;
// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     int l = 0;
//     int r = t.size() - 1;
//     while (l < r)
//     {
//         char ch = s[l];
//         s[l] = s[r];
//         s[r] = ch;
//         l++;
//         r--;
//     }
//     if (s == t)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}