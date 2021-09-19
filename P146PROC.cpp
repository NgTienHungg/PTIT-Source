// https://www.spoj.com/PTIT/problems/P146PROC/
// P146PROC - ROUND 6C - Bút màu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v(4);
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
        for (int j = 0; j < i; j++)
        {
            if (v[j] == v[i])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}