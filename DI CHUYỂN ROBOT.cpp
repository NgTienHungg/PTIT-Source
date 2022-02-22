#include <bits/stdc++.h>
using namespace std;

void GG(int &x, int &y, char &huong) {
    if (huong == 'b') y++;
    else if (huong == 'n') y--;
    else if (huong == 't') x--;
    else if (huong == 'p') x++;
}

void BB(int &x, int &y, char &huong) {
    if (huong == 'b') y--, huong = 'n';
    else if (huong == 'n') y++, huong = 'b';
    else if (huong == 't') x++, huong = 'p';
    else if (huong == 'p') x--, huong = 't';
}

void LL(int &x, int &y, char &huong) {
    if (huong == 'b') x--, huong = 't';
    else if (huong == 'n') x++, huong = 'p';
    else if (huong == 't') y--, huong = 'n';
    else if (huong == 'p') y++, huong = 'b';
}

void RR(int &x, int &y, char &huong) {
    if (huong == 'b') x++, huong = 'p';
    else if (huong == 'n') x--, huong = 't';
    else if (huong == 't') y++, huong = 'b';
    else if (huong == 'p') y--, huong = 'n';
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    char huong = 'b';
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'G') GG(x, y, huong);
        else if (s[i] == 'B') BB(x, y, huong);
        else if (s[i] == 'L') LL(x, y, huong);
        else if (s[i] == 'R') RR(x, y, huong);
    }
    cout << x << " " << y;
    return 0;
}