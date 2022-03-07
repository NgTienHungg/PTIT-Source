// https://code.ptit.edu.vn/student/question/DSA07045
// GÕ BÀN PHÍM

#include <bits/stdc++.h>
using namespace std;

void testCase() {
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
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}