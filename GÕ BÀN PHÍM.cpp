#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string s; cin >> s;
	string res = "";
	stack<char> st;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '<') {
			if (!res.empty()) {
				st.push(res.back());
				res.pop_back();
			}
		}
		else if (s[i] == '>') {
			if (!st.empty()) {
				res += st.top();
				st.pop();
			}
		}
		else if (s[i] == '-') {
			if (!res.empty()) res.pop_back();
		}
		else res += s[i];
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	cout << res;
	return 0;
}