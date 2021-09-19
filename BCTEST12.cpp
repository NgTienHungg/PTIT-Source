// https://www.spoj.com/PTIT/problems/BCTEST12/
// BCTEST12 - Biến đổi chuỗi

#include <bits/stdc++.h>
using namespace std;

bool check(char c)
{
	if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'e' || c == 'u' || c == 'i')
		return 0;
	return 1;
}

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	string res = {};
	for (int i = 0; i < s.length(); i++)
	{
		if (check(s[i]))
			res = res + "." + s[i];
	}
	cout << res;
	return 0;
}