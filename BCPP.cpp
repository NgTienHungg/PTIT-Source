// https://www.spoj.com/PTIT/problems/BCPP/
// BCPP - Số phong phú

#include <bits/stdc++.h>
using namespace std;

// Sàng nguyên tố lưu tổng các ước của tất cả các số
vector<int> v(1e6 + 1, 1);
void eratosthenes()
{
    for (int i = 2; i <= 1e6; i++)
        for (int j = 2 * i; j <= 1e6; j += i)
            v[j] += i;
}

int main()
{
    eratosthenes();
    int l, r;
    cin >> l >> r;
    int count = 0;

    for (int i = l; i <= r; i++)
        if (v[i] > i)
            count++;

    cout << count;
    return 0;
}