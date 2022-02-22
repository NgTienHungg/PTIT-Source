// https://www.spoj.com/PTIT/problems/BCATM/
// BCATM - ATM

#include <bits/stdc++.h>
using namespace std;

int n, s, c[50], a[50];
bool stop = 0;

void init()
{
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void sinh(int k)
{
	int i = k;
	while (i > 0 && c[i] == n - k + i)
		i -= 1;
	if (i == 0)
		stop = 1;
	else
	{
		c[i] += 1;
		for (int j = i + 1; j <= k; j++)
			c[j] = c[j - 1] + 1;
	}
}

int main()
{
	init();
	for (int i = 1; i <= n; i++)
	{
		stop = 0;
		for (int j = 1; j <= i; j++)
			c[j] = j;
		while (!stop)
		{
			int res = 0;
			for (int j = 1; j <= i; j++)
				res += a[c[j]];
			if (res == s)
			{
				cout << i;
				return 0;
			}
			sinh(i);
		}
	}
	cout << -1;
	return 0;
}

//todo: Sinh tổ hợp từ 1 -> n của n, tổ hợp nào t/m có tổng = S thì in và dừng chương trình