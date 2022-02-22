// https://www.spoj.com/PTIT/problems/P172SUMI/
// P172SUMI - ROUND 2I - Yêu/Không Yêu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    if (odd.size() == 0)
        cout << 0;
    else
    {
        int sum = 0;
        for (int i = 0; i < even.size(); i++)
            sum += even[i];
        sort(odd.rbegin(), odd.rend());
        int siz = odd.size();
        if (siz % 2 == 0)
            for (int i = 0; i < siz - 1; i++)
                sum += odd[i];
        else
            for (int i = 0; i < siz; i++)
                sum += odd[i];
        cout << sum;
    }
    return 0;
}