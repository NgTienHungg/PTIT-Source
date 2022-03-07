// https://code.ptit.edu.vn/student/question/DSA02001
// DÃY SỐ 1

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;

void print() {
    cout << "[";
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "]" << endl;
}

void Try(int i) {
    print();
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(n);
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