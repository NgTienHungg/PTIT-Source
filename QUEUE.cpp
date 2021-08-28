// https://luyencode.net/problem/QUEUE
// QUEUE - Truy vấn với hàng đợi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<int> q;
    while (t--)
    {
        int tv;
        cin >> tv;
        if (tv == 1)
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (tv == 2)
        {
            if (!q.empty())
                q.pop();
        }
        else if (tv == 3)
        {
            if (q.empty())
                cout << "Empty!\n";
            else
                cout << q.front() << endl;
        }
    }
    return 0;
}