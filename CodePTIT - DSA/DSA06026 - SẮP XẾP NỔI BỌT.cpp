// https://code.ptit.edu.vn/student/question/DSA06026
// SẮP XẾP NỔI BỌT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    // bubble sort
    for (int i = 1; i < n; ++i) {
        bool is_sorted = true;
        for (int j = 0; j < n - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted) break;
        
        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
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