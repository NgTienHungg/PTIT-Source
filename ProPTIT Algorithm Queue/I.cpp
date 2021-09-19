// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/I
// I. [ProPTIT-Algorithm-Queue] Lucky Number

#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

long long StrToLL(string s)
{
    long long r = 0;
    for (auto x : s) {
        r = r * 10 + (x - '0');
    }
    return r;
}

void pretreatment() {
    queue<string> q;
    q.push("");

    while (1) {
        string s = q.front();
        q.pop();
        
        string x = s + "6";
        string y = s + "8";
        if (x.length() > 18)
            break;

        q.push(x);
        q.push(y);
        
        v.push_back(StrToLL(x));
        v.push_back(StrToLL(y));
    }
}

void TestCase()
{
    long long a, b;
    cin >> a >> b;

    int res = 0;
    for (auto x : v) {
        if (x > b) break;
        if (x >= a) res++;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    pretreatment();

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}