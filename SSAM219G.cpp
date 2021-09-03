// https://www.spoj.com/PTIT/problems/SSAM219G/
// SSAM219G - HÌNH CHỮ NHẬT LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    int n; cin >> n;
    vector<long long> v(n), l(n), r(n);
    stack<long long> a, b;
    for (auto &x : v) cin >> x;
    for (int i = 0; i < n; ++i) {
        while (!a.empty() && v[a.top()] >= v[i]) a.pop();
        if (a.empty()) l[i] = 0;
        else l[i] = a.top() + 1;
        a.push(i);
    }
    for (int i = n - 1; i >= 0; --i) {
        while (!b.empty() && v[b.top()] >= v[i]) b.pop();
        if (b.empty()) r[i] = n - 1;
        else r[i] = b.top() - 1;
        b.push(i);
    }
	long long area = 0, res;
    for (int i = 0; i < n; ++i) {
        long long x = min(v[i], r[i] - l[i] + 1);
        long long S = x * x;
        if (S > area) {
			area = S;
			res = x;
		}
    }
	cout << res;
	return 0;
}