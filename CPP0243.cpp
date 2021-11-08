// https://code.ptit.edu.vn/student/question/CPP0243
// SẮP ĐẶT HAI DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int, int> dd;
    for (int &x : a) cin >> x;
    for (int &x : b) {
        cin >> x;
        dd[x] = 1;
    }

    vector<int> re;
    for (int x : a) {
        if (dd[x] >= 1) dd[x]++;
        else re.push_back(x);
    }

    for (int x : b) {
        if (dd[x] > 0) {
            for (int j = 1; j < dd[x]; ++j) {
                cout << x << " ";
            }
            dd[x] = 0;
        }
    }
    sort(re.begin(), re.end());
    for (int x : re) cout << x << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}