#include <bits/stdc++.h>
using namespace std;

bool isOK(string a, string b) {
    if (a == b) return 1;
    if (a.length() != b.length() || a.length() & 1) return 0;
    int l = a.length();
    string a1 = a.substr(0, l / 2);
    string a2 = a.substr(l / 2, l / 2);
    string b1 = b.substr(0, l / 2);
    string b2 = b.substr(l / 2, l / 2);
    if ((isOK(a1, b1) && isOK(a2, b2)) || (isOK(a1, b2) && isOK(a2, b1)))
        return 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    if (isOK(a, b)) cout << "YES";
    else cout << "NO";
    return 0;
}