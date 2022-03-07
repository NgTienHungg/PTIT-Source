// https://luyencode.net/problem/FLASHMOB
// FLASHMOB - Flash Mob

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1, n, a, b;
    cin >> c1 >> n;
    bool A[34] = {0}, B[34] = {0};
    A[c1] = B[c1] = 1;
    while (n--) {
        cin >> a >> b;
        if (A[b]) {
            A[a] = 1;
            A[b] = 0;
        }
        if(A[a])
            B[a] = 1;
    }
    for (int i = 1; i <= 33; ++i) {
        if (A[i])
            cout << i << " ";
    }
    int d = 0;
    for (int i = 1; i <= 33; ++i) {
        if (B[i])
            d++;
    }
    cout << d;
    return 0;
}