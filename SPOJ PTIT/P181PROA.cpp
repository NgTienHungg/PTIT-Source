// https://www.spoj.com/PTIT/problems/P181PROA/
// P181PROA - ROUND 1A - Dãy số lẻ kép

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[105];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    if (a[1] % 2 == 0 || a[n] % 2 == 0 || n % 2 == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

// Muốn chia được lẻ dãy con có độ dài lẻ thì n không được chẵn