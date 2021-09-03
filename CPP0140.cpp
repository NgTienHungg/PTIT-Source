// https://code.ptit.edu.vn/student/question/CPP0140
// SỐ HOÀN HẢO

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll Pow(int x, int y) {
    ll r = 1;
    for (int i = 1; i <= y; i++)
        r *= x;
    return r;
}

vector<ll> v = {6, 28, 496, 8128, 33550336, 8589869056};
void perfectNumber() {
    ll x = Pow(2, 18) * (Pow(2, 19) - 1);
    v.push_back(x);
}

void TestCase() {
    ll n;
    cin >> n;
    for (int i = 0; i < v.size(); i++) {
        if (n == v[i]) {
            cout << "1\n";
            return;
        }
    }
    cout << "0\n";
}

int main() {
    perfectNumber();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}