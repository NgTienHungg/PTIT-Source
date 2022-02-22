// https://code.ptit.edu.vn/student/question/CPP0319
// NHỎ NHẤT - LỚN NHẤT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string Min(int n, int s)
{
    string r(n, '0');
    r[0] = '1', s -= 1;
    for (int i = n - 1; i >= 0; --i) {
        int d = r[i] - '0';
        if (s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;
}

string Max(int n, int s)
{
    string r(n, '0');
    for (int i = 0; i < n; ++i) {
        int d = r[i] - '0';
        if (s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;
}

int main()
{
    int n, s;
    cin >> n >> s;
    if (s <= 0 || s > 9 * n)
        cout << "-1 -1\n";
    else
        cout << Min(n, s) << " " << Max(n, s) << endl;
    return 0;
}