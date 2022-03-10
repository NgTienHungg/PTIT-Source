// https://code.ptit.edu.vn/student/question/DSA07001
// NGĂN XẾP 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int x;
    string s;
    vector<int> v;
    while (cin >> s) {
        if (s == "push") {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "pop") {
            if (!v.empty()) {
                v.pop_back();
            }
        }
        else if (s == "show") {
            if (v.empty())
                cout << "empty";
            else
                for (int i : v) cout << i << " ";
            cout << endl;
        }
    }
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