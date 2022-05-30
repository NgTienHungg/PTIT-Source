// https://code.ptit.edu.vn/student/question/DSA08011
// KHOẢNG CÁCH XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, count;
    string st, en, s;
    cin >> n >> st >> en;
    set<string> dd;
    while (n--) {
        cin >> s;
        dd.insert(s);
    }

    queue<pair<string, int>> q;
    q.push({st, 1});
    while (!q.empty()) {
        s = q.front().first;
        count = q.front().second;
        q.pop();

        if (s == en) {
            cout << count;
            return;
        }
        
        for (int i = 0; i < s.length(); ++i) {
            string tmp = s;
            for (char j = 'A'; j <= 'Z'; ++j) {
                tmp[i] = j;
                if (dd.find(tmp) != dd.end()) {
                    dd.erase(tmp);
                    q.push({tmp, count + 1});
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}