// https://code.ptit.edu.vn/student/question/DSA04014
// CẶP NGHỊCH THẾ

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Merge(ll *a, ll l, ll r, ll mid) {
    ll p1 = mid - l + 1, p2 = r - mid, ans = 0;
    ll L[p1], R[p2];
    for (int i = 0; i < p1; i++)
        L[i] = a[l + i];
    for (int i = 0; i < p2; i++)
        R[i] = a[mid + i + 1];
    int i = 0, j = 0, k = l;
    while (i < p1 and j < p2) {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else {
            a[k++] = R[j++];
            ans += p1 - i;
        }
    }
    while (i < p1)
        a[k++] = L[i++];
    while (j < p2)
        a[k++] = R[j++];
    return ans;
}

ll calc(ll *a, int l, int r) {
    ll ans = 0;
    int mid;
    if (l < r) {
        mid = (l + r) >> 1;
        ans += calc(a, l, mid);
        ans += calc(a, mid + 1, r);
        ans += Merge(a, l, r, mid);
    }
    return ans;
}

void TestCase() {
    int n; cin >> n;
    ll a[n];
    for (ll &i : a) cin >> i;
    cout << calc(a, 0, n - 1);
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