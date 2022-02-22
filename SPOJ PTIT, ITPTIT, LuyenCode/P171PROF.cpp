// https://www.spoj.com/PTIT/problems/P171PROF/
// P171PROF - ROUND 1F - Học Bổng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int count = 1;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += v[i - 1];
        if (v[i] >= sum)
            count++;
        else
            sum -= v[i];
    }
    cout << count;
    return 0;
}

// Nếu ai không thể chờ nổi thì coi như chuyển xuống dưới cùng và bỏ qua, không tính thêm tgian của người đó vào sum