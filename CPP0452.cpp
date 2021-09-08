// https://code.ptit.edu.vn/student/question/CPP0452
// PHẦN TỬ CHUNG CỦA BA DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m, l;
    cin >> n >> m >> l;
    long long a[n], b[m], c[l];
    
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;

    int i = 0, j = 0, k = 0;
    bool OK = 0;
    while (i < n && j < m && k < l) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++, j++, k++;
            OK = 1;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }
    if (!OK) cout << -1;
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}