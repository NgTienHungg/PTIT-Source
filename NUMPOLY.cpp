// https://www.spoj.com/PTIT/problems/NUMPOLY/
// NUMPOLY - Giao điểm trong đa giác

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n * (n - 1) * (n - 2) * (n - 3) / 24;
    return 0;
}

// Chọn 4 đỉnh bất kì của đa giác -> 1 giao điểm của 2 đường chéo
// Cthuc: nC4