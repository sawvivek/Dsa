#include <bits/stdc++.h>
using namespace std;

// Function
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();

    // min heap: {value, row, col}
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;

    // Step 1: push first column
    for (int i = 0; i < n; i++)
    {
        pq.push({matrix[i][0], i, 0});
    }

    // Step 2: extract k times
    while (k--)
    {
        auto temp = pq.top();
        pq.pop();

        int val = get<0>(temp);
        int r = get<1>(temp);
        int c = get<2>(temp);

        if (c + 1 < n)
        {
            pq.push({matrix[r][c + 1], r, c + 1});
        }

        if (k == 0)
            return val;
    }

    return -1;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}};

    int k = 8;

    int result = kthSmallest(matrix, k);

    cout << "Kth smallest element: " << result << endl;

    return 0;
}