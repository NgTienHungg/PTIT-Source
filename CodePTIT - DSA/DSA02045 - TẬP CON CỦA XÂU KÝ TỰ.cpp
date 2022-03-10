// https://code.ptit.edu.vn/student/question/DSA02045
// TẬP CON CỦA XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

int n;
string a;
vector<string> res;

void Try(int i, string s) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) s.push_back(a[i]);
        if (i == n - 1) {
            if (s != "") res.push_back(s);
        }
        else Try(i + 1, s);
        if (j == 1) s.pop_back();
    }
}

void testCase() {
    cin >> n >> a;
    res.clear();
    Try(0, "");
    sort(res.begin(), res.end());
    for (string i : res) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}