// https://www.spoj.com/PTIT/problems/P162PROH/
// P162PROH - ROUND 2H - Tính sát thương

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> v(10001);
    v.push_back(0);
    for (int i = 1;; i++)
    {
        v[i] = v[i - 1] + i;
        if (v[i] >= x)
        {
            v.resize(i + 1);
            break;
        }
    }
    // v = {0, 1, 3, 6, 10, 15, ...}
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= x)
        {
            x -= v[i];
            count++;
        }
        else
            break;
    }
    cout << count;
    return 0;
}