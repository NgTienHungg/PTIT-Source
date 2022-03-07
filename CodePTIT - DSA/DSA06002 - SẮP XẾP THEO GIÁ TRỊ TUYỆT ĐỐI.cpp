// https://code.ptit.edu.vn/student/question/DSA06002
// SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI

#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<pair<int, int>> a;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (abs(x - a.first) == abs(x - b.first))
        return a.second < b.second;
    return abs(x - a.first) < abs(x - b.first);
}

void testCase() {
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a) cout << i.first << " ";
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

//todo Nếu |X - a[i]| bằng nhau thì sắp xếp theo thứ tự xuất hiện