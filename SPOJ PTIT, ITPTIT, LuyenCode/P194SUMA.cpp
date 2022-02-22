// https://www.spoj.com/PTIT/problems/P194SUMA/
// P194SUMA - Đảo dấu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    // Nếu có số âm thì đảo dấu hết số âm
    if (v[0] < 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0 || k == 0)
                break;
            if (k--)
                v[i] *= -1;
        }
        sort(v.begin(), v.end());
        // Nếu hết sô âm rồi mà vẫn còn k, thì chỉ dảo dấu số đầu tiên
        while (k--)
            v[0] *= -1;
    }
    // Nếu không có số âm thì chỉ đảo dấu số đầu tiên
    else
        while (k--)
            v[0] *= -1;

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    cout << sum;
    return 0;
}