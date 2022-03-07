// https://www.spoj.com/PTIT/problems/P166SUMI/
// P166SUMI - ROUND 6I - Rick Flag

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (!v[i])
            count++;
    }
    if (count == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}