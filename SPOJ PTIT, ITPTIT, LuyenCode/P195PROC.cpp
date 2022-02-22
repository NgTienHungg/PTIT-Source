// https://www.spoj.com/PTIT/problems/P195PROC/
// P195PROC - Problem C - ACM

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

int n;
int a[100005];
int s = 0, sum = 0, dem = 0;

int main()
{
    cin >> n;
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    FOR(i, 0, n - 1)
    {
        s += a[i];
        if (s > 300)
            break;
        dem++;
        sum += s;
    }
    cout << dem << ' ' << sum;
    return 0;
}

// Số điểm phạt cộng dồn theo phút, a[i] chỉ là số tgian giải quyết bài.