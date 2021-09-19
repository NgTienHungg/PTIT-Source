// https://codeforces.com/contest/1526/problem/A
// A. Mean Inequality

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
vector<int> v;

void init()
{
    cin >> n;
    v.resize(2 * n);
    for (int i = 0; i < n * 2; i++)
        cin >> v[i];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int test;
    cin >> test;
    while (test--)
    {
        init();
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
            cout << v[i] << " " << v[2 * n - 1 - i] << " ";
        cout << endl;
    }
    return 0;
}