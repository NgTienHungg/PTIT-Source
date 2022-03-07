// https://www.spoj.com/PTIT/problems/P147PROH/
// P147PROH - ROUND 7H - Hai xâu có các kí tự giống nhau

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int test = 1;
    while (cin >> a >> b)
    {
        if (a == "END" && b == "END")
            break;
        cout << "Case " << test++ << ": ";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
            cout << "same" << endl;
        else
            cout << "different" << endl;
    }
    return 0;
}