#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
void pascal(int n)
{
    int result = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout<<" ";
        }
            for (int j = 0; j <= i; j++)
            {
                result = factorial(i) / (factorial(j) * factorial(i - j));

                cout << result << " ";
            }
            cout << endl;
        }
    }

    int main()
    {
        int n;
        cout << "Enter the value of n :";
        cin >> n;
        pascal(n);
        return 0;
    }