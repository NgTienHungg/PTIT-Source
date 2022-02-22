// https://code.ptit.edu.vn/student/question/CPP0424
// GHÉP DÃY SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 1; i <= k; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
		TestCase();
	return 0;
}