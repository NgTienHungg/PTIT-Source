// https://www.spoj.com/PTIT/problems/PTIT138A/
// PTIT138A - BÀI A - TAM GIÁC VUÔNG

#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    if (v[0] != v[1] && v[1] != v[2])
    {
        if ((v[0] * v[0] + v[1] * v[1]) == (v[2] * v[2]))
            cout << "right";
        else
            cout << "wrong";
    }
    else
        cout << "wrong";
}

int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        solve(a, b, c);
        cout << endl;
    }
    return 0;
}