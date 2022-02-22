// https://www.spoj.com/PTIT/problems/P143PROC/
// P143PROC - ROUND 3C - Đi chợ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, y, k;
	cin >> y >> k >> n;
	ll res1 = -1;
	for (ll i = 0; i <= n / k; i++)
	{
		if (k * i - y > 0)
		{
			res1 = k * i - y;
			break;
		}
	}
	if (res1 == -1)
	{
		cout << -1;
		return 0;
	}
	for (ll i = res1; i <= n - y; i += k)
		cout << i << " ";
	return 0;
}